# The following folder will be included
include_directories("${PROJECT_SOURCE_DIR}")

set(SOURCE_DIR "${PROJECT_SOURCE_DIR}/src")
file(GLOB SOURCES
 "${SOURCE_DIR}/*.hpp"
 "${SOURCE_DIR}/*.cpp"
)

add_executable(heat ${SOURCES})
