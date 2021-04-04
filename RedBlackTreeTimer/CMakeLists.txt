cmake_minimum_required(VERSION 3.17)
project(RedBlackTreeTimer)

set(CMAKE_CXX_STANDARD 17)

include_directories(./src)

add_executable(midterm
        src/main.cpp
        src/RBTree/RBTree.cpp
        src/RBTree/RBTree.h
        src/AVLTree/AVLTree.h
        src/test.cpp
        src/test.h)