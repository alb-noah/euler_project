#include "p1_solution.hpp"
#include "iostream"
// This solution uses the formula of gaussian sum. sum= n*(n+1)/2 .
namespace euler::p1 {
    // Helper function for the arithmetic progression sum
    uint64_t sum_divisible_by(int n, int limit) {
        uint64_t p = (limit - 1) / n;
        return n * (p * (p + 1)) / 2;
    }

    uint64_t sum_multiples(int threshold, int div1, int div2) {
        return sum_divisible_by(div1, threshold) + 
               sum_divisible_by(div2, threshold) - 
               sum_divisible_by(div1 * div2, threshold);
    }


}