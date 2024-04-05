// hd2_svc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <Windows.h>
#include <cstdio>

#include "keyboard.h"
//**********************************************************************
//
// Sends Win + D to toggle to the desktop
//
//**********************************************************************
void ShowStartContext()
{
    wprintf_s(L"Sending 'Win-X'\r\n");
    INPUT inputs[4] = {};
    ZeroMemory(inputs, sizeof(inputs));

    inputs[0].type = INPUT_KEYBOARD;
    inputs[0].ki.wVk = VK_LWIN;
    inputs[0].ki.time = 500;

    inputs[1].type = INPUT_KEYBOARD;
    inputs[1].ki.wVk = 'X';
    inputs[1].ki.time = 500;

    inputs[2].type = INPUT_KEYBOARD;
    inputs[2].ki.wVk = 'X';
    inputs[2].ki.dwFlags = KEYEVENTF_KEYUP;
    inputs[2].ki.time = 500;

    inputs[3].type = INPUT_KEYBOARD;
    inputs[3].ki.wVk = VK_LWIN;
    inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;
    inputs[3].ki.time = 500;

    UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
    if (uSent != ARRAYSIZE(inputs))
    {
        wprintf_s(L"SendInput failed: 0x%x\n", HRESULT_FROM_WIN32(GetLastError()));
    }
}

void PressButton(WORD wVK, DWORD dwSleepMilliseconds)
{
    wprintf_s(L"Sending '%x'\n", wVK);
    INPUT inputs[2] = {};
    ZeroMemory(inputs, sizeof(inputs));

    inputs[0].type = INPUT_KEYBOARD;
    inputs[0].ki.wVk = wVK;

    inputs[1].type = INPUT_KEYBOARD;
    inputs[1].ki.wVk = wVK;
    inputs[1].ki.dwFlags = KEYEVENTF_KEYUP;

    UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
    Sleep(dwSleepMilliseconds);
    //INPUT x = INPUT() { type = INPUT_KEYBOARD };
    if (uSent != ARRAYSIZE(inputs))
    {
        wprintf_s(L"SendInput failed: 0x%x\n", HRESULT_FROM_WIN32(GetLastError()));
    }
}

int xmain()
{
    ShowStartContext();
    Sleep(100);
    PressButton('R', 1000);
    for (auto vk : "MSCONFIG")
        PressButton(vk);
    PressButton(VK_RETURN, 0);

    
    return 0;
}

