/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9 at Mon Apr  8 13:23:45 2019. */

#ifndef PB_PARTICLE_CTRL_DIAGNOSTICS_DIAGNOSTICS_PB_H_INCLUDED
#define PB_PARTICLE_CTRL_DIAGNOSTICS_DIAGNOSTICS_PB_H_INCLUDED
#include <pb.h>

#include "extensions.pb.h"

#include "common.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _particle_ctrl_diagnostics_LogLevel {
    particle_ctrl_diagnostics_LogLevel_INVALID_LOG_LEVEL = 0,
    particle_ctrl_diagnostics_LogLevel_ALL = 1,
    particle_ctrl_diagnostics_LogLevel_TRACE = 2,
    particle_ctrl_diagnostics_LogLevel_INFO = 3,
    particle_ctrl_diagnostics_LogLevel_WARN = 4,
    particle_ctrl_diagnostics_LogLevel_ERROR = 5,
    particle_ctrl_diagnostics_LogLevel_NONE = 6
} particle_ctrl_diagnostics_LogLevel;
#define _particle_ctrl_diagnostics_LogLevel_MIN particle_ctrl_diagnostics_LogLevel_INVALID_LOG_LEVEL
#define _particle_ctrl_diagnostics_LogLevel_MAX particle_ctrl_diagnostics_LogLevel_NONE
#define _particle_ctrl_diagnostics_LogLevel_ARRAYSIZE ((particle_ctrl_diagnostics_LogLevel)(particle_ctrl_diagnostics_LogLevel_NONE+1))

typedef enum _particle_ctrl_diagnostics_LogHandlerType {
    particle_ctrl_diagnostics_LogHandlerType_INVALID_LOG_HANDLER = 0,
    particle_ctrl_diagnostics_LogHandlerType_USB_SERIAL = 1,
    particle_ctrl_diagnostics_LogHandlerType_HW_SERIAL = 2
} particle_ctrl_diagnostics_LogHandlerType;
#define _particle_ctrl_diagnostics_LogHandlerType_MIN particle_ctrl_diagnostics_LogHandlerType_INVALID_LOG_HANDLER
#define _particle_ctrl_diagnostics_LogHandlerType_MAX particle_ctrl_diagnostics_LogHandlerType_HW_SERIAL
#define _particle_ctrl_diagnostics_LogHandlerType_ARRAYSIZE ((particle_ctrl_diagnostics_LogHandlerType)(particle_ctrl_diagnostics_LogHandlerType_HW_SERIAL+1))

/* Struct definitions */
typedef struct _particle_ctrl_diagnostics_AddLogHandlerReply {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_diagnostics_AddLogHandlerReply) */
} particle_ctrl_diagnostics_AddLogHandlerReply;

typedef struct _particle_ctrl_diagnostics_ListLogHandlersReply {
    pb_callback_t ids;
/* @@protoc_insertion_point(struct:particle_ctrl_diagnostics_ListLogHandlersReply) */
} particle_ctrl_diagnostics_ListLogHandlersReply;

typedef struct _particle_ctrl_diagnostics_ListLogHandlersRequest {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_diagnostics_ListLogHandlersRequest) */
} particle_ctrl_diagnostics_ListLogHandlersRequest;

typedef struct _particle_ctrl_diagnostics_RemoveLogHandlerReply {
    char dummy_field;
/* @@protoc_insertion_point(struct:particle_ctrl_diagnostics_RemoveLogHandlerReply) */
} particle_ctrl_diagnostics_RemoveLogHandlerReply;

typedef struct _particle_ctrl_diagnostics_RemoveLogHandlerRequest {
    pb_callback_t id;
/* @@protoc_insertion_point(struct:particle_ctrl_diagnostics_RemoveLogHandlerRequest) */
} particle_ctrl_diagnostics_RemoveLogHandlerRequest;

typedef struct _particle_ctrl_diagnostics_LogFilter {
    pb_callback_t category;
    particle_ctrl_diagnostics_LogLevel level;
/* @@protoc_insertion_point(struct:particle_ctrl_diagnostics_LogFilter) */
} particle_ctrl_diagnostics_LogFilter;

typedef struct _particle_ctrl_diagnostics_SerialLogHandlerSettings {
    uint32_t index;
    uint32_t baud_rate;
/* @@protoc_insertion_point(struct:particle_ctrl_diagnostics_SerialLogHandlerSettings) */
} particle_ctrl_diagnostics_SerialLogHandlerSettings;

typedef struct _particle_ctrl_diagnostics_AddLogHandlerRequest {
    pb_callback_t id;
    particle_ctrl_diagnostics_LogHandlerType type;
    particle_ctrl_diagnostics_LogLevel level;
    pb_callback_t filters;
    pb_size_t which_settings;
    union {
        particle_ctrl_diagnostics_SerialLogHandlerSettings serial_settings;
    } settings;
/* @@protoc_insertion_point(struct:particle_ctrl_diagnostics_AddLogHandlerRequest) */
} particle_ctrl_diagnostics_AddLogHandlerRequest;

