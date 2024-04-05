// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ProtocolInfo.proto

#include "ProtocolInfo.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

PROTOBUF_CONSTEXPR Hd2Request::Hd2Request(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.version_)*/0
  , /*decltype(_impl_.type_)*/0
  , /*decltype(_impl_.button_)*/0
  , /*decltype(_impl_.stratagem_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct Hd2RequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR Hd2RequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~Hd2RequestDefaultTypeInternal() {}
  union {
    Hd2Request _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 Hd2RequestDefaultTypeInternal _Hd2Request_default_instance_;
static ::_pb::Metadata file_level_metadata_ProtocolInfo_2eproto[1];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_ProtocolInfo_2eproto[3];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_ProtocolInfo_2eproto = nullptr;

const uint32_t TableStruct_ProtocolInfo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Hd2Request, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Hd2Request, _impl_.version_),
  PROTOBUF_FIELD_OFFSET(::Hd2Request, _impl_.type_),
  PROTOBUF_FIELD_OFFSET(::Hd2Request, _impl_.button_),
  PROTOBUF_FIELD_OFFSET(::Hd2Request, _impl_.stratagem_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::Hd2Request)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_Hd2Request_default_instance_._instance,
};

const char descriptor_table_protodef_ProtocolInfo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\022ProtocolInfo.proto\"u\n\nHd2Request\022\017\n\007ve"
  "rsion\030\001 \001(\005\022\032\n\004type\030\002 \001(\0162\014.RequestType\022"
  "\031\n\006button\030\003 \001(\0162\t.ButtonId\022\037\n\tstratagem\030"
  "\004 \001(\0162\014.StratagemId*;\n\013RequestType\022\013\n\007RT"
  "_NONE\020\000\022\r\n\tRT_BUTTON\020\001\022\020\n\014RT_STRATAGEM\020\002"
  "*\333\005\n\010ButtonId\022\014\n\010BTN_NONE\020\000\022\014\n\010BTN_LEFT\020"
  "%\022\n\n\006BTN_UP\020&\022\r\n\tBTN_RIGHT\020\'\022\014\n\010BTN_DOWN"
  "\020(\022\016\n\nBTN_SELECT\020)\022\r\n\tBTN_PRINT\020*\022\017\n\013BTN"
  "_EXECUTE\020+\022\020\n\014BTN_SNAPSHOT\020,\022\016\n\nBTN_INSE"
  "RT\020-\022\016\n\nBTN_DELETE\020.\022\014\n\010BTN_HELP\020/\022\r\n\tBT"
  "N_KEY_0\0200\022\r\n\tBTN_KEY_1\0201\022\r\n\tBTN_KEY_2\0202\022"
  "\r\n\tBTN_KEY_3\0203\022\r\n\tBTN_KEY_4\0204\022\r\n\tBTN_KEY"
  "_5\0205\022\r\n\tBTN_KEY_6\0206\022\r\n\tBTN_KEY_7\0207\022\r\n\tBT"
  "N_KEY_8\0208\022\r\n\tBTN_KEY_9\0209\022\r\n\tBTN_KEY_A\020A\022"
  "\r\n\tBTN_KEY_B\020B\022\r\n\tBTN_KEY_C\020C\022\r\n\tBTN_KEY"
  "_D\020D\022\r\n\tBTN_KEY_E\020E\022\r\n\tBTN_KEY_F\020F\022\r\n\tBT"
  "N_KEY_G\020G\022\r\n\tBTN_KEY_H\020H\022\r\n\tBTN_KEY_I\020I\022"
  "\r\n\tBTN_KEY_J\020J\022\r\n\tBTN_KEY_K\020K\022\r\n\tBTN_KEY"
  "_L\020L\022\r\n\tBTN_KEY_M\020M\022\r\n\tBTN_KEY_N\020N\022\r\n\tBT"
  "N_KEY_O\020O\022\r\n\tBTN_KEY_P\020P\022\r\n\tBTN_KEY_Q\020Q\022"
  "\r\n\tBTN_KEY_R\020R\022\r\n\tBTN_KEY_S\020S\022\r\n\tBTN_KEY"
  "_T\020T\022\r\n\tBTN_KEY_U\020U\022\r\n\tBTN_KEY_V\020V\022\r\n\tBT"
  "N_KEY_W\020W\022\r\n\tBTN_KEY_X\020X\022\r\n\tBTN_KEY_Y\020Y\022"
  "\r\n\tBTN_KEY_Z\020Z*X\n\013StratagemId\022\013\n\007SG_NONE"
  "\020\000\022\020\n\014SG_TEST_AABC\020\001\022\024\n\020SG_TEST_ABLEFTCD"
  "\020\002\022\024\n\020SG_TEST_ABCLEFTD\020\003b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_ProtocolInfo_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_ProtocolInfo_2eproto = {
    false, false, 1032, descriptor_table_protodef_ProtocolInfo_2eproto,
    "ProtocolInfo.proto",
    &descriptor_table_ProtocolInfo_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_ProtocolInfo_2eproto::offsets,
    file_level_metadata_ProtocolInfo_2eproto, file_level_enum_descriptors_ProtocolInfo_2eproto,
    file_level_service_descriptors_ProtocolInfo_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_ProtocolInfo_2eproto_getter() {
  return &descriptor_table_ProtocolInfo_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_ProtocolInfo_2eproto(&descriptor_table_ProtocolInfo_2eproto);
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* RequestType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_ProtocolInfo_2eproto);
  return file_level_enum_descriptors_ProtocolInfo_2eproto[0];
}
bool RequestType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ButtonId_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_ProtocolInfo_2eproto);
  return file_level_enum_descriptors_ProtocolInfo_2eproto[1];
}
bool ButtonId_IsValid(int value) {
  switch (value) {
    case 0:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
    case 75:
    case 76:
    case 77:
    case 78:
    case 79:
    case 80:
    case 81:
    case 82:
    case 83:
    case 84:
    case 85:
    case 86:
    case 87:
    case 88:
    case 89:
    case 90:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* StratagemId_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_ProtocolInfo_2eproto);
  return file_level_enum_descriptors_ProtocolInfo_2eproto[2];
}
bool StratagemId_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class Hd2Request::_Internal {
 public:
};

Hd2Request::Hd2Request(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Hd2Request)
}
Hd2Request::Hd2Request(const Hd2Request& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Hd2Request* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.version_){}
    , decltype(_impl_.type_){}
    , decltype(_impl_.button_){}
    , decltype(_impl_.stratagem_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.version_, &from._impl_.version_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.stratagem_) -
    reinterpret_cast<char*>(&_impl_.version_)) + sizeof(_impl_.stratagem_));
  // @@protoc_insertion_point(copy_constructor:Hd2Request)
}

inline void Hd2Request::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.version_){0}
    , decltype(_impl_.type_){0}
    , decltype(_impl_.button_){0}
    , decltype(_impl_.stratagem_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

Hd2Request::~Hd2Request() {
  // @@protoc_insertion_point(destructor:Hd2Request)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Hd2Request::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Hd2Request::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Hd2Request::Clear() {
// @@protoc_insertion_point(message_clear_start:Hd2Request)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.version_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.stratagem_) -
      reinterpret_cast<char*>(&_impl_.version_)) + sizeof(_impl_.stratagem_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Hd2Request::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 version = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.version_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .RequestType type = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_type(static_cast<::RequestType>(val));
        } else
          goto handle_unusual;
        continue;
      // .ButtonId button = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_button(static_cast<::ButtonId>(val));
        } else
          goto handle_unusual;
        continue;
      // .StratagemId stratagem = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_stratagem(static_cast<::StratagemId>(val));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Hd2Request::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Hd2Request)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 version = 1;
  if (this->_internal_version() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_version(), target);
  }

  // .RequestType type = 2;
  if (this->_internal_type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      2, this->_internal_type(), target);
  }

  // .ButtonId button = 3;
  if (this->_internal_button() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      3, this->_internal_button(), target);
  }

  // .StratagemId stratagem = 4;
  if (this->_internal_stratagem() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      4, this->_internal_stratagem(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Hd2Request)
  return target;
}

size_t Hd2Request::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Hd2Request)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 version = 1;
  if (this->_internal_version() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_version());
  }

  // .RequestType type = 2;
  if (this->_internal_type() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_type());
  }

  // .ButtonId button = 3;
  if (this->_internal_button() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_button());
  }

  // .StratagemId stratagem = 4;
  if (this->_internal_stratagem() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_stratagem());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Hd2Request::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Hd2Request::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Hd2Request::GetClassData() const { return &_class_data_; }


void Hd2Request::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Hd2Request*>(&to_msg);
  auto& from = static_cast<const Hd2Request&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Hd2Request)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_version() != 0) {
    _this->_internal_set_version(from._internal_version());
  }
  if (from._internal_type() != 0) {
    _this->_internal_set_type(from._internal_type());
  }
  if (from._internal_button() != 0) {
    _this->_internal_set_button(from._internal_button());
  }
  if (from._internal_stratagem() != 0) {
    _this->_internal_set_stratagem(from._internal_stratagem());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Hd2Request::CopyFrom(const Hd2Request& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Hd2Request)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Hd2Request::IsInitialized() const {
  return true;
}

void Hd2Request::InternalSwap(Hd2Request* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Hd2Request, _impl_.stratagem_)
      + sizeof(Hd2Request::_impl_.stratagem_)
      - PROTOBUF_FIELD_OFFSET(Hd2Request, _impl_.version_)>(
          reinterpret_cast<char*>(&_impl_.version_),
          reinterpret_cast<char*>(&other->_impl_.version_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Hd2Request::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_ProtocolInfo_2eproto_getter, &descriptor_table_ProtocolInfo_2eproto_once,
      file_level_metadata_ProtocolInfo_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Hd2Request*
Arena::CreateMaybeMessage< ::Hd2Request >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Hd2Request >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>