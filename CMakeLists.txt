cmake_minimum_required(VERSION 3.6)
project(pokedex)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp Pkmn.cpp Pkmn.h LinkedList.h LinkedList.cpp System.h System.cpp)
add_executable(pokedex ${SOURCE_FILES})