/* Default values for struct fields */

/* Initializer values for message structs */
#define particle_ctrl_diagnostics_LogFilter_init_default {{{NULL}, NULL}, (particle_ctrl_diagnostics_LogLevel)0}
#define particle_ctrl_diagnostics_SerialLogHandlerSettings_init_default {0, 0}
#define particle_ctrl_diagnostics_AddLogHandlerRequest_init_default {{{NULL}, NULL}, (particle_ctrl_diagnostics_LogHandlerType)0, (particle_ctrl_diagnostics_LogLevel)0, {{NULL}, NULL}, 0, {particle_ctrl_diagnostics_SerialLogHandlerSettings_init_default}}
#define particle_ctrl_diagnostics_AddLogHandlerReply_init_default {0}
#define particle_ctrl_diagnostics_RemoveLogHandlerRequest_init_default {{{NULL}, NULL}}
#define particle_ctrl_diagnostics_RemoveLogHandlerReply_init_default {0}
#define particle_ctrl_diagnostics_ListLogHandlersRequest_init_default {0}
#define particle_ctrl_diagnostics_ListLogHandlersReply_init_default {{{NULL}, NULL}}
#define particle_ctrl_diagnostics_LogFilter_init_zero {{{NULL}, NULL}, (particle_ctrl_diagnostics_LogLevel)0}
#define particle_ctrl_diagnostics_SerialLogHandlerSettings_init_zero {0, 0}
#define particle_ctrl_diagnostics_AddLogHandlerRequest_init_zero {{{NULL}, NULL}, (particle_ctrl_diagnostics_LogHandlerType)0, (particle_ctrl_diagnostics_LogLevel)0, {{NULL}, NULL}, 0, {particle_ctrl_diagnostics_SerialLogHandlerSettings_init_zero}}
#define particle_ctrl_diagnostics_AddLogHandlerReply_init_zero {0}
#define particle_ctrl_diagnostics_RemoveLogHandlerRequest_init_zero {{{NULL}, NULL}}
#define particle_ctrl_diagnostics_RemoveLogHandlerReply_init_zero {0}
#define particle_ctrl_diagnostics_ListLogHandlersRequest_init_zero {0}
#define particle_ctrl_diagnostics_ListLogHandlersReply_init_zero {{{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define particle_ctrl_diagnostics_ListLogHandlersReply_ids_tag 1
#define particle_ctrl_diagnostics_RemoveLogHandlerRequest_id_tag 1
#define particle_ctrl_diagnostics_LogFilter_category_tag 1
#define particle_ctrl_diagnostics_LogFilter_level_tag 2
#define particle_ctrl_diagnostics_SerialLogHandlerSettings_index_tag 1
#define particle_ctrl_diagnostics_SerialLogHandlerSettings_baud_rate_tag 2
#define particle_ctrl_diagnostics_AddLogHandlerRequest_serial_settings_tag 5
#define particle_ctrl_diagnostics_AddLogHandlerRequest_id_tag 1
#define particle_ctrl_diagnostics_AddLogHandlerRequest_type_tag 2
#define particle_ctrl_diagnostics_AddLogHandlerRequest_level_tag 3
#define particle_ctrl_diagnostics_AddLogHandlerRequest_filters_tag 4

/* Struct field encoding specification for nanopb */
extern const pb_field_t particle_ctrl_diagnostics_LogFilter_fields[3];
extern const pb_field_t particle_ctrl_diagnostics_SerialLogHandlerSettings_fields[3];
extern const pb_field_t particle_ctrl_diagnostics_AddLogHandlerRequest_fields[6];
extern const pb_field_t particle_ctrl_diagnostics_AddLogHandlerReply_fields[1];
extern const pb_field_t particle_ctrl_diagnostics_RemoveLogHandlerRequest_fields[2];
extern const pb_field_t particle_ctrl_diagnostics_RemoveLogHandlerReply_fields[1];
extern const pb_field_t particle_ctrl_diagnostics_ListLogHandlersRequest_fields[1];
extern const pb_field_t particle_ctrl_diagnostics_ListLogHandlersReply_fields[2];

/* Maximum encoded size of messages (where known) */
/* particle_ctrl_diagnostics_LogFilter_size depends on runtime parameters */
#define particle_ctrl_diagnostics_SerialLogHandlerSettings_size 12
/* particle_ctrl_diagnostics_AddLogHandlerRequest_size depends on runtime parameters */
#define particle_ctrl_diagnostics_AddLogHandlerReply_size 0
/* particle_ctrl_diagnostics_RemoveLogHandlerRequest_size depends on runtime parameters */
#define particle_ctrl_diagnostics_RemoveLogHandlerReply_size 0
#define particle_ctrl_diagnostics_ListLogHandlersRequest_size 0
/* particle_ctrl_diagnostics_ListLogHandlersReply_size depends on runtime parameters */

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define DIAGNOSTICS_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif