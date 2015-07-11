// Code generated by protoc-gen-go.
// source: relay.proto
// DO NOT EDIT!

/*
Package PbRelay is a generated protocol buffer package.

It is generated from these files:
	relay.proto

It has these top-level messages:
	RelayReq
	RelayRsp
	GsRegReq
	GsRegRsp
*/
package PbRelay

import proto "code.google.com/p/goprotobuf/proto"
import math "math"

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = math.Inf

type Command int32

const (
	// common.command.CENTER_CMD_BEGIN = 201
	Command_CMD_RELAY_REQ  Command = 201
	Command_CMD_RELAY_RSP  Command = 202
	Command_CMD_GS_REG_REQ Command = 203
	Command_CMD_GS_REG_RSP Command = 204
)

var Command_name = map[int32]string{
	201: "CMD_RELAY_REQ",
	202: "CMD_RELAY_RSP",
	203: "CMD_GS_REG_REQ",
	204: "CMD_GS_REG_RSP",
}
var Command_value = map[string]int32{
	"CMD_RELAY_REQ":  201,
	"CMD_RELAY_RSP":  202,
	"CMD_GS_REG_REQ": 203,
	"CMD_GS_REG_RSP": 204,
}

func (x Command) Enum() *Command {
	p := new(Command)
	*p = x
	return p
}
func (x Command) String() string {
	return proto.EnumName(Command_name, int32(x))
}
func (x *Command) UnmarshalJSON(data []byte) error {
	value, err := proto.UnmarshalJSONEnum(Command_value, data, "Command")
	if err != nil {
		return err
	}
	*x = Command(value)
	return nil
}

type Errcode int32

const (
	Errcode_ERR_INTER         Errcode = 10201
	Errcode_ERR_INVALID_PARAM Errcode = 10202
)

var Errcode_name = map[int32]string{
	10201: "ERR_INTER",
	10202: "ERR_INVALID_PARAM",
}
var Errcode_value = map[string]int32{
	"ERR_INTER":         10201,
	"ERR_INVALID_PARAM": 10202,
}

func (x Errcode) Enum() *Errcode {
	p := new(Errcode)
	*p = x
	return p
}
func (x Errcode) String() string {
	return proto.EnumName(Errcode_name, int32(x))
}
func (x *Errcode) UnmarshalJSON(data []byte) error {
	value, err := proto.UnmarshalJSONEnum(Errcode_value, data, "Errcode")
	if err != nil {
		return err
	}
	*x = Errcode(value)
	return nil
}

type RelayReq struct {
	Destid           *int64  `protobuf:"zigzag64,1,req,name=destid" json:"destid,omitempty"`
	Data             *string `protobuf:"bytes,2,req,name=data" json:"data,omitempty"`
	Resv             *int32  `protobuf:"zigzag32,3,opt,name=resv" json:"resv,omitempty"`
	XXX_unrecognized []byte  `json:"-"`
}

func (m *RelayReq) Reset()         { *m = RelayReq{} }
func (m *RelayReq) String() string { return proto.CompactTextString(m) }
func (*RelayReq) ProtoMessage()    {}

func (m *RelayReq) GetDestid() int64 {
	if m != nil && m.Destid != nil {
		return *m.Destid
	}
	return 0
}

func (m *RelayReq) GetData() string {
	if m != nil && m.Data != nil {
		return *m.Data
	}
	return ""
}

func (m *RelayReq) GetResv() int32 {
	if m != nil && m.Resv != nil {
		return *m.Resv
	}
	return 0
}

type RelayRsp struct {
	Resv             *int32 `protobuf:"zigzag32,1,opt,name=resv" json:"resv,omitempty"`
	XXX_unrecognized []byte `json:"-"`
}

func (m *RelayRsp) Reset()         { *m = RelayRsp{} }
func (m *RelayRsp) String() string { return proto.CompactTextString(m) }
func (*RelayRsp) ProtoMessage()    {}

func (m *RelayRsp) GetResv() int32 {
	if m != nil && m.Resv != nil {
		return *m.Resv
	}
	return 0
}

type GsRegReq struct {
	Gsid             *int64 `protobuf:"zigzag64,1,req,name=gsid" json:"gsid,omitempty"`
	XXX_unrecognized []byte `json:"-"`
}

func (m *GsRegReq) Reset()         { *m = GsRegReq{} }
func (m *GsRegReq) String() string { return proto.CompactTextString(m) }
func (*GsRegReq) ProtoMessage()    {}

func (m *GsRegReq) GetGsid() int64 {
	if m != nil && m.Gsid != nil {
		return *m.Gsid
	}
	return 0
}

type GsRegRsp struct {
	XXX_unrecognized []byte `json:"-"`
}

func (m *GsRegRsp) Reset()         { *m = GsRegRsp{} }
func (m *GsRegRsp) String() string { return proto.CompactTextString(m) }
func (*GsRegRsp) ProtoMessage()    {}

func init() {
	proto.RegisterEnum("PbRelay.Command", Command_name, Command_value)
	proto.RegisterEnum("PbRelay.Errcode", Errcode_name, Errcode_value)
}