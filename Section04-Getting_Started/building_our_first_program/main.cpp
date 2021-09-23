#include <iostream>     // input and output library

int main(){
    // Declare variable with type
    int num;

    // Prompt string on terminal
    std::cout << "Enter your favorite number between 1 and 100: ";
    // What std::cout mean? https://www.cplusplus.com/forum/beginner/61121/
    //      std::cout tells the compiler that I want the "cout" identifier, and that it is in the "std" namespace
    //      [namespace][scope resolution operator][identifier]
    
    // Take input from terminal
    std::cin >> num;
    // Similar to "cout", "cin" takes input 

    // Display on terminal after user input and end line + move cursor to next line
    std::cout << "Amazing! That's my favorite number too!" << std::endl;

    return 0;
}