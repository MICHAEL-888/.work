cmake_minimum_required(VERSION 3.0)
project(HELLO)
add_executable(text text.c)
target_compile_options(text PRIVATE -g -O2 )