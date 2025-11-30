cmake_minimum_required(VERSION 3.31)
project(Data_Structures)

set(CMAKE_CXX_STANDARD 20)

add_executable(Data_Structures main.cpp
        linkedList/LinkedList.cpp
        linkedList/LinkedList.h)
