// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: deviceMessage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "deviceMessage.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace mynigma {

namespace {

const ::google::protobuf::Descriptor* deviceMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  deviceMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_deviceMessage_2eproto() {
  protobuf_AddDesc_deviceMessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "deviceMessage.proto");
  GOOGLE_CHECK(file != NULL);
  deviceMessage_descriptor_ = file->message_type(0);
  static const int deviceMessage_offsets_[8] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(deviceMessage, message_kind_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(deviceMessage, payload_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(deviceMessage, sent_date_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(deviceMessage, expiry_date_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(deviceMessage, burn_after_reading_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(deviceMessage, thread_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(deviceMessage, sender_uuid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(deviceMessage, recipient_uuids_),
  };
  deviceMessage_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      deviceMessage_descriptor_,
      deviceMessage::default_instance_,
      deviceMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(deviceMessage, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(deviceMessage, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(deviceMessage));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_deviceMessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    deviceMessage_descriptor_, &deviceMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_deviceMessage_2eproto() {
  delete deviceMessage::default_instance_;
  delete deviceMessage_reflection_;
}

void protobuf_AddDesc_deviceMessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023deviceMessage.proto\022\007mynigma\"\273\001\n\rdevic"
    "eMessage\022\024\n\014message_kind\030\001 \001(\t\022\017\n\007payloa"
    "d\030\002 \003(\014\022\021\n\tsent_date\030\003 \001(\003\022\023\n\013expiry_dat"
    "e\030\004 \001(\003\022\032\n\022burn_after_reading\030\005 \001(\010\022\021\n\tt"
    "hread_ID\030\006 \001(\t\022\023\n\013sender_UUID\030\007 \001(\t\022\027\n\017r"
    "ecipient_UUIDs\030\010 \003(\t", 220);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "deviceMessage.proto", &protobuf_RegisterTypes);
  deviceMessage::default_instance_ = new deviceMessage();
  deviceMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_deviceMessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_deviceMessage_2eproto {
  StaticDescriptorInitializer_deviceMessage_2eproto() {
    protobuf_AddDesc_deviceMessage_2eproto();
  }
} static_descriptor_initializer_deviceMessage_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int deviceMessage::kMessageKindFieldNumber;
const int deviceMessage::kPayloadFieldNumber;
const int deviceMessage::kSentDateFieldNumber;
const int deviceMessage::kExpiryDateFieldNumber;
const int deviceMessage::kBurnAfterReadingFieldNumber;
const int deviceMessage::kThreadIDFieldNumber;
const int deviceMessage::kSenderUUIDFieldNumber;
const int deviceMessage::kRecipientUUIDsFieldNumber;
#endif  // !_MSC_VER

deviceMessage::deviceMessage()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void deviceMessage::InitAsDefaultInstance() {
}

deviceMessage::deviceMessage(const deviceMessage& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void deviceMessage::SharedCtor() {
  _cached_size_ = 0;
  message_kind_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  sent_date_ = GOOGLE_LONGLONG(0);
  expiry_date_ = GOOGLE_LONGLONG(0);
  burn_after_reading_ = false;
  thread_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  sender_uuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

deviceMessage::~deviceMessage() {
  SharedDtor();
}

void deviceMessage::SharedDtor() {
  if (message_kind_ != &::google::protobuf::internal::kEmptyString) {
    delete message_kind_;
  }
  if (thread_id_ != &::google::protobuf::internal::kEmptyString) {
    delete thread_id_;
  }
  if (sender_uuid_ != &::google::protobuf::internal::kEmptyString) {
    delete sender_uuid_;
  }
  if (this != default_instance_) {
  }
}

void deviceMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* deviceMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return deviceMessage_descriptor_;
}

const deviceMessage& deviceMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_deviceMessage_2eproto();
  return *default_instance_;
}

deviceMessage* deviceMessage::default_instance_ = NULL;

deviceMessage* deviceMessage::New() const {
  return new deviceMessage;
}

void deviceMessage::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_message_kind()) {
      if (message_kind_ != &::google::protobuf::internal::kEmptyString) {
        message_kind_->clear();
      }
    }
    sent_date_ = GOOGLE_LONGLONG(0);
    expiry_date_ = GOOGLE_LONGLONG(0);
    burn_after_reading_ = false;
    if (has_thread_id()) {
      if (thread_id_ != &::google::protobuf::internal::kEmptyString) {
        thread_id_->clear();
      }
    }
    if (has_sender_uuid()) {
      if (sender_uuid_ != &::google::protobuf::internal::kEmptyString) {
        sender_uuid_->clear();
      }
    }
  }
  payload_.Clear();
  recipient_uuids_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool deviceMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string message_kind = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_message_kind()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->message_kind().data(), this->message_kind().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_payload;
        break;
      }

      // repeated bytes payload = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_payload:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->add_payload()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_payload;
        if (input->ExpectTag(24)) goto parse_sent_date;
        break;
      }

      // optional int64 sent_date = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_sent_date:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &sent_date_)));
          set_has_sent_date();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_expiry_date;
        break;
      }

