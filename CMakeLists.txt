cmake_minimum_required(VERSION 3.5)

project(builder LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(builder main.cpp budynek.cpp budynek.hpp budowniczy.cpp budowniczy.hpp
    domjednorodzinny.cpp domjednorodzinny.hpp biurowiec.cpp biurowiec.hpp dyrektor.cpp dyrektor.hpp)
