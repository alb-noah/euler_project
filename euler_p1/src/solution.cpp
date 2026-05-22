#include "solution.hpp"
#include "iostream"
// This solution uses the formula of gaussian sum. sum= n*(n+1)/2 .
namespace euler {
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


    //for for problem number 2 fibonacci problem
    uint64_t fibonacci (){

                int number=0;
                std::cout << number <<"\n"<< "+++++++++++"<<"\n";

                return fibonacci(number - 1);
    
    }

    bool is_even(int number){
        if(number%2 == 0){
            return true;
        }
        else{
            return false;
        }
    }

    //end of problem 2 fibonacci problem
}