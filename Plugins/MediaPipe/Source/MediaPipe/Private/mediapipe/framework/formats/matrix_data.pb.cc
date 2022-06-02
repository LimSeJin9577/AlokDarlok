// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/framework/formats/matrix_data.proto

#include "mediapipe/framework/formats/matrix_data.pb.h"

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
namespace mediapipe {
class MatrixDataDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<MatrixData> _instance;
} _MatrixData_default_instance_;
}  // namespace mediapipe
static void InitDefaultsscc_info_MatrixData_mediapipe_2fframework_2fformats_2fmatrix_5fdata_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mediapipe::_MatrixData_default_instance_;
    new (ptr) ::mediapipe::MatrixData();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mediapipe::MatrixData::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_MatrixData_mediapipe_2fframework_2fformats_2fmatrix_5fdata_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_MatrixData_mediapipe_2fframework_2fformats_2fmatrix_5fdata_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_mediapipe_2fframework_2fformats_2fmatrix_5fdata_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_mediapipe_2fframework_2fformats_2fmatrix_5fdata_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_mediapipe_2fframework_2fformats_2fmatrix_5fdata_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_mediapipe_2fframework_2fformats_2fmatrix_5fdata_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::mediapipe::MatrixData, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::MatrixData, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mediapipe::MatrixData, rows_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::MatrixData, cols_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::MatrixData, packed_data_),
  PROTOBUF_FIELD_OFFSET(::mediapipe::MatrixData, layout_),
  0,
  1,
  ~0u,
  2,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, sizeof(::mediapipe::MatrixData)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mediapipe::_MatrixData_default_instance_),
};

const char descriptor_table_protodef_mediapipe_2fframework_2fformats_2fmatrix_5fdata_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n-mediapipe/framework/formats/matrix_dat"
  "a.proto\022\tmediapipe\"\250\001\n\nMatrixData\022\014\n\004row"
  "s\030\001 \001(\005\022\014\n\004cols\030\002 \001(\005\022\027\n\013packed_data\030\003 \003"
  "(\002B\002\020\001\022:\n\006layout\030\004 \001(\0162\034.mediapipe.Matri"
  "xData.Layout:\014COLUMN_MAJOR\")\n\006Layout\022\020\n\014"
  "COLUMN_MAJOR\020\000\022\r\n\tROW_MAJOR\020\001B5\n\"com.goo"
  "gle.mediapipe.formats.protoB\017MatrixDataP"
  "roto"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_mediapipe_2fframework_2fformats_2fmatrix_5fdata_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_mediapipe_2fframework_2fformats_2fmatrix_5fdata_2eproto_sccs[1] = {
  &scc_info_MatrixData_mediapipe_2fframework_2fformats_2fmatrix_5fdata_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_mediapipe_2fframework_2fformats_2fmatrix_5fdata_2eproto_once;
static bool descriptor_table_mediapipe_2fframework_2fformats_2fmatrix_5fdata_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2fframework_2fformats_2fmatrix_5fdata_2eproto = {
  &descriptor_table_mediapipe_2fframework_2fformats_2fmatrix_5fdata_2eproto_initialized, descriptor_table_protodef_mediapipe_2fframework_2fformats_2fmatrix_5fdata_2eproto, "mediapipe/framework/formats/matrix_data.proto", 284,
  &descriptor_table_mediapipe_2fframework_2fformats_2fmatrix_5fdata_2eproto_once, descriptor_table_mediapipe_2fframework_2fformats_2fmatrix_5fdata_2eproto_sccs, descriptor_table_mediapipe_2fframework_2fformats_2fmatrix_5fdata_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_mediapipe_2fframework_2fformats_2fmatrix_5fdata_2eproto::offsets,
  file_level_metadata_mediapipe_2fframework_2fformats_2fmatrix_5fdata_2eproto, 1, file_level_enum_descriptors_mediapipe_2fframework_2fformats_2fmatrix_5fdata_2eproto, file_level_service_descriptors_mediapipe_2fframework_2fformats_2fmatrix_5fdata_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_mediapipe_2fframework_2fformats_2fmatrix_5fdata_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_mediapipe_2fframework_2fformats_2fmatrix_5fdata_2eproto), true);
