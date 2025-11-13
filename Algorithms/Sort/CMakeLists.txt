cmake_minimum_required(VERSION 3.30)
project(Sort)

set(CMAKE_CXX_STANDARD 20)
add_executable(Sort src/main.cpp
        include/Domain/node.hpp
        src/Presentation/insert_strategy.cpp
        include/Presentation/insert_strategy.hpp
        src/Application/left_first_insert.cpp
        include/Application/left_first_insert.hpp
        src/Presentation/tree_builder.cpp
        include/Presentation/tree_builder.hpp
)

target_include_directories(Sort PRIVATE include)
