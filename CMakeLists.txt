cmake_minimum_required(VERSION 3.3)
project(BinaryTree)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Node.h BinTree.h PrSor.h AVLNode.h AVLTree.h)
add_executable(BinaryTree ${SOURCE_FILES})