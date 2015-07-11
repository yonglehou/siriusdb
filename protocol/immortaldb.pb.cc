// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: immortaldb.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "immortaldb.pb.h"

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

namespace immortaldb {

namespace {

const ::google::protobuf::Descriptor* Item_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Item_reflection_ = NULL;
const ::google::protobuf::Descriptor* ItemList_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ItemList_reflection_ = NULL;
const ::google::protobuf::Descriptor* Player_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Player_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_immortaldb_2eproto() {
  protobuf_AddDesc_immortaldb_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "immortaldb.proto");
  GOOGLE_CHECK(file != NULL);
  Item_descriptor_ = file->message_type(0);
  static const int Item_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Item, id_),
  };
  Item_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Item_descriptor_,
      Item::default_instance_,
      Item_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Item, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Item, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Item));
  ItemList_descriptor_ = file->message_type(1);
  static const int ItemList_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ItemList, items_),
  };
  ItemList_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ItemList_descriptor_,
      ItemList::default_instance_,
      ItemList_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ItemList, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ItemList, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ItemList));
  Player_descriptor_ = file->message_type(2);
  static const int Player_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Player, account_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Player, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Player, level_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Player, exp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Player, extend_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Player, itemlist_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Player, roleid_),
  };
  Player_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Player_descriptor_,
      Player::default_instance_,
      Player_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Player, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Player, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Player));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_immortaldb_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Item_descriptor_, &Item::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ItemList_descriptor_, &ItemList::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Player_descriptor_, &Player::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_immortaldb_2eproto() {
  delete Item::default_instance_;
  delete Item_reflection_;
  delete ItemList::default_instance_;
  delete ItemList_reflection_;
  delete Player::default_instance_;
  delete Player_reflection_;
}

void protobuf_AddDesc_immortaldb_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  ::dbproto::protobuf_AddDesc_dbproxy_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020immortaldb.proto\022\nimmortaldb\032 google/p"
    "rotobuf/descriptor.proto\032\rdbproxy.proto\""
    "\022\n\004Item\022\n\n\002id\030\001 \002(\r\"+\n\010ItemList\022\037\n\005items"
    "\030\001 \003(\0132\020.immortaldb.Item\"\257\002\n\006Player\022)\n\007a"
    "ccount\030\001 \002(\tB\030\342\300\031\024VARCHAR(64) NOT NULL\022&"
    "\n\004name\030\002 \002(\tB\030\342\300\031\024VARCHAR(64) NOT NULL\022\037"
    "\n\005level\030\003 \002(\rB\020\342\300\031\014INT NOT NULL\022\035\n\003exp\030\004"
    " \002(\rB\020\342\300\031\014INT NOT NULL\022\030\n\006extend\030\005 \001(\014B\010"
    "\342\300\031\004BLOB\0220\n\010itemlist\030\006 \001(\0132\024.immortaldb."
    "ItemListB\010\342\300\031\004BLOB\0226\n\006roleid\030\007 \002(\004B&\342\300\031\""
    "BIGINT NOT NULL PRIMARY KEY UNIQUE:\016\252\202\031\006"
    "roleid\240\202\031\001", 450);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "immortaldb.proto", &protobuf_RegisterTypes);
  Item::default_instance_ = new Item();
  ItemList::default_instance_ = new ItemList();
  Player::default_instance_ = new Player();
  Item::default_instance_->InitAsDefaultInstance();
  ItemList::default_instance_->InitAsDefaultInstance();
  Player::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_immortaldb_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_immortaldb_2eproto {
  StaticDescriptorInitializer_immortaldb_2eproto() {
    protobuf_AddDesc_immortaldb_2eproto();
  }
} static_descriptor_initializer_immortaldb_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Item::kIdFieldNumber;
#endif  // !_MSC_VER

Item::Item()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Item::InitAsDefaultInstance() {
}

