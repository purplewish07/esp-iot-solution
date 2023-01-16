/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ota_send_file.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "ota_send_file.pb-c.h"
void   cmd_send_file__init
(CmdSendFile         *message)
{
    static const CmdSendFile init_value = CMD_SEND_FILE__INIT;
    *message = init_value;
}
size_t cmd_send_file__get_packed_size
(const CmdSendFile *message)
{
    assert(message->base.descriptor == &cmd_send_file__descriptor);
    return protobuf_c_message_get_packed_size ((const ProtobufCMessage *)(message));
}
size_t cmd_send_file__pack
(const CmdSendFile *message,
 uint8_t       *out)
{
    assert(message->base.descriptor == &cmd_send_file__descriptor);
    return protobuf_c_message_pack ((const ProtobufCMessage *)message, out);
}
size_t cmd_send_file__pack_to_buffer
(const CmdSendFile *message,
 ProtobufCBuffer *buffer)
{
    assert(message->base.descriptor == &cmd_send_file__descriptor);
    return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage *)message, buffer);
}
CmdSendFile *
cmd_send_file__unpack
(ProtobufCAllocator  *allocator,
 size_t               len,
 const uint8_t       *data)
{
    return (CmdSendFile *)
           protobuf_c_message_unpack (&cmd_send_file__descriptor,
                                      allocator, len, data);
}
void   cmd_send_file__free_unpacked
(CmdSendFile *message,
 ProtobufCAllocator *allocator)
{
    if (!message) {
        return;
    }
    assert(message->base.descriptor == &cmd_send_file__descriptor);
    protobuf_c_message_free_unpacked ((ProtobufCMessage *)message, allocator);
}
void   resp_send_file__init
(RespSendFile         *message)
{
    static const RespSendFile init_value = RESP_SEND_FILE__INIT;
    *message = init_value;
}
size_t resp_send_file__get_packed_size
(const RespSendFile *message)
{
    assert(message->base.descriptor == &resp_send_file__descriptor);
    return protobuf_c_message_get_packed_size ((const ProtobufCMessage *)(message));
}
size_t resp_send_file__pack
(const RespSendFile *message,
 uint8_t       *out)
{
    assert(message->base.descriptor == &resp_send_file__descriptor);
    return protobuf_c_message_pack ((const ProtobufCMessage *)message, out);
}
size_t resp_send_file__pack_to_buffer
(const RespSendFile *message,
 ProtobufCBuffer *buffer)
{
    assert(message->base.descriptor == &resp_send_file__descriptor);
    return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage *)message, buffer);
}
RespSendFile *
resp_send_file__unpack
(ProtobufCAllocator  *allocator,
 size_t               len,
 const uint8_t       *data)
{
    return (RespSendFile *)
           protobuf_c_message_unpack (&resp_send_file__descriptor,
                                      allocator, len, data);
}
void   resp_send_file__free_unpacked
(RespSendFile *message,
 ProtobufCAllocator *allocator)
{
    if (!message) {
        return;
    }
    assert(message->base.descriptor == &resp_send_file__descriptor);
    protobuf_c_message_free_unpacked ((ProtobufCMessage *)message, allocator);
}
void   cmd_start_ota__init
(CmdStartOTA         *message)
{
    static const CmdStartOTA init_value = CMD_START_OTA__INIT;
    *message = init_value;
}
size_t cmd_start_ota__get_packed_size
(const CmdStartOTA *message)
{
    assert(message->base.descriptor == &cmd_start_ota__descriptor);
    return protobuf_c_message_get_packed_size ((const ProtobufCMessage *)(message));
}
size_t cmd_start_ota__pack
(const CmdStartOTA *message,
 uint8_t       *out)
{
    assert(message->base.descriptor == &cmd_start_ota__descriptor);
    return protobuf_c_message_pack ((const ProtobufCMessage *)message, out);
}
size_t cmd_start_ota__pack_to_buffer
(const CmdStartOTA *message,
 ProtobufCBuffer *buffer)
{
    assert(message->base.descriptor == &cmd_start_ota__descriptor);
    return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage *)message, buffer);
}
CmdStartOTA *
cmd_start_ota__unpack
(ProtobufCAllocator  *allocator,
 size_t               len,
 const uint8_t       *data)
{
    return (CmdStartOTA *)
           protobuf_c_message_unpack (&cmd_start_ota__descriptor,
                                      allocator, len, data);
}
void   cmd_start_ota__free_unpacked
(CmdStartOTA *message,
 ProtobufCAllocator *allocator)
{
    if (!message) {
        return;
    }
    assert(message->base.descriptor == &cmd_start_ota__descriptor);
    protobuf_c_message_free_unpacked ((ProtobufCMessage *)message, allocator);
}
void   resp_start_ota__init
(RespStartOTA         *message)
{
    static const RespStartOTA init_value = RESP_START_OTA__INIT;
    *message = init_value;
}
size_t resp_start_ota__get_packed_size
(const RespStartOTA *message)
{
    assert(message->base.descriptor == &resp_start_ota__descriptor);
    return protobuf_c_message_get_packed_size ((const ProtobufCMessage *)(message));
}
size_t resp_start_ota__pack
(const RespStartOTA *message,
 uint8_t       *out)
{
    assert(message->base.descriptor == &resp_start_ota__descriptor);
    return protobuf_c_message_pack ((const ProtobufCMessage *)message, out);
}
size_t resp_start_ota__pack_to_buffer
(const RespStartOTA *message,
 ProtobufCBuffer *buffer)
{
    assert(message->base.descriptor == &resp_start_ota__descriptor);
    return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage *)message, buffer);
}
RespStartOTA *
resp_start_ota__unpack
(ProtobufCAllocator  *allocator,
 size_t               len,
 const uint8_t       *data)
{
    return (RespStartOTA *)
           protobuf_c_message_unpack (&resp_start_ota__descriptor,
                                      allocator, len, data);
}
void   resp_start_ota__free_unpacked
(RespStartOTA *message,
 ProtobufCAllocator *allocator)
{
    if (!message) {
        return;
    }
    assert(message->base.descriptor == &resp_start_ota__descriptor);
    protobuf_c_message_free_unpacked ((ProtobufCMessage *)message, allocator);
}
void   cmd_finish_ota__init
(CmdFinishOTA         *message)
{
    static const CmdFinishOTA init_value = CMD_FINISH_OTA__INIT;
    *message = init_value;
}
size_t cmd_finish_ota__get_packed_size
(const CmdFinishOTA *message)
{
    assert(message->base.descriptor == &cmd_finish_ota__descriptor);
    return protobuf_c_message_get_packed_size ((const ProtobufCMessage *)(message));
}
size_t cmd_finish_ota__pack
(const CmdFinishOTA *message,
 uint8_t       *out)
{
    assert(message->base.descriptor == &cmd_finish_ota__descriptor);
    return protobuf_c_message_pack ((const ProtobufCMessage *)message, out);
}
size_t cmd_finish_ota__pack_to_buffer
(const CmdFinishOTA *message,
 ProtobufCBuffer *buffer)
{
    assert(message->base.descriptor == &cmd_finish_ota__descriptor);
    return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage *)message, buffer);
}
CmdFinishOTA *
cmd_finish_ota__unpack
(ProtobufCAllocator  *allocator,
 size_t               len,
 const uint8_t       *data)
{
    return (CmdFinishOTA *)
           protobuf_c_message_unpack (&cmd_finish_ota__descriptor,
                                      allocator, len, data);
}
void   cmd_finish_ota__free_unpacked
(CmdFinishOTA *message,
 ProtobufCAllocator *allocator)
{
    if (!message) {
        return;
    }
    assert(message->base.descriptor == &cmd_finish_ota__descriptor);
    protobuf_c_message_free_unpacked ((ProtobufCMessage *)message, allocator);
}
void   resp_finish_ota__init
(RespFinishOTA         *message)
{
    static const RespFinishOTA init_value = RESP_FINISH_OTA__INIT;
    *message = init_value;
}
size_t resp_finish_ota__get_packed_size
(const RespFinishOTA *message)
{
    assert(message->base.descriptor == &resp_finish_ota__descriptor);
    return protobuf_c_message_get_packed_size ((const ProtobufCMessage *)(message));
}
size_t resp_finish_ota__pack
(const RespFinishOTA *message,
 uint8_t       *out)
{
    assert(message->base.descriptor == &resp_finish_ota__descriptor);
    return protobuf_c_message_pack ((const ProtobufCMessage *)message, out);
}
size_t resp_finish_ota__pack_to_buffer
(const RespFinishOTA *message,
 ProtobufCBuffer *buffer)
{
    assert(message->base.descriptor == &resp_finish_ota__descriptor);
    return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage *)message, buffer);
}
RespFinishOTA *
resp_finish_ota__unpack
(ProtobufCAllocator  *allocator,
 size_t               len,
 const uint8_t       *data)
{
    return (RespFinishOTA *)
           protobuf_c_message_unpack (&resp_finish_ota__descriptor,
                                      allocator, len, data);
}
void   resp_finish_ota__free_unpacked
(RespFinishOTA *message,
 ProtobufCAllocator *allocator)
{
    if (!message) {
        return;
    }
    assert(message->base.descriptor == &resp_finish_ota__descriptor);
    protobuf_c_message_free_unpacked ((ProtobufCMessage *)message, allocator);
}
void   send_file_payload__init
(SendFilePayload         *message)
{
    static const SendFilePayload init_value = SEND_FILE_PAYLOAD__INIT;
    *message = init_value;
}
size_t send_file_payload__get_packed_size
(const SendFilePayload *message)
{
    assert(message->base.descriptor == &send_file_payload__descriptor);
    return protobuf_c_message_get_packed_size ((const ProtobufCMessage *)(message));
}
size_t send_file_payload__pack
(const SendFilePayload *message,
 uint8_t       *out)
{
    assert(message->base.descriptor == &send_file_payload__descriptor);
    return protobuf_c_message_pack ((const ProtobufCMessage *)message, out);
}
size_t send_file_payload__pack_to_buffer
(const SendFilePayload *message,
 ProtobufCBuffer *buffer)
{
    assert(message->base.descriptor == &send_file_payload__descriptor);
    return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage *)message, buffer);
}
SendFilePayload *
send_file_payload__unpack
(ProtobufCAllocator  *allocator,
 size_t               len,
 const uint8_t       *data)
{
    return (SendFilePayload *)
           protobuf_c_message_unpack (&send_file_payload__descriptor,
                                      allocator, len, data);
}
void   send_file_payload__free_unpacked
(SendFilePayload *message,
 ProtobufCAllocator *allocator)
{
    if (!message) {
        return;
    }
    assert(message->base.descriptor == &send_file_payload__descriptor);
    protobuf_c_message_free_unpacked ((ProtobufCMessage *)message, allocator);
}
static const ProtobufCFieldDescriptor cmd_send_file__field_descriptors[1] = {
    {
        "data",
        1,
        PROTOBUF_C_LABEL_NONE,
        PROTOBUF_C_TYPE_BYTES,
        0,   /* quantifier_offset */
        offsetof(CmdSendFile, data),
        NULL,
        NULL,
        0,             /* flags */
        0, NULL, NULL  /* reserved1,reserved2, etc */
    },
};
static const unsigned cmd_send_file__field_indices_by_name[] = {
    0,   /* field[0] = data */
};
static const ProtobufCIntRange cmd_send_file__number_ranges[1 + 1] = {
    { 1, 0 },
    { 0, 1 }
};
const ProtobufCMessageDescriptor cmd_send_file__descriptor = {
    PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
    "CmdSendFile",
    "CmdSendFile",
    "CmdSendFile",
    "",
    sizeof(CmdSendFile),
    1,
    cmd_send_file__field_descriptors,
    cmd_send_file__field_indices_by_name,
    1,  cmd_send_file__number_ranges,
    (ProtobufCMessageInit) cmd_send_file__init,
    NULL, NULL, NULL  /* reserved[123] */
};
#define resp_send_file__field_descriptors NULL
#define resp_send_file__field_indices_by_name NULL
#define resp_send_file__number_ranges NULL
const ProtobufCMessageDescriptor resp_send_file__descriptor = {
    PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
    "RespSendFile",
    "RespSendFile",
    "RespSendFile",
    "",
    sizeof(RespSendFile),
    0,
    resp_send_file__field_descriptors,
    resp_send_file__field_indices_by_name,
    0,  resp_send_file__number_ranges,
    (ProtobufCMessageInit) resp_send_file__init,
    NULL, NULL, NULL  /* reserved[123] */
};
static const ProtobufCFieldDescriptor cmd_start_ota__field_descriptors[3] = {
    {
        "file_size",
        1,
        PROTOBUF_C_LABEL_NONE,
        PROTOBUF_C_TYPE_UINT64,
        0,   /* quantifier_offset */
        offsetof(CmdStartOTA, file_size),
        NULL,
        NULL,
        0,             /* flags */
        0, NULL, NULL  /* reserved1,reserved2, etc */
    },
    {
        "block_size",
        2,
        PROTOBUF_C_LABEL_NONE,
        PROTOBUF_C_TYPE_UINT64,
        0,   /* quantifier_offset */
        offsetof(CmdStartOTA, block_size),
        NULL,
        NULL,
        0,             /* flags */
        0, NULL, NULL  /* reserved1,reserved2, etc */
    },
    {
        "partition_name",
        3,
        PROTOBUF_C_LABEL_NONE,
        PROTOBUF_C_TYPE_STRING,
        0,   /* quantifier_offset */
        offsetof(CmdStartOTA, partition_name),
        NULL,
        &protobuf_c_empty_string,
        0,             /* flags */
        0, NULL, NULL  /* reserved1,reserved2, etc */
    },
};
static const unsigned cmd_start_ota__field_indices_by_name[] = {
    1,   /* field[1] = block_size */
    0,   /* field[0] = file_size */
    2,   /* field[2] = partition_name */
};
static const ProtobufCIntRange cmd_start_ota__number_ranges[1 + 1] = {
    { 1, 0 },
    { 0, 3 }
};
const ProtobufCMessageDescriptor cmd_start_ota__descriptor = {
    PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
    "CmdStartOTA",
    "CmdStartOTA",
    "CmdStartOTA",
    "",
    sizeof(CmdStartOTA),
    3,
    cmd_start_ota__field_descriptors,
    cmd_start_ota__field_indices_by_name,
    1,  cmd_start_ota__number_ranges,
    (ProtobufCMessageInit) cmd_start_ota__init,
    NULL, NULL, NULL  /* reserved[123] */
};
#define resp_start_ota__field_descriptors NULL
#define resp_start_ota__field_indices_by_name NULL
#define resp_start_ota__number_ranges NULL
const ProtobufCMessageDescriptor resp_start_ota__descriptor = {
    PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
    "RespStartOTA",
    "RespStartOTA",
    "RespStartOTA",
    "",
    sizeof(RespStartOTA),
    0,
    resp_start_ota__field_descriptors,
    resp_start_ota__field_indices_by_name,
    0,  resp_start_ota__number_ranges,
    (ProtobufCMessageInit) resp_start_ota__init,
    NULL, NULL, NULL  /* reserved[123] */
};
#define cmd_finish_ota__field_descriptors NULL
#define cmd_finish_ota__field_indices_by_name NULL
#define cmd_finish_ota__number_ranges NULL
const ProtobufCMessageDescriptor cmd_finish_ota__descriptor = {
    PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
    "CmdFinishOTA",
    "CmdFinishOTA",
    "CmdFinishOTA",
    "",
    sizeof(CmdFinishOTA),
    0,
    cmd_finish_ota__field_descriptors,
    cmd_finish_ota__field_indices_by_name,
    0,  cmd_finish_ota__number_ranges,
    (ProtobufCMessageInit) cmd_finish_ota__init,
    NULL, NULL, NULL  /* reserved[123] */
};
#define resp_finish_ota__field_descriptors NULL
#define resp_finish_ota__field_indices_by_name NULL
#define resp_finish_ota__number_ranges NULL
const ProtobufCMessageDescriptor resp_finish_ota__descriptor = {
    PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
    "RespFinishOTA",
    "RespFinishOTA",
    "RespFinishOTA",
    "",
    sizeof(RespFinishOTA),
    0,
    resp_finish_ota__field_descriptors,
    resp_finish_ota__field_indices_by_name,
    0,  resp_finish_ota__number_ranges,
    (ProtobufCMessageInit) resp_finish_ota__init,
    NULL, NULL, NULL  /* reserved[123] */
};
static const ProtobufCFieldDescriptor send_file_payload__field_descriptors[8] = {
    {
        "msg",
        1,
        PROTOBUF_C_LABEL_NONE,
        PROTOBUF_C_TYPE_ENUM,
        0,   /* quantifier_offset */
        offsetof(SendFilePayload, msg),
        &send_file_msg_type__descriptor,
        NULL,
        0,             /* flags */
        0, NULL, NULL  /* reserved1,reserved2, etc */
    },
    {
        "status",
        2,
        PROTOBUF_C_LABEL_NONE,
        PROTOBUF_C_TYPE_ENUM,
        0,   /* quantifier_offset */
        offsetof(SendFilePayload, status),
        &status__descriptor,
        NULL,
        0,             /* flags */
        0, NULL, NULL  /* reserved1,reserved2, etc */
    },
    {
        "cmd_send_file",
        10,
        PROTOBUF_C_LABEL_NONE,
        PROTOBUF_C_TYPE_MESSAGE,
        offsetof(SendFilePayload, payload_case),
        offsetof(SendFilePayload, cmd_send_file),
        &cmd_send_file__descriptor,
        NULL,
        0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
        0, NULL, NULL  /* reserved1,reserved2, etc */
    },
    {
        "resp_send_file",
        11,
        PROTOBUF_C_LABEL_NONE,
        PROTOBUF_C_TYPE_MESSAGE,
        offsetof(SendFilePayload, payload_case),
        offsetof(SendFilePayload, resp_send_file),
        &resp_send_file__descriptor,
        NULL,
        0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
        0, NULL, NULL  /* reserved1,reserved2, etc */
    },
    {
        "cmd_start_ota",
        12,
        PROTOBUF_C_LABEL_NONE,
        PROTOBUF_C_TYPE_MESSAGE,
        offsetof(SendFilePayload, payload_case),
        offsetof(SendFilePayload, cmd_start_ota),
        &cmd_start_ota__descriptor,
        NULL,
        0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
        0, NULL, NULL  /* reserved1,reserved2, etc */
    },
    {
        "resp_start_ota",
        13,
        PROTOBUF_C_LABEL_NONE,
        PROTOBUF_C_TYPE_MESSAGE,
        offsetof(SendFilePayload, payload_case),
        offsetof(SendFilePayload, resp_start_ota),
        &resp_start_ota__descriptor,
        NULL,
        0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
        0, NULL, NULL  /* reserved1,reserved2, etc */
    },
    {
        "cmd_finish_ota",
        14,
        PROTOBUF_C_LABEL_NONE,
        PROTOBUF_C_TYPE_MESSAGE,
        offsetof(SendFilePayload, payload_case),
        offsetof(SendFilePayload, cmd_finish_ota),
        &cmd_finish_ota__descriptor,
        NULL,
        0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
        0, NULL, NULL  /* reserved1,reserved2, etc */
    },
    {
        "resp_finish_ota",
        15,
        PROTOBUF_C_LABEL_NONE,
        PROTOBUF_C_TYPE_MESSAGE,
        offsetof(SendFilePayload, payload_case),
        offsetof(SendFilePayload, resp_finish_ota),
        &resp_finish_ota__descriptor,
        NULL,
        0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
        0, NULL, NULL  /* reserved1,reserved2, etc */
    },
};
static const unsigned send_file_payload__field_indices_by_name[] = {
    6,   /* field[6] = cmd_finish_ota */
    2,   /* field[2] = cmd_send_file */
    4,   /* field[4] = cmd_start_ota */
    0,   /* field[0] = msg */
    7,   /* field[7] = resp_finish_ota */
    3,   /* field[3] = resp_send_file */
    5,   /* field[5] = resp_start_ota */
    1,   /* field[1] = status */
};
static const ProtobufCIntRange send_file_payload__number_ranges[2 + 1] = {
    { 1, 0 },
    { 10, 2 },
    { 0, 8 }
};
const ProtobufCMessageDescriptor send_file_payload__descriptor = {
    PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
    "SendFilePayload",
    "SendFilePayload",
    "SendFilePayload",
    "",
    sizeof(SendFilePayload),
    8,
    send_file_payload__field_descriptors,
    send_file_payload__field_indices_by_name,
    2,  send_file_payload__number_ranges,
    (ProtobufCMessageInit) send_file_payload__init,
    NULL, NULL, NULL  /* reserved[123] */
};
static const ProtobufCEnumValue send_file_msg_type__enum_values_by_number[7] = {
    { "TypeReserved", "SEND_FILE_MSG_TYPE__TypeReserved", 0 },
    { "TypeCmdSendFile", "SEND_FILE_MSG_TYPE__TypeCmdSendFile", 1 },
    { "TypeRespSendFile", "SEND_FILE_MSG_TYPE__TypeRespSendFile", 2 },
    { "TypeCmdStartOTA", "SEND_FILE_MSG_TYPE__TypeCmdStartOTA", 3 },
    { "TypeRespStartOTA", "SEND_FILE_MSG_TYPE__TypeRespStartOTA", 4 },
    { "TypeCmdFinishOTA", "SEND_FILE_MSG_TYPE__TypeCmdFinishOTA", 5 },
    { "TypeRespFinishOTA", "SEND_FILE_MSG_TYPE__TypeRespFinishOTA", 6 },
};
static const ProtobufCIntRange send_file_msg_type__value_ranges[] = {
    {0, 0}, {0, 7}
};
static const ProtobufCEnumValueIndex send_file_msg_type__enum_values_by_name[7] = {
    { "TypeCmdFinishOTA", 5 },
    { "TypeCmdSendFile", 1 },
    { "TypeCmdStartOTA", 3 },
    { "TypeReserved", 0 },
    { "TypeRespFinishOTA", 6 },
    { "TypeRespSendFile", 2 },
    { "TypeRespStartOTA", 4 },
};
const ProtobufCEnumDescriptor send_file_msg_type__descriptor = {
    PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
    "SendFileMsgType",
    "SendFileMsgType",
    "SendFileMsgType",
    "",
    7,
    send_file_msg_type__enum_values_by_number,
    7,
    send_file_msg_type__enum_values_by_name,
    1,
    send_file_msg_type__value_ranges,
    NULL, NULL, NULL, NULL /* reserved[1234] */
};
