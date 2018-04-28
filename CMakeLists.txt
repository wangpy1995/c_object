cmake_minimum_required(VERSION 3.9)
project(c_object C)

set(CMAKE_C_STANDARD 11)

add_executable(c_object main.c include/animal.h src/animal.c include/dog.h src/dog.c include/w_dog.h src/w_dog.c)