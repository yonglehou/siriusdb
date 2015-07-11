// Code generated by protoc-gen-go.
// source: common.proto
// DO NOT EDIT!

/*
Package PbCommon is a generated protocol buffer package.

It is generated from these files:
	common.proto

It has these top-level messages:
	Addr
	AddrLoad
	AreaSrvInfo
*/
package PbCommon

import proto "code.google.com/p/goprotobuf/proto"
import math "math"

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = math.Inf

type Command int32

const (
	Command_CENTER_CMD_BEGIN Command = 10
	Command_CENTER_CMD_END   Command = 100
	Command_DBA_CMD_BEGIN    Command = 101
	Command_DBA_CMD_END      Command = 200
	Command_RELAY_CMD_BEGIN  Command = 201
	Command_RELAY_CMD_END    Command = 300
	Command_LOG_CMD_BEGIN    Command = 301
	Command_LOG_CMD_END      Command = 400
	Command_LOGIN_CMD_BEGIN  Command = 401
	Command_LOGIN_CMD_END    Command = 500
	Command_GAME_CMD_BEGIN   Command = 501
	Command_GAME_CMD_END     Command = 800
	Command_ONLINE_CMD_BEGIN Command = 801
	Command_ONLINE_CMD_END   Command = 900
)

var Command_name = map[int32]string{
	10:  "CENTER_CMD_BEGIN",
	100: "CENTER_CMD_END",
	101: "DBA_CMD_BEGIN",
	200: "DBA_CMD_END",
	201: "RELAY_CMD_BEGIN",
	300: "RELAY_CMD_END",
	301: "LOG_CMD_BEGIN",
	400: "LOG_CMD_END",
	401: "LOGIN_CMD_BEGIN",
	500: "LOGIN_CMD_END",
	501: "GAME_CMD_BEGIN",
	800: "GAME_CMD_END",
	801: "ONLINE_CMD_BEGIN",
	900: "ONLINE_CMD_END",
}
var Command_value = map[string]int32{
	"CENTER_CMD_BEGIN": 10,
	"CENTER_CMD_END":   100,
	"DBA_CMD_BEGIN":    101,
	"DBA_CMD_END":      200,
	"RELAY_CMD_BEGIN":  201,
	"RELAY_CMD_END":    300,
	"LOG_CMD_BEGIN":    301,
	"LOG_CMD_END":      400,
	"LOGIN_CMD_BEGIN":  401,
	"LOGIN_CMD_END":    500,
	"GAME_CMD_BEGIN":   501,
	"GAME_CMD_END":     800,
	"ONLINE_CMD_BEGIN": 801,
	"ONLINE_CMD_END":   900,
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
	Errcode_CENTER_ERR_BEGIN Errcode = 10010
	Errcode_CENTER_ERR_END   Errcode = 10100
	Errcode_DBA_ERR_BEGIN    Errcode = 10101
	Errcode_DBA_ERR_END      Errcode = 10200
	Errcode_RELAY_ERR_BEGIN  Errcode = 10201
	Errcode_RELAY_ERR_END    Errcode = 10300
	Errcode_LOG_ERR_BEGIN    Errcode = 10301
	Errcode_LOG_ERR_END      Errcode = 10400
	Errcode_LOGIN_ERR_BEGIN  Errcode = 10401
	Errcode_LOGIN_ERR_END    Errcode = 10500
	Errcode_GAME_ERR_BEGIN   Errcode = 10501
	Errcode_GAME_ERR_END     Errcode = 10800
	Errcode_ONLINE_ERR_BEGIN Errcode = 10801
	Errcode_ONLINE_ERR_END   Errcode = 10900
)

