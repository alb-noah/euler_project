cmake_minimum_required(VERSION 3.20)
project(EulerSuite LANGUAGES CXX)

# Global Standards for all problems
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add each problem folder as a sub-module
add_subdirectory(p1)
# add_subdirectory(p2) # Uncomment this when ou start P2
add_subdirectory(p2)

#executable main to run all the problems
addexecutable(
    main main.cpp
)

target_link_libraries(
    main
    PRIVATE
    p1_logic
    p2_logic
)
