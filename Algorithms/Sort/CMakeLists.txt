cmake_minimum_required(VERSION 3.30)
project(Sort)

set(CMAKE_CXX_STANDARD 20)
add_executable(Sort src/main.cpp
        include/Domain/node.hpp
        include/Application/insert_strategy.hpp
        src/Presentation/left_first_insert.cpp
        include/Presentation/left_first_insert.hpp
        src/Presentation/insert_builder.cpp
        include/Presentation/insert_builder.hpp
        src/Presentation/random_data.cpp
        include/Presentation/random_data.hpp
        include/Application/print_strategy.hpp
        src/Presentation/preorder_print.cpp
        include/Presentation/preorder_print.hpp
        src/Presentation/print_builder.cpp
        include/Presentation/print_builder.hpp
)

target_include_directories(Sort PRIVATE include)
