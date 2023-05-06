

cmake_minimum_required(VERSION 3.25)

project(Twitchchatbot C)

set(CMAKE_C_STANDARD 11)

set(CURL_INCLUDE_DIRS "C:/msys64/usr/include/curl")

include_directories(${CURL_INCLUDE_DIRS})

add_executable(Twitchchatbot main.c )
target_link_libraries(Twitchchatbot PUBLIC C:/msys64/usr/lib/lib/libcurl.a ${CURL_LIBRARIES})