namespace mediapipe {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* MatrixData_Layout_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_mediapipe_2fframework_2fformats_2fmatrix_5fdata_2eproto);
  return file_level_enum_descriptors_mediapipe_2fframework_2fformats_2fmatrix_5fdata_2eproto[0];
}
bool MatrixData_Layout_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr MatrixData_Layout MatrixData::COLUMN_MAJOR;
constexpr MatrixData_Layout MatrixData::ROW_MAJOR;
constexpr MatrixData_Layout MatrixData::Layout_MIN;
constexpr MatrixData_Layout MatrixData::Layout_MAX;
constexpr int MatrixData::Layout_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void MatrixData::InitAsDefaultInstance() {
}
class MatrixData::_Internal {
 public:
  using HasBits = decltype(std::declval<MatrixData>()._has_bits_);
  static void set_has_rows(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_cols(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_layout(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

MatrixData::MatrixData()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mediapipe.MatrixData)
}
MatrixData::MatrixData(const MatrixData& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      packed_data_(from.packed_data_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&rows_, &from.rows_,
    static_cast<size_t>(reinterpret_cast<char*>(&layout_) -
    reinterpret_cast<char*>(&rows_)) + sizeof(layout_));
  // @@protoc_insertion_point(copy_constructor:mediapipe.MatrixData)
}

void MatrixData::SharedCtor() {
  ::memset(&rows_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&layout_) -
      reinterpret_cast<char*>(&rows_)) + sizeof(layout_));
}

MatrixData::~MatrixData() {
  // @@protoc_insertion_point(destructor:mediapipe.MatrixData)
  SharedDtor();
}

void MatrixData::SharedDtor() {
}

void MatrixData::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const MatrixData& MatrixData::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_MatrixData_mediapipe_2fframework_2fformats_2fmatrix_5fdata_2eproto.base);
  return *internal_default_instance();
}


void MatrixData::Clear() {
// @@protoc_insertion_point(message_clear_start:mediapipe.MatrixData)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  packed_data_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    ::memset(&rows_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&layout_) -
        reinterpret_cast<char*>(&rows_)) + sizeof(layout_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* MatrixData::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional int32 rows = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_rows(&has_bits);
          rows_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional int32 cols = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_cols(&has_bits);
          cols_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated float packed_data = 3 [packed = true];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(_internal_mutable_packed_data(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 29) {
          _internal_add_packed_data(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // optional .mediapipe.MatrixData.Layout layout = 4 [default = COLUMN_MAJOR];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::mediapipe::MatrixData_Layout_IsValid(val))) {
            _internal_set_layout(static_cast<::mediapipe::MatrixData_Layout>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(4, val, mutable_unknown_fields());
          }
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* MatrixData::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mediapipe.MatrixData)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 rows = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_rows(), target);
  }

  // optional int32 cols = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_cols(), target);
  }

  // repeated float packed_data = 3 [packed = true];
  if (this->_internal_packed_data_size() > 0) {
    target = stream->WriteFixedPacked(3, _internal_packed_data(), target);
  }

  // optional .mediapipe.MatrixData.Layout layout = 4 [default = COLUMN_MAJOR];
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      4, this->_internal_layout(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mediapipe.MatrixData)
  return target;
}

size_t MatrixData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mediapipe.MatrixData)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated float packed_data = 3 [packed = true];
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_packed_data_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _packed_data_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional int32 rows = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->_internal_rows());
    }

    // optional int32 cols = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->_internal_cols());
    }

    // optional .mediapipe.MatrixData.Layout layout = 4 [default = COLUMN_MAJOR];
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_layout());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MatrixData::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mediapipe.MatrixData)
  GOOGLE_DCHECK_NE(&from, this);
  const MatrixData* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<MatrixData>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mediapipe.MatrixData)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mediapipe.MatrixData)
    MergeFrom(*source);
  }
}

void MatrixData::MergeFrom(const MatrixData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mediapipe.MatrixData)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  packed_data_.MergeFrom(from.packed_data_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      rows_ = from.rows_;
    }
    if (cached_has_bits & 0x00000002u) {
      cols_ = from.cols_;
    }
    if (cached_has_bits & 0x00000004u) {
      layout_ = from.layout_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void MatrixData::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mediapipe.MatrixData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MatrixData::CopyFrom(const MatrixData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mediapipe.MatrixData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MatrixData::IsInitialized() const {
  return true;
}

void MatrixData::InternalSwap(MatrixData* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  packed_data_.InternalSwap(&other->packed_data_);
  swap(rows_, other->rows_);
  swap(cols_, other->cols_);
  swap(layout_, other->layout_);
}

::PROTOBUF_NAMESPACE_ID::Metadata MatrixData::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::mediapipe::MatrixData* Arena::CreateMaybeMessage< ::mediapipe::MatrixData >(Arena* arena) {
  return Arena::CreateInternal< ::mediapipe::MatrixData >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>