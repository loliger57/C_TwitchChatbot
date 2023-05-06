cmake_minimum_required(VERSION 3.25)
project(Twitchchatbot C)

set(CMAKE_C_STANDARD 11)

#set(CURL_INCLUDE_DIR "D:/programmieren/libaries/curl/lib")
#set(CURL_LIBRARY "D:/programmieren/libaries/curl/lib/libcurl.a")
#include_directories(${CURL_INCLUDE_DIR})
#target_link_libraries(${Twitchchatbot} ${CURL_LIBRARY})

#find_package(CURL REQUIRED)
#include_directories(${"D:/programmieren/libaries/curl"})

#file(GLOB_RECURSE SOURCES "src/**/*.c")
#include_directories("src/**/*.h")
include_directories("src/libarys/curl/include")
link_directories("src/libarys/curl/lib")

add_executable(Twitchchatbot main.c )

target_link_libraries(Twitchchatbot curl)

