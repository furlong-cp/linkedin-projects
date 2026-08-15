cmake_minimum_required(VERSION 3.15)

project(PerfOracle VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(PerfOracle
    src/main.cpp
    src/benchmark.cpp
    src/statistics.cpp
    benchmarks/example.cpp
)
