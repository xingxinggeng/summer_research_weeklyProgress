cmake_minimum_required(VERSION 3.10)
project(Rasterizer)

find_package(OpenCV REQUIRED)

set(CMAKE_CXX_STANDARD 17)

include_directories(/usr/local/include)

add_executable(main main.cpp readdata.h readdata.cpp convLayer.h convLayer.cpp)
target_link_libraries(main ${OpenCV_LIBRARIES})