Item::Item(const Item& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Item::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Item::~Item() {
  SharedDtor();
}

void Item::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Item::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Item::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Item_descriptor_;
}

const Item& Item::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_immortaldb_2eproto();
  return *default_instance_;
}

Item* Item::default_instance_ = NULL;

Item* Item::New() const {
  return new Item;
}

void Item::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Item::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_uninterpreted;
        }
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

void Item::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Item::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->id(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Item::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->id());
    }

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

void Item::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Item* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Item*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Item::MergeFrom(const Item& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Item::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Item::CopyFrom(const Item& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Item::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void Item::Swap(Item* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Item::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Item_descriptor_;
  metadata.reflection = Item_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int ItemList::kItemsFieldNumber;
#endif  // !_MSC_VER

ItemList::ItemList()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ItemList::InitAsDefaultInstance() {
}

ItemList::ItemList(const ItemList& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ItemList::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ItemList::~ItemList() {
  SharedDtor();
}

void ItemList::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ItemList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ItemList::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ItemList_descriptor_;
}

const ItemList& ItemList::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_immortaldb_2eproto();
  return *default_instance_;
}

ItemList* ItemList::default_instance_ = NULL;

ItemList* ItemList::New() const {
  return new ItemList;
}

void ItemList::Clear() {
  items_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ItemList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .immortaldb.Item items = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_items:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_items()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_items;
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

void ItemList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .immortaldb.Item items = 1;
  for (int i = 0; i < this->items_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->items(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ItemList::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .immortaldb.Item items = 1;
  for (int i = 0; i < this->items_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->items(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ItemList::ByteSize() const {
  int total_size = 0;

  // repeated .immortaldb.Item items = 1;
  total_size += 1 * this->items_size();
  for (int i = 0; i < this->items_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->items(i));
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

void ItemList::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ItemList* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ItemList*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ItemList::MergeFrom(const ItemList& from) {
  GOOGLE_CHECK_NE(&from, this);
  items_.MergeFrom(from.items_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ItemList::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ItemList::CopyFrom(const ItemList& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ItemList::IsInitialized() const {

  for (int i = 0; i < items_size(); i++) {
    if (!this->items(i).IsInitialized()) return false;
  }
  return true;
}

void ItemList::Swap(ItemList* other) {
  if (other != this) {
    items_.Swap(&other->items_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ItemList::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ItemList_descriptor_;
  metadata.reflection = ItemList_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int Player::kAccountFieldNumber;
const int Player::kNameFieldNumber;
const int Player::kLevelFieldNumber;
const int Player::kExpFieldNumber;
const int Player::kExtendFieldNumber;
const int Player::kItemlistFieldNumber;
const int Player::kRoleidFieldNumber;
#endif  // !_MSC_VER

Player::Player()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Player::InitAsDefaultInstance() {
  itemlist_ = const_cast< ::immortaldb::ItemList*>(&::immortaldb::ItemList::default_instance());
}

Player::Player(const Player& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Player::SharedCtor() {
  _cached_size_ = 0;
  account_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  level_ = 0u;
  exp_ = 0u;
  extend_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  itemlist_ = NULL;
  roleid_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Player::~Player() {
  SharedDtor();
}

void Player::SharedDtor() {
  if (account_ != &::google::protobuf::internal::kEmptyString) {
    delete account_;
  }
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (extend_ != &::google::protobuf::internal::kEmptyString) {
    delete extend_;
  }
  if (this != default_instance_) {
    delete itemlist_;
  }
}

void Player::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Player::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Player_descriptor_;
}

const Player& Player::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_immortaldb_2eproto();
  return *default_instance_;
}

Player* Player::default_instance_ = NULL;

Player* Player::New() const {
  return new Player;
}

void Player::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_account()) {
      if (account_ != &::google::protobuf::internal::kEmptyString) {
        account_->clear();
      }
    }
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::kEmptyString) {
        name_->clear();
      }
    }
    level_ = 0u;
    exp_ = 0u;
    if (has_extend()) {
      if (extend_ != &::google::protobuf::internal::kEmptyString) {
        extend_->clear();
      }
    }
    if (has_itemlist()) {
      if (itemlist_ != NULL) itemlist_->::immortaldb::ItemList::Clear();
    }
    roleid_ = GOOGLE_ULONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Player::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string account = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_account()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->account().data(), this->account().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_name;
        break;
      }

      // required string name = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_level;
        break;
      }

      // required uint32 level = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_level:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &level_)));
          set_has_level();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_exp;
        break;
      }

      // required uint32 exp = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_exp:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &exp_)));
          set_has_exp();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_extend;
        break;
      }

      // optional bytes extend = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_extend:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_extend()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_itemlist;
        break;
      }

      // optional .immortaldb.ItemList itemlist = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_itemlist:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_itemlist()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_roleid;
        break;
      }

      // required uint64 roleid = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_roleid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &roleid_)));
          set_has_roleid();
        } else {
          goto handle_uninterpreted;
        }
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

void Player::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string account = 1;
  if (has_account()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->account().data(), this->account().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->account(), output);
  }

  // required string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->name(), output);
  }

  // required uint32 level = 3;
  if (has_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->level(), output);
  }

  // required uint32 exp = 4;
  if (has_exp()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->exp(), output);
  }

  // optional bytes extend = 5;
  if (has_extend()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      5, this->extend(), output);
  }

  // optional .immortaldb.ItemList itemlist = 6;
  if (has_itemlist()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->itemlist(), output);
  }

  // required uint64 roleid = 7;
  if (has_roleid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(7, this->roleid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Player::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string account = 1;
  if (has_account()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->account().data(), this->account().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->account(), target);
  }

  // required string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // required uint32 level = 3;
  if (has_level()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->level(), target);
  }

  // required uint32 exp = 4;
  if (has_exp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->exp(), target);
  }

  // optional bytes extend = 5;
  if (has_extend()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        5, this->extend(), target);
  }

  // optional .immortaldb.ItemList itemlist = 6;
  if (has_itemlist()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        6, this->itemlist(), target);
  }

  // required uint64 roleid = 7;
  if (has_roleid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(7, this->roleid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Player::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string account = 1;
    if (has_account()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->account());
    }

    // required string name = 2;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // required uint32 level = 3;
    if (has_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->level());
    }

    // required uint32 exp = 4;
    if (has_exp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->exp());
    }

    // optional bytes extend = 5;
    if (has_extend()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->extend());
    }

    // optional .immortaldb.ItemList itemlist = 6;
    if (has_itemlist()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->itemlist());
    }

    // required uint64 roleid = 7;
    if (has_roleid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->roleid());
    }

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

void Player::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Player* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Player*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Player::MergeFrom(const Player& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_account()) {
      set_account(from.account());
    }
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_level()) {
      set_level(from.level());
    }
    if (from.has_exp()) {
      set_exp(from.exp());
    }
    if (from.has_extend()) {
      set_extend(from.extend());
    }
    if (from.has_itemlist()) {
      mutable_itemlist()->::immortaldb::ItemList::MergeFrom(from.itemlist());
    }
    if (from.has_roleid()) {
      set_roleid(from.roleid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Player::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Player::CopyFrom(const Player& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Player::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000004f) != 0x0000004f) return false;

  if (has_itemlist()) {
    if (!this->itemlist().IsInitialized()) return false;
  }
  return true;
}

void Player::Swap(Player* other) {
  if (other != this) {
    std::swap(account_, other->account_);
    std::swap(name_, other->name_);
    std::swap(level_, other->level_);
    std::swap(exp_, other->exp_);
    std::swap(extend_, other->extend_);
    std::swap(itemlist_, other->itemlist_);
    std::swap(roleid_, other->roleid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Player::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Player_descriptor_;
  metadata.reflection = Player_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace immortaldb

// @@protoc_insertion_point(global_scope)