      // optional int64 expiry_date = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_expiry_date:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &expiry_date_)));
          set_has_expiry_date();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_burn_after_reading;
        break;
      }

      // optional bool burn_after_reading = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_burn_after_reading:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &burn_after_reading_)));
          set_has_burn_after_reading();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_thread_ID;
        break;
      }

      // optional string thread_ID = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_thread_ID:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_thread_id()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->thread_id().data(), this->thread_id().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(58)) goto parse_sender_UUID;
        break;
      }

      // optional string sender_UUID = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_sender_UUID:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_sender_uuid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->sender_uuid().data(), this->sender_uuid().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(66)) goto parse_recipient_UUIDs;
        break;
      }

      // repeated string recipient_UUIDs = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_recipient_UUIDs:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_recipient_uuids()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->recipient_uuids(this->recipient_uuids_size() - 1).data(),
            this->recipient_uuids(this->recipient_uuids_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(66)) goto parse_recipient_UUIDs;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void deviceMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string message_kind = 1;
  if (has_message_kind()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->message_kind().data(), this->message_kind().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->message_kind(), output);
  }

  // repeated bytes payload = 2;
  for (int i = 0; i < this->payload_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      2, this->payload(i), output);
  }

  // optional int64 sent_date = 3;
  if (has_sent_date()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->sent_date(), output);
  }

  // optional int64 expiry_date = 4;
  if (has_expiry_date()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->expiry_date(), output);
  }

  // optional bool burn_after_reading = 5;
  if (has_burn_after_reading()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->burn_after_reading(), output);
  }

  // optional string thread_ID = 6;
  if (has_thread_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->thread_id().data(), this->thread_id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      6, this->thread_id(), output);
  }

  // optional string sender_UUID = 7;
  if (has_sender_uuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->sender_uuid().data(), this->sender_uuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      7, this->sender_uuid(), output);
  }

  // repeated string recipient_UUIDs = 8;
  for (int i = 0; i < this->recipient_uuids_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8String(
    this->recipient_uuids(i).data(), this->recipient_uuids(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      8, this->recipient_uuids(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* deviceMessage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string message_kind = 1;
  if (has_message_kind()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->message_kind().data(), this->message_kind().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->message_kind(), target);
  }

  // repeated bytes payload = 2;
  for (int i = 0; i < this->payload_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteBytesToArray(2, this->payload(i), target);
  }

  // optional int64 sent_date = 3;
  if (has_sent_date()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->sent_date(), target);
  }

  // optional int64 expiry_date = 4;
  if (has_expiry_date()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->expiry_date(), target);
  }

  // optional bool burn_after_reading = 5;
  if (has_burn_after_reading()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->burn_after_reading(), target);
  }

  // optional string thread_ID = 6;
  if (has_thread_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->thread_id().data(), this->thread_id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->thread_id(), target);
  }

  // optional string sender_UUID = 7;
  if (has_sender_uuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->sender_uuid().data(), this->sender_uuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        7, this->sender_uuid(), target);
  }

  // repeated string recipient_UUIDs = 8;
  for (int i = 0; i < this->recipient_uuids_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->recipient_uuids(i).data(), this->recipient_uuids(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(8, this->recipient_uuids(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int deviceMessage::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string message_kind = 1;
    if (has_message_kind()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->message_kind());
    }

    // optional int64 sent_date = 3;
    if (has_sent_date()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->sent_date());
    }

    // optional int64 expiry_date = 4;
    if (has_expiry_date()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->expiry_date());
    }

    // optional bool burn_after_reading = 5;
    if (has_burn_after_reading()) {
      total_size += 1 + 1;
    }

    // optional string thread_ID = 6;
    if (has_thread_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->thread_id());
    }

    // optional string sender_UUID = 7;
    if (has_sender_uuid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->sender_uuid());
    }

  }
  // repeated bytes payload = 2;
  total_size += 1 * this->payload_size();
  for (int i = 0; i < this->payload_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::BytesSize(
      this->payload(i));
  }

  // repeated string recipient_UUIDs = 8;
  total_size += 1 * this->recipient_uuids_size();
  for (int i = 0; i < this->recipient_uuids_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->recipient_uuids(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void deviceMessage::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const deviceMessage* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const deviceMessage*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void deviceMessage::MergeFrom(const deviceMessage& from) {
  GOOGLE_CHECK_NE(&from, this);
  payload_.MergeFrom(from.payload_);
  recipient_uuids_.MergeFrom(from.recipient_uuids_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_message_kind()) {
      set_message_kind(from.message_kind());
    }
    if (from.has_sent_date()) {
      set_sent_date(from.sent_date());
    }
    if (from.has_expiry_date()) {
      set_expiry_date(from.expiry_date());
    }
    if (from.has_burn_after_reading()) {
      set_burn_after_reading(from.burn_after_reading());
    }
    if (from.has_thread_id()) {
      set_thread_id(from.thread_id());
    }
    if (from.has_sender_uuid()) {
      set_sender_uuid(from.sender_uuid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void deviceMessage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void deviceMessage::CopyFrom(const deviceMessage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool deviceMessage::IsInitialized() const {

  return true;
}

void deviceMessage::Swap(deviceMessage* other) {
  if (other != this) {
    std::swap(message_kind_, other->message_kind_);
    payload_.Swap(&other->payload_);
    std::swap(sent_date_, other->sent_date_);
    std::swap(expiry_date_, other->expiry_date_);
    std::swap(burn_after_reading_, other->burn_after_reading_);
    std::swap(thread_id_, other->thread_id_);
    std::swap(sender_uuid_, other->sender_uuid_);
    recipient_uuids_.Swap(&other->recipient_uuids_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata deviceMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = deviceMessage_descriptor_;
  metadata.reflection = deviceMessage_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace mynigma

// @@protoc_insertion_point(global_scope)