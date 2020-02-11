
cmake_minimum_required(VERSION 3.0.0)
project(cpp_004)
add_executable(${PROJECT_NAME} TEST.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE catch)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)