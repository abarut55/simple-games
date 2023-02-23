cmake_minimum_required(VERSION 3.23)
project(M2OEP-abarut)

set(CMAKE_CXX_STANDARD 17)

add_executable(M2OEP_abarut
        main.cpp
        arcade.cpp
        arcade.h
        madlibs.cpp
        madlibs.h
        adventure.h
        adventure.cpp
        Monster.cpp
        Monster.h)
