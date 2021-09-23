/* Section 4 Challenge
======================

Create a C++ program that asks the user for their favorite number between 1 and 100
that read this number from console. 

Suppose the user enters 24

Then display the following to the console:
Amazing!! That's my favprite number too?
No really!! 24 is my favorite number!

======================
Enter your favorite number between 1 and 100: 24
Amazing!! That's my favprite number too?
No really!! 24 is my favorite number!

*/

#include <iostream>

int main(){
    int num;
    std::cout << "Enter your favorite number between 1 and 100: ";

    std::cin >> num;

    if (num > 0 && num < 101){
        std::cout << "Amazing!! That's my favprite number too?" << std::endl << "No really!! " << num << " is my favorite number!" << std::endl;
    }
    
    return 0;
}