var Errcode_name = map[int32]string{
	10010: "CENTER_ERR_BEGIN",
	10100: "CENTER_ERR_END",
	10101: "DBA_ERR_BEGIN",
	10200: "DBA_ERR_END",
	10201: "RELAY_ERR_BEGIN",
	10300: "RELAY_ERR_END",
	10301: "LOG_ERR_BEGIN",
	10400: "LOG_ERR_END",
	10401: "LOGIN_ERR_BEGIN",
	10500: "LOGIN_ERR_END",
	10501: "GAME_ERR_BEGIN",
	10800: "GAME_ERR_END",
	10801: "ONLINE_ERR_BEGIN",
	10900: "ONLINE_ERR_END",
}
var Errcode_value = map[string]int32{
	"CENTER_ERR_BEGIN": 10010,
	"CENTER_ERR_END":   10100,
	"DBA_ERR_BEGIN":    10101,
	"DBA_ERR_END":      10200,
	"RELAY_ERR_BEGIN":  10201,
	"RELAY_ERR_END":    10300,
	"LOG_ERR_BEGIN":    10301,
	"LOG_ERR_END":      10400,
	"LOGIN_ERR_BEGIN":  10401,
	"LOGIN_ERR_END":    10500,
	"GAME_ERR_BEGIN":   10501,
	"GAME_ERR_END":     10800,
	"ONLINE_ERR_BEGIN": 10801,
	"ONLINE_ERR_END":   10900,
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

type Addr struct {
	Ip               *string `protobuf:"bytes,1,req,name=ip" json:"ip,omitempty"`
	Port             *uint32 `protobuf:"varint,2,req,name=port" json:"port,omitempty"`
	Aid              *int32  `protobuf:"zigzag32,3,req,name=aid" json:"aid,omitempty"`
	Sid              *int32  `protobuf:"zigzag32,4,req,name=sid" json:"sid,omitempty"`
	Gid              *int64  `protobuf:"zigzag64,5,req,name=gid" json:"gid,omitempty"`
	XXX_unrecognized []byte  `json:"-"`
}

func (m *Addr) Reset()         { *m = Addr{} }
func (m *Addr) String() string { return proto.CompactTextString(m) }
func (*Addr) ProtoMessage()    {}

func (m *Addr) GetIp() string {
	if m != nil && m.Ip != nil {
		return *m.Ip
	}
	return ""
}

func (m *Addr) GetPort() uint32 {
	if m != nil && m.Port != nil {
		return *m.Port
	}
	return 0
}

func (m *Addr) GetAid() int32 {
	if m != nil && m.Aid != nil {
		return *m.Aid
	}
	return 0
}

func (m *Addr) GetSid() int32 {
	if m != nil && m.Sid != nil {
		return *m.Sid
	}
	return 0
}

func (m *Addr) GetGid() int64 {
	if m != nil && m.Gid != nil {
		return *m.Gid
	}
	return 0
}

type AddrLoad struct {
	Addr             *Addr  `protobuf:"bytes,1,req,name=addr" json:"addr,omitempty"`
	Linknum          *int32 `protobuf:"zigzag32,2,req,name=linknum" json:"linknum,omitempty"`
	Reqnum           *int32 `protobuf:"zigzag32,3,req,name=reqnum" json:"reqnum,omitempty"`
	DelayMs          *int32 `protobuf:"zigzag32,4,req,name=delay_ms" json:"delay_ms,omitempty"`
	XXX_unrecognized []byte `json:"-"`
}

func (m *AddrLoad) Reset()         { *m = AddrLoad{} }
func (m *AddrLoad) String() string { return proto.CompactTextString(m) }
func (*AddrLoad) ProtoMessage()    {}

func (m *AddrLoad) GetAddr() *Addr {
	if m != nil {
		return m.Addr
	}
	return nil
}

func (m *AddrLoad) GetLinknum() int32 {
	if m != nil && m.Linknum != nil {
		return *m.Linknum
	}
	return 0
}

func (m *AddrLoad) GetReqnum() int32 {
	if m != nil && m.Reqnum != nil {
		return *m.Reqnum
	}
	return 0
}

func (m *AddrLoad) GetDelayMs() int32 {
	if m != nil && m.DelayMs != nil {
		return *m.DelayMs
	}
	return 0
}

type AreaSrvInfo struct {
	Aid              *int32  `protobuf:"zigzag32,1,req,name=aid" json:"aid,omitempty"`
	Sid              *int32  `protobuf:"zigzag32,2,req,name=sid" json:"sid,omitempty"`
	Name             *string `protobuf:"bytes,3,req,name=name" json:"name,omitempty"`
	State            *int32  `protobuf:"zigzag32,4,req,name=state" json:"state,omitempty"`
	XXX_unrecognized []byte  `json:"-"`
}

func (m *AreaSrvInfo) Reset()         { *m = AreaSrvInfo{} }
func (m *AreaSrvInfo) String() string { return proto.CompactTextString(m) }
func (*AreaSrvInfo) ProtoMessage()    {}

func (m *AreaSrvInfo) GetAid() int32 {
	if m != nil && m.Aid != nil {
		return *m.Aid
	}
	return 0
}

func (m *AreaSrvInfo) GetSid() int32 {
	if m != nil && m.Sid != nil {
		return *m.Sid
	}
	return 0
}

func (m *AreaSrvInfo) GetName() string {
	if m != nil && m.Name != nil {
		return *m.Name
	}
	return ""
}

func (m *AreaSrvInfo) GetState() int32 {
	if m != nil && m.State != nil {
		return *m.State
	}
	return 0
}

func init() {
	proto.RegisterEnum("PbCommon.Command", Command_name, Command_value)
	proto.RegisterEnum("PbCommon.Errcode", Errcode_name, Errcode_value)
}
