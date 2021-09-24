//Section 5
// Basic I/O using cin and cout

#include <iostream>

int main(){

    // std::cout << "Hello world!" << std::endl;

    // std::cout << "Hello";
    // std::cout << "World" << std::endl;

    // \n also works as new line
    // std::cout << "Hello world!" << std::endl;
    // std::cout << "Hello" << "world!" << std::endl;
    // std::cout << "Hello" << " world!\n";
    // std::cout << "Hello\nOut\nThere\n";


    int num1;
    int num2;
    double num3;

    // std::cout << "Enter an integer: ";
    // std::cin >> num1;
    // std::cout << "You entered: " << num1 << std::endl;
    // // white-space == <spacebar> will be ignored:
    // //      input1: "123"            -->    output1: "You entered: 123"
    // //      input2: "    123    "    -->    output2: "You entered: 123"

    std::cout << "Enter a first integer: ";
    std::cin >> num1;
    std::cout << "Enter a second integer: ";
    std::cin >> num2;
    std::cout << "You entered: " << num1 << " and " << num2 << std::endl;
    
}