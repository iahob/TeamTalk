cmake_minimum_required(VERSION 3.12)
PROJECT(Base)

AUX_SOURCE_DIRECTORY(. SRC_LIST)
AUX_SOURCE_DIRECTORY(../pb/protocol SRC_LIST)


SET(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/run/lib)

ADD_DEFINITIONS( -g -W -Wall -D_REENTRANT -D_FILE_OFFSET_BITS=64 -DAC_HAS_INFO
-DAC_HAS_WARNING -DAC_HAS_ERROR -DAC_HAS_CRITICAL -DTIXML_USE_STL
-DAC_HAS_DEBUG -DLINUX_DAEMON)

set(CMAKE_CXX_STANDARD 11)



ADD_LIBRARY(base STATIC ${SRC_LIST})

TARGET_LINK_LIBRARIES(base pthread crypto ssl protobuf jsoncpp)

target_include_directories(
        base PRIVATE
        .
        ../pb/protocol
        /usr/local/include
)

target_link_directories(
        base PRIVATE
        /usr/local/lib
)