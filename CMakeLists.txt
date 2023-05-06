set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Werror")

cmake_minimum_required(VERSION 3.25)

project(Twitchchatbot C)

set(CMAKE_C_STANDARD 11)


include_directories("src/libarys/curl/include")
add_library(curl STATIC "src/libarys/curl/lib/libcurl_a.lib")
set_target_properties(curl PROPERTIES LINKER_LANGUAGE C)


add_executable(Twitchchatbot main.c )

target_link_libraries(Twitchchatbot curl)

