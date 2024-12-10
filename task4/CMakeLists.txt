cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(task4 LANGUAGES C)

# generate a library from sources
add_library(message
  STATIC
  message.c
  message.h
  )

add_executable(hello-world hello-world.c)

target_link_libraries(hello-world message)
