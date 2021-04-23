// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "test.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* Test_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Test_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_test_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_test_2eproto() {
  protobuf_AddDesc_test_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "test.proto");
  GOOGLE_CHECK(file != NULL);
  Test_descriptor_ = file->message_type(0);
  static const int Test_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Test, v1_),
  };
  Test_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Test_descriptor_,
      Test::internal_default_instance(),
      Test_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Test, _has_bits_),
      -1,
      -1,
      sizeof(Test),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Test, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_test_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Test_descriptor_, Test::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_test_2eproto() {
  Test_default_instance_.Shutdown();
  delete Test_reflection_;
}

void protobuf_InitDefaults_test_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  Test_default_instance_.DefaultConstruct();
  Test_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_test_2eproto_once_);
void protobuf_InitDefaults_test_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_test_2eproto_once_,
                 &protobuf_InitDefaults_test_2eproto_impl);
}
void protobuf_AddDesc_test_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_test_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\ntest.proto\"\022\n\004Test\022\n\n\002v1\030\001 \003(\005", 32);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "test.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_test_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_test_2eproto_once_);
void protobuf_AddDesc_test_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_test_2eproto_once_,
                 &protobuf_AddDesc_test_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_test_2eproto {
  StaticDescriptorInitializer_test_2eproto() {
    protobuf_AddDesc_test_2eproto();
  }
} static_descriptor_initializer_test_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Test::kV1FieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Test::Test()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_test_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:Test)
}

void Test::InitAsDefaultInstance() {
}

Test::Test(const Test& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Test)
}

void Test::SharedCtor() {
  _cached_size_ = 0;
}

Test::~Test() {
  // @@protoc_insertion_point(destructor:Test)
  SharedDtor();
}

void Test::SharedDtor() {
}

void Test::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Test::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Test_descriptor_;
}

const Test& Test::default_instance() {
  protobuf_InitDefaults_test_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<Test> Test_default_instance_;

Test* Test::New(::google::protobuf::Arena* arena) const {
  Test* n = new Test;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Test::Clear() {
// @@protoc_insertion_point(message_clear_start:Test)
  v1_.Clear();
  _has_bits_.Clear();
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Test::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Test)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated int32 v1 = 1;
      case 1: {
        if (tag == 8) {
         parse_v1:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 8, input, this->mutable_v1())));
        } else if (tag == 10) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_v1())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(8)) goto parse_v1;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Test)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Test)
  return false;
#undef DO_
}

void Test::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Test)
  // repeated int32 v1 = 1;
  for (int i = 0; i < this->v1_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      1, this->v1(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Test)
}

::google::protobuf::uint8* Test::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Test)
  // repeated int32 v1 = 1;
  for (int i = 0; i < this->v1_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(1, this->v1(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Test)
  return target;
}

size_t Test::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Test)
  size_t total_size = 0;

  // repeated int32 v1 = 1;
  {
    size_t data_size = 0;
    unsigned int count = this->v1_size();
    for (unsigned int i = 0; i < count; i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->v1(i));
    }
    total_size += 1 *
                  ::google::protobuf::internal::FromIntSize(this->v1_size());
    total_size += data_size;
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Test::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Test)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Test* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Test>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Test)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Test)
    UnsafeMergeFrom(*source);
  }
}

void Test::MergeFrom(const Test& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Test)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void Test::UnsafeMergeFrom(const Test& from) {
  GOOGLE_DCHECK(&from != this);
  v1_.UnsafeMergeFrom(from.v1_);
  if (from._internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::UnknownFieldSet::MergeToInternalMetdata(
      from.unknown_fields(), &_internal_metadata_);
  }
}

void Test::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Test)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Test::CopyFrom(const Test& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Test)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool Test::IsInitialized() const {

  return true;
}

void Test::Swap(Test* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Test::InternalSwap(Test* other) {
  v1_.UnsafeArenaSwap(&other->v1_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Test::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Test_descriptor_;
  metadata.reflection = Test_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Test

// repeated int32 v1 = 1;
int Test::v1_size() const {
  return v1_.size();
}
void Test::clear_v1() {
  v1_.Clear();
}
::google::protobuf::int32 Test::v1(int index) const {
  // @@protoc_insertion_point(field_get:Test.v1)
  return v1_.Get(index);
}
void Test::set_v1(int index, ::google::protobuf::int32 value) {
  v1_.Set(index, value);
  // @@protoc_insertion_point(field_set:Test.v1)
}
void Test::add_v1(::google::protobuf::int32 value) {
  v1_.Add(value);
  // @@protoc_insertion_point(field_add:Test.v1)
}
const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
Test::v1() const {
  // @@protoc_insertion_point(field_list:Test.v1)
  return v1_;
}
::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
Test::mutable_v1() {
  // @@protoc_insertion_point(field_mutable_list:Test.v1)
  return &v1_;
}

inline const Test* Test::internal_default_instance() {
  return &Test_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
