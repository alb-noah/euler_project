#include "p2_solution.hpp"
#include "iostream"


//for for problem number 2 fibonacci problem
namespace euler::p2 {
    uint64_t fibonacci (int max){

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