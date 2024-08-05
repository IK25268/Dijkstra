

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
cmake_minimum_required(VERSION 3.28)
project(Dijkstra)

set(CMAKE_CXX_STANDARD 20)

include_directories(src)

add_subdirectory(src)
add_subdirectory(tst)
add_subdirectory(lib/googletest)
