#include <iostream>
#include "p1_solution.hpp"
#include "p2_solution.hpp"


int main() {
    int threshold = 1000;
    int m1 = 3, m2 = 5;

    auto result = euler::p1::sum_multiples(threshold, m1, m2);

    std::cout << "Sum of multiples of " << m1 << " or " << m2 
              << " below " << threshold << " is: " << result << std::endl;
    
  
}