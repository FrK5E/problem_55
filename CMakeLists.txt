# stop if cmake version is below 3.0
cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

# project name and enable C++ support
project(problem_55 LANGUAGES CXX)

# require C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library( ntl SHARED IMPORTED )
set_property( TARGET ntl PROPERTY IMPORTED_LOCATION /home/peta/ntl/lib/libntl.so ) 
target_include_directories( ntl INTERFACE /home/peta/ntl/include )



# we define the executable
add_executable(problem_55 main.cpp )


target_link_libraries( problem_55 PRIVATE ntl )

