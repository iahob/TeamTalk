// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: IM.Other.proto

#include "IM.Other.pb.h"

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
namespace IM {
namespace Other {
constexpr IMHeartBeat::IMHeartBeat(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized){}
struct IMHeartBeatDefaultTypeInternal {
  constexpr IMHeartBeatDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~IMHeartBeatDefaultTypeInternal() {}
  union {
    IMHeartBeat _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT IMHeartBeatDefaultTypeInternal _IMHeartBeat_default_instance_;
}  // namespace Other
}  // namespace IM
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_IM_2eOther_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_IM_2eOther_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_IM_2eOther_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_IM_2eOther_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::IM::Other::IMHeartBeat, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::IM::Other::IMHeartBeat)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::IM::Other::_IMHeartBeat_default_instance_),
};

const char descriptor_table_protodef_IM_2eOther_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016IM.Other.proto\022\010IM.Other\"\r\n\013IMHeartBea"
  "tB\031\n\027com.mogujie.tt.protobufb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_IM_2eOther_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_IM_2eOther_2eproto = {
  false, false, 76, descriptor_table_protodef_IM_2eOther_2eproto, "IM.Other.proto", 
  &descriptor_table_IM_2eOther_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_IM_2eOther_2eproto::offsets,
  file_level_metadata_IM_2eOther_2eproto, file_level_enum_descriptors_IM_2eOther_2eproto, file_level_service_descriptors_IM_2eOther_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_IM_2eOther_2eproto_getter() {
  return &descriptor_table_IM_2eOther_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_IM_2eOther_2eproto(&descriptor_table_IM_2eOther_2eproto);
namespace IM {
namespace Other {

// ===================================================================

class IMHeartBeat::_Internal {
 public:
};

IMHeartBeat::IMHeartBeat(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase(arena, is_message_owned) {
  // @@protoc_insertion_point(arena_constructor:IM.Other.IMHeartBeat)
}
IMHeartBeat::IMHeartBeat(const IMHeartBeat& from)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:IM.Other.IMHeartBeat)
}





const ::PROTOBUF_NAMESPACE_ID::Message::ClassData IMHeartBeat::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl,
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl,
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*IMHeartBeat::GetClassData() const { return &_class_data_; }







::PROTOBUF_NAMESPACE_ID::Metadata IMHeartBeat::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_IM_2eOther_2eproto_getter, &descriptor_table_IM_2eOther_2eproto_once,
      file_level_metadata_IM_2eOther_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Other
}  // namespace IM
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::IM::Other::IMHeartBeat* Arena::CreateMaybeMessage< ::IM::Other::IMHeartBeat >(Arena* arena) {
  return Arena::CreateMessageInternal< ::IM::Other::IMHeartBeat >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>