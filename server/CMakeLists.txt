cmake_minimum_required(VERSION 3.12)
PROJECT(Server)
message(STATUS CMAKE_SOURCE_DIR:"${CMAKE_SOURCE_DIR}")
message(STATUS CMAKE_MAKE_PROGRAM:"${CMAKE_MAKE_PROGRAM}" )
message(STATUS CMAKE_COMMAND:"${CMAKE_COMMAND}" )


ADD_DEFINITIONS( -g -W -Wall -D_REENTRANT -D_FILE_OFFSET_BITS=64 -DAC_HAS_INFO
        -DAC_HAS_WARNING -DAC_HAS_ERROR -DAC_HAS_CRITICAL -DTIXML_USE_STL
        -DAC_HAS_DEBUG -DLINUX_DAEMON)

set(CMAKE_CXX_STANDARD 11)

#set(CMAKE_C_COMPILER /Library/Developer/CommandLineTools/usr/bin/cc)
#set(CMAKE_CXX_COMPILER /Library/Developer/CommandLineTools/usr/bin/c++)
#set(CMAKE_MAKE_PROGRAM /usr/local/Cellar/ninja/1.10.2_1/bin)
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/module)
include(hiredis)
include(protobuf)
include(openssl)
include(spdlog)
include(jsoncpp)
add_subdirectory(src)
