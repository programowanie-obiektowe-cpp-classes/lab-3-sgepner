cmake_minimum_required(VERSION 3.8)

project(lab3_zal)

add_executable(zal test.cpp)
add_executable(main main.cpp figura.cpp kolo.cpp kwadrat.cpp)
target_include_directories(zal PUBLIC include)
set_target_properties(zal PROPERTIES
    CXX_STANDARD 17
)
