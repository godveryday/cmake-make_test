cmake_minimum_required(VERSION 3.5 FATAL ERROR)

project(task5 LANGUAGES C)

# introduce a toggle for using library
set(USE_LIBRARY OFF)

message(STATUS "Compile sources into a library? ${USE_LIBRARY}")

# list sources
list(APPEND _sources message.h message.c)

if(USE_LIBRARY)
  add_library(message ${_sources})
  add_executable(hello-world hello-world.c)
  target_link_libraries(hello-world message)

else()
  add_executable(hello-world hello-world.c ${_sources})

endif()

