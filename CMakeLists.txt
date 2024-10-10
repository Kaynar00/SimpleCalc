cmake_minimum_required (VERSION 3.28.3)

project (SimpleCalc)

set (source_dir "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++20")
set (source_dir "${PROJECT_SOURCE_DIR}/src/")

file (GLOB source_files "${source_dir}/*.cpp")

add_executable (${PROJECT_NAME} ${source_files})
install(TARGETS ${PROJECT_NAME} DESTINATION bin)
