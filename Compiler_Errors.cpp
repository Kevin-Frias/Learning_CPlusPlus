#include <iostream>

int main(){
    std::cout << "Syntax errors can happen if I forget one semicolon" << std::endl;
    std::cout << "Semantic errors" << std::endl; // ('Kevin'/7)
    return 0;  //forgetting the semicolon will cause the code to stop.
}

/*
 * Compiler Warnings
 *  The compiler has recognized and issue with your code that could lead to a potential problem
 * Linker Errors
 *  The linker is having trouble linking all the object files together to create and executable
 * Runtime Errors
 *  Errors that occur when the program is executing
 * Logic Errors
 *  Errors or bugs in ;your code that cause your program to run incorreclty
 */