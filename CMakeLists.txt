cmake_minimum_required(VERSION 3.18)
project(SnakeGame)

set(CXX_STANDARD 20)

aux_source_directory(. src)
add_executable(SnakeGame ${src})
