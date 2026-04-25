# Define the logic library for P1
add_library(p1_logic src/solution.cpp)
target_include_directories(p1_logic PUBLIC include)

# Define the executable
add_executable(euler_p1 src/main.cpp)
target_link_libraries(euler_p1 PRIVATE p1_logic)