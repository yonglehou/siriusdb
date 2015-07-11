// Code generated by protoc-gen-go.
// source: onlinedb.proto
// DO NOT EDIT!

/*
Package onlinedb is a generated protocol buffer package.

It is generated from these files:
	onlinedb.proto

It has these top-level messages:
	AccountTable
	RoleInfo
	AccountInfo
	NameTable
*/
package onlinedb

import proto "code.google.com/p/goprotobuf/proto"
import math "math"

// discarding unused import google_protobuf "seasun.com/sirius/proto/google/protobuf/descriptor.pb"
// discarding unused import dbproto "seasun.com/sirius/proto/dbproxy.pb"

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = math.Inf

type AccountTable struct {
	Name             *string `protobuf:"bytes,1,req,name=name" json:"name,omitempty"`
	Value            []byte  `protobuf:"bytes,2,req,name=value" json:"value,omitempty"`
	XXX_unrecognized []byte  `json:"-"`
}

func (m *AccountTable) Reset()         { *m = AccountTable{} }
func (m *AccountTable) String() string { return proto.CompactTextString(m) }
func (*AccountTable) ProtoMessage()    {}

func (m *AccountTable) GetName() string {
	if m != nil && m.Name != nil {
		return *m.Name
	}
	return ""
}

func (m *AccountTable) GetValue() []byte {
	if m != nil {
		return m.Value
	}
	return nil
}

type RoleInfo struct {
	// 角色/玩家名字
	Name *string `protobuf:"bytes,1,req,name=name" json:"name,omitempty"`
	// user unique id
	Id *uint64 `protobuf:"varint,2,opt,name=id,def=0" json:"id,omitempty"`
	// 创建时间
	Createtime *uint64 `protobuf:"varint,3,req,name=createtime" json:"createtime,omitempty"`
	// 所在服ID
	Sid *uint32 `protobuf:"varint,4,req,name=sid" json:"sid,omitempty"`
	// 区ID
	Aid *uint32 `protobuf:"varint,5,req,name=aid" json:"aid,omitempty"`
	// 最近一次登录时间
	Logintime *uint64 `protobuf:"varint,6,opt,name=logintime,def=0" json:"logintime,omitempty"`
	// 是否登录
	Islogin *bool `protobuf:"varint,7,opt,name=islogin,def=0" json:"islogin,omitempty"`
	// 最近一次登录所在的GSID
	Gid *uint64 `protobuf:"varint,8,opt,name=gid,def=0" json:"gid,omitempty"`
	// 校验用token
	Token []byte `protobuf:"bytes,9,opt,name=token" json:"token,omitempty"`
	// 扩展数据, 玩家注册时由客户端赋值,
	// 用于记录业务相关数据, 比如角色职业, 性别等.
	Extend           []byte `protobuf:"bytes,10,opt,name=extend" json:"extend,omitempty"`
	XXX_unrecognized []byte `json:"-"`
}

func (m *RoleInfo) Reset()         { *m = RoleInfo{} }
func (m *RoleInfo) String() string { return proto.CompactTextString(m) }
func (*RoleInfo) ProtoMessage()    {}

const Default_RoleInfo_Id uint64 = 0
const Default_RoleInfo_Logintime uint64 = 0
const Default_RoleInfo_Islogin bool = false
const Default_RoleInfo_Gid uint64 = 0

func (m *RoleInfo) GetName() string {
	if m != nil && m.Name != nil {
		return *m.Name
	}
	return ""
}

func (m *RoleInfo) GetId() uint64 {
	if m != nil && m.Id != nil {
		return *m.Id
	}
	return Default_RoleInfo_Id
}

func (m *RoleInfo) GetCreatetime() uint64 {
	if m != nil && m.Createtime != nil {
		return *m.Createtime
	}
	return 0
}

func (m *RoleInfo) GetSid() uint32 {
	if m != nil && m.Sid != nil {
		return *m.Sid
	}
	return 0
}

func (m *RoleInfo) GetAid() uint32 {
	if m != nil && m.Aid != nil {
		return *m.Aid
	}
	return 0
}

func (m *RoleInfo) GetLogintime() uint64 {
	if m != nil && m.Logintime != nil {
		return *m.Logintime
	}
	return Default_RoleInfo_Logintime
}

func (m *RoleInfo) GetIslogin() bool {
	if m != nil && m.Islogin != nil {
		return *m.Islogin
	}
	return Default_RoleInfo_Islogin
}

func (m *RoleInfo) GetGid() uint64 {
	if m != nil && m.Gid != nil {
		return *m.Gid
	}
	return Default_RoleInfo_Gid
}

func (m *RoleInfo) GetToken() []byte {
	if m != nil {
		return m.Token
	}
	return nil
}

func (m *RoleInfo) GetExtend() []byte {
	if m != nil {
		return m.Extend
	}
	return nil
}

type AccountInfo struct {
	// 账户
	Account *string `protobuf:"bytes,1,req,name=account" json:"account,omitempty"`
	// 创建时间
	Regtime *uint64 `protobuf:"varint,2,req,name=regtime" json:"regtime,omitempty"`
	// Role
	Roles            []*RoleInfo `protobuf:"bytes,3,rep,name=roles" json:"roles,omitempty"`
	XXX_unrecognized []byte      `json:"-"`
}

func (m *AccountInfo) Reset()         { *m = AccountInfo{} }
func (m *AccountInfo) String() string { return proto.CompactTextString(m) }
func (*AccountInfo) ProtoMessage()    {}

func (m *AccountInfo) GetAccount() string {
	if m != nil && m.Account != nil {
		return *m.Account
	}
	return ""
}

func (m *AccountInfo) GetRegtime() uint64 {
	if m != nil && m.Regtime != nil {
		return *m.Regtime
	}
	return 0
}

func (m *AccountInfo) GetRoles() []*RoleInfo {
	if m != nil {
		return m.Roles
	}
	return nil
}

type NameTable struct {
	// UserID
	Id *uint64 `protobuf:"varint,1,opt,name=id" json:"id,omitempty"`
	// Name
	Name             *string `protobuf:"bytes,2,req,name=name" json:"name,omitempty"`
	XXX_unrecognized []byte  `json:"-"`
}

func (m *NameTable) Reset()         { *m = NameTable{} }
func (m *NameTable) String() string { return proto.CompactTextString(m) }
func (*NameTable) ProtoMessage()    {}

func (m *NameTable) GetId() uint64 {
	if m != nil && m.Id != nil {
		return *m.Id
	}
	return 0
}

func (m *NameTable) GetName() string {
	if m != nil && m.Name != nil {
		return *m.Name
	}
	return ""
}

func init() {
}