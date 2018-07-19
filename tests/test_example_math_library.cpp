#include <iostream>
#include "../src/example_math_library.hpp"

enum class TestResult{SUCCESS=0, FAILURE=1};

TestResult test_add(){
    if(add(1,2) == 3){
        return TestResult::SUCCESS;
    }
    return TestResult::FAILURE;
}

TestResult test_sub(){
    if(sub(4,10) == -6){
        return TestResult::SUCCESS;
    }
    return TestResult::FAILURE;
}

TestResult run_tests(){
    if(test_add() == TestResult::FAILURE){
        std::cout << "add() failed." << std::endl;
        return TestResult::FAILURE;
    }
    if(test_sub() == TestResult::FAILURE){
        std::cout << "sub() failed." << std::endl;
        return TestResult::FAILURE;
    }
    return TestResult::SUCCESS;
}

int main(){
    return (int)run_tests();
}
