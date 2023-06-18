# stop if cmake version is below 3.0
cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

# project name and enable C++ support
project(problem_55 LANGUAGES CXX)

# require C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost COMPONENTS system filesystem unit_test_framework REQUIRED)


add_library( ntl SHARED IMPORTED )
set_property( TARGET ntl PROPERTY IMPORTED_LOCATION /home/peta/ntl/lib/libntl.so ) 
target_include_directories( ntl INTERFACE /home/peta/ntl/include )



# we define the executable
add_executable(problem_55 main.cpp utils.cpp )
target_link_libraries( problem_55 PRIVATE ntl )

add_executable( test test.cpp utils.cpp  )
target_link_libraries( test PRIVATE ntl )
target_link_libraries(test PRIVATE
                      ${Boost_FILESYSTEM_LIBRARY}
                      ${Boost_SYSTEM_LIBRARY}
                      ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
                      )





