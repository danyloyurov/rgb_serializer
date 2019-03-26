cmake_minimum_required(VERSION 2.8)
project(rgb_serializer)

set(SOURCE
main.c
source/rgba8888.c
source/rgb565.c
)

include_directories(include/)
add_executable(${PROJECT_NAME} ${SOURCE})
