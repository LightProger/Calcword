cmake_minimum_required(VERSION 3.8)
project(Calcword)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        calcword.c)

add_executable(Calcword ${SOURCE_FILES})