cmake_minimum_required(VERSION 3.7)
project(http_boost)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp connection.cpp connection.h connection_manager.cpp connection_manager.h header.cpp header.h mime_types.cpp mime_types.h reply.cpp reply.h request.cpp request.h request_handler.cpp request_handler.h request_parser.cpp request_parser.h server.cpp server.h)
add_executable(http_boost ${SOURCE_FILES})

TARGET_LINK_LIBRARIES( http_boost pthread)
TARGET_LINK_LIBRARIES( http_boost boost_system)