//
//  push_define.h
//  my_push_server
//
//  Created by luoning on 14-11-5.
//  Copyright (c) 2014年 luoning. All rights reserved.
//

#ifndef my_push_server_push_define_h
#define my_push_server_push_define_h

#include "base/slog.h"
#define PDU_VERSION     1

#define PUSH_TYPE_NORMAL        1
#define PUSH_TYPE_SILENT        2

#define LOG_MODULE_PUSH         "PUSH"

#define __FILENAME__ (strrchr(__FILE__, '/') ? (strrchr(__FILE__, '/') + 1):__FILE__)

#define PUSH_SERVER_FATAL(fmt, ...) \
{\
    g_pushlog.Fatal("<%s>|<%d>|<%s>," fmt, __FILENAME__, __LINE__, __FUNCTION__, ##__VA_ARGS__);\
}

#define PUSH_SERVER_ERROR(fmt, ...) \
{\
    SPDLOG_ERROR("<%s>|<%d>|<%s>," fmt, __FILENAME__, __LINE__, __FUNCTION__, ##__VA_ARGS__);\
}

#define PUSH_SERVER_WARN(fmt, ...) \
{\
   SPDLOG_WARN("<%s>|<%d>|<%s>," fmt, __FILENAME__, __LINE__, __FUNCTION__, ##__VA_ARGS__);\
}

#define PUSH_SERVER_INFO(fmt, ...) \
{\
    SPDLOG_INFO("<%s>|<%d>|<%s>," fmt, __FILENAME__, __LINE__, __FUNCTION__, ##__VA_ARGS__);\
}

#define PUSH_SERVER_DEBUG(fmt, ...) \
{\
    SPDLOG_DEBUG("<%s>|<%d>|<%s>," fmt, __FILENAME__, __LINE__, __FUNCTION__, ##__VA_ARGS__);\
}

#define PUSH_SERVER_TRACE(fmt, ...) \
{\
    SPDLOG_TRACE("<%s>|<%d>|<%s>," fmt, __FILENAME__, __LINE__, __FUNCTION__, ##__VA_ARGS__);\
}



#endif
