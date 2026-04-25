cmake_minimum_required(VERSION 3.20)
project(EulerSuite LANGUAGES CXX)

# Global Standards for all problems
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add each problem folder as a sub-module
add_subdirectory(euler_p1)
# add_subdirectory(p2) # Uncomment this when ou start P2