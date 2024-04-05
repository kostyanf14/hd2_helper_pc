
#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdlib.h>
#include <stdio.h>
#include <map>
#include <vector>

#include "ProtocolInfo.pb.h"
#include "keyboard.h"

// Need to link with Ws2_32.lib
#pragma comment (lib, "Ws2_32.lib")

#define DEFAULT_BUFLEN 512
#define DEFAULT_PORT 27015


class TcpServer
{
public:
	TcpServer()
	{

	}

	bool Init(const char* bind_ip, unsigned short port)
	{
		ZeroMemory(&ListenSocketAddr, sizeof(ListenSocketAddr));

		ListenSocketAddr.sin_family = AF_INET;
		ListenSocketAddr.sin_port = htons(port);

		int erStat = inet_pton(ListenSocketAddr.sin_family, bind_ip, &ListenSocketAddr.sin_addr);
		if (erStat <= 0) {
			printf("inet_pton failed with error: %d\n", WSAGetLastError());
			return false;
		}

		return Init();
	}

	bool Init(ULONG bind_ip, unsigned short port)
	{
		ZeroMemory(&ListenSocketAddr, sizeof(ListenSocketAddr));

		ListenSocketAddr.sin_family = AF_INET;
		ListenSocketAddr.sin_addr.s_addr = bind_ip;
		ListenSocketAddr.sin_port = htons(port);

		return Init();
	}

	SOCKET Accept()
	{
		printf("Accept\n");

		SOCKET ClientSocket = INVALID_SOCKET;

		ClientSocket = accept(ListenSocket, NULL, NULL);
		if (ClientSocket == INVALID_SOCKET) {
			printf("accept failed with error: %d\n", WSAGetLastError());
			//closesocket(ListenSocket);
			WSACleanup();
		}

		return ClientSocket;
	}
private:
	bool Init()
	{
		if (!InitWSA())
			return false;
		if (!CreateListenSocket())
			return false;
	}

	bool InitWSA()
	{
		printf("InitWSA\n");

		WSADATA wsaData;

		SocketResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
		if (SocketResult != 0) {
			printf("WSAStartup failed with error: %d\n", SocketResult);
			return false;
		}

		return true;
	}

	bool CreateListenSocket()
	{
		printf("CreateListenSocket\n");

		ListenSocket = socket(ListenSocketAddr.sin_family, SOCK_STREAM, IPPROTO_TCP);
		if (ListenSocket == INVALID_SOCKET) {
			printf("socket failed with error: %ld\n", WSAGetLastError());
			WSACleanup();
			return false;
		}

		SocketResult = bind(ListenSocket, (sockaddr*)&ListenSocketAddr, sizeof(ListenSocketAddr));
		if (SocketResult == SOCKET_ERROR) {
			printf("bind failed with error: %d\n", WSAGetLastError());
			closesocket(ListenSocket);
			WSACleanup();
			return false;
		}

		SocketResult = listen(ListenSocket, SOMAXCONN);
		if (SocketResult == SOCKET_ERROR) {
			printf("listen failed with error: %d\n", WSAGetLastError());
			closesocket(ListenSocket);
			WSACleanup();
			return false;
		}

		return true;
	}

public:
	SOCKET ListenSocket = INVALID_SOCKET;
	sockaddr_in ListenSocketAddr;

	int SocketResult;
};

std::map<StratagemId, std::vector<WORD>> stratagem_dict =
{
	{ SG_TEST_AABC, {'A', 'A', 'B', 'C'} },
	{ SG_TEST_ABLEFTCD, {'A', 'B', VK_LEFT, 'C', 'D' } },
	{ SG_TEST_ABCLEFTD, {'A', 'B', 'C', VK_LEFT, 'D' } },
};

int __cdecl main(void)
{
	GOOGLE_PROTOBUF_VERIFY_VERSION;

	char recvbuf[DEFAULT_BUFLEN];
	int recvbuflen = DEFAULT_BUFLEN, iResult;


	auto server = new TcpServer();
	server->Init(INADDR_ANY, DEFAULT_PORT);


	// Accept a client socket
	
	// No longer need server socket
	//closesocket(ListenSocket);

	// Receive until the peer shuts down the connection
	do {
		auto ClientSocket = server->Accept();

		printf("Connected\n");

		do {
			Hd2Request request;

			iResult = recv(ClientSocket, recvbuf, recvbuflen, 0);
			if (iResult > 0) {
				printf("Bytes received: %d %s\n", iResult, recvbuf);
				if (request.ParseFromArray(recvbuf, iResult))
				{
					printf("Request: %d 0x%x 0x%x\n", request.version(), (int)request.type(), (int)request.button());

					if (request.type() == RT_BUTTON)
						PressButton((DWORD)request.button());
					if (request.type() == RT_STRATAGEM)
					{
						PressButton(VK_RETURN, 100);
						for (auto b : stratagem_dict[request.stratagem()])
							PressButton(b);
					}
				}
				else
				{
					printf("BAD REQUEST\n");
				}

				/*
				// Echo the buffer back to the sender
				iSendResult = send(ClientSocket, recvbuf, iResult, 0);
				if (iSendResult == SOCKET_ERROR) {
					printf("send failed with error: %d\n", WSAGetLastError());
					closesocket(ClientSocket);
					WSACleanup();
					return 1;
				}
				printf("Bytes sent: %d\n", iSendResult);
				*/
			}
			else if (iResult == 0)
				printf("Connection closing...\n");
			else {
				printf("recv failed with error: %d\n", WSAGetLastError());
				closesocket(ClientSocket);
				WSACleanup();
				return 1;
			}

		} while (iResult > 0);
	} while (iResult == 0);

	// shutdown the connection since we're done
	/*iResult = shutdown(ClientSocket, SD_SEND);
	if (iResult == SOCKET_ERROR) {
		printf("shutdown failed with error: %d\n", WSAGetLastError());
		closesocket(ClientSocket);
		WSACleanup();
		return 1;
	}

	// cleanup
	closesocket(ClientSocket);
	WSACleanup();*/

	return 0;
}

