cmake_minimum_required(VERSION 3.0.2)
set(PROJECT_NAME sluggo)
project(${PROJECT_NAME})

set(CHALICE_LOCATION "/f/Documents/code/chalice" CACHE FILEPATH "Location of chalice engine source")

ExternalProject_add(
  CMake-3-0-2
  SOURCE_DIR ${CHALICE_LOCATION}
)

set (SLUGGO_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set (SLUGGO_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include
  CACHE INTERNAL "Sluggo: Include Directories" FORCE)

add_definitions(${CHALICE_DEFINITIONS})
include_directories(${CHALICE_INCLUDE_DIR})

include_directories(${SLUGGO_INCLUDE_DIR})

set(SLUGGO_SOURCE_FILES
  ${SLUGGO_SOURCE_DIR}/main.cc
)

set(SLUGGO_INCLUDE_FILES
)

add_executable(
  ${PROJECT_NAME}
  ${GAME_SOURCE_FILES}
  ${GAME_INCLUDE_FILES}
)

if(WIN32)
  set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /SUBSYSTEM:WINDOWS")
  add_definitions(-DUNICODE -D_UNICODE)
endif(WIN32)
