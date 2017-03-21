cmake_minimum_required(VERSION 2.8)
set(CURL_MIN_VERSION "7.28.0")

#	Setting up project
project(KANDY_TEST)
 
#	set c++ flags
set(CMAKE_CXX_FLAGS "-g -Wall -std=c++11")

#	set output directory
file(MAKE_DIRECTORY bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin)


#	set library directories
add_subdirectory(lib/kandy)
include("${KANDY_SOURCE_DIR}/kandyConfig.cmake")


add_executable(sms_test src/sms_test.cpp)
target_link_libraries(sms_test kandy)

#MESSAGE(STATUS ${KANDY_SOURCE_DIR})



