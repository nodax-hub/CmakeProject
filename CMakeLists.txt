cmake_minimum_required(VERSION 3.10)

project(HelloWorld)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(Eigen3 3.3 REQUIRED NO_MODULE)
find_package(OpenCV REQUIRED)

set(ExeName HelloWorld)

add_executable(${ExeName} main.cpp)

target_link_libraries(${ExeName} Eigen3::Eigen)
target_link_libraries(${ExeName} ${OpenCV_LIBS})