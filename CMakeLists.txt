cmake_minimum_required(VERSION 3.22.1)

project(HeadAimSimulation)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(HeadAimSimulation
    main.cpp
    AimSystem.cpp
)
