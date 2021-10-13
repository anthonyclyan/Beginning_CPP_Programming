// Section 8
// Arithmetic operators
/*
    +   addition
    -   subtraction
    *   multiplication
    /   division
    %   modulo or remainder  (works only with integers)
    
    +, -. * and /  operators are overloaded to work with multiple types such as int, double, etc.
    %  only for integer types
*/
#include <iostream>

using namespace std;

int main() {
    
    int num1 {200};
    int num2 {100};
    
    cout << num1 << " + " <<  num2 << " = "<< num1+ num2 << endl;
 
    int result {0};
    
    result = num1 + num2;
    cout << num1 << " + " <<  num2 << " = "<< result << endl;
    
    result = num1 - num2;
    cout << num1 << " - " <<  num2 << " = "<< result << endl;
    
    result = num1 * num2;
    cout << num1 << " * " <<  num2 << " = "<< result << endl;
    
    result = num1 / num2;
    cout << num1 << " / " <<  num2 << " = "<< result << endl;    
    
    result = num2 / num1;
    cout << num2 << " / " <<  num1 << " = "<< result << endl;
    // since we are working with integers the 5 in 0.5 will be chopped and only 0 is outputted
    // use double instead of integer type

    result = num1 % num2;
    cout << num1 << " % " <<  num2 << " = "<< result << endl;  
    // 200 divided by 100 = 2 with no reamainder, remainder = 0, result = 0
    
    num1 = 10;
    num2 = 3;
    
    result = num1 % num2;
    cout << num1 << " % " <<  num2 << " = "<< result << endl;  
    // 10 divided by 3 = 9 with reaminader = 1, result = 1
    
    result = num1 * 10 + num2;  
    // compiler might read right to left but arithmetic operations still holds true
    // num1 will be multiplied by 10 first, then add num2

    // if one desire to multiply num1 by 10 + num2, then we need perentesis ()
    result = num1 * (10 + num2);
    
    cout << 5/10 << endl;
    // output 0 since 0.5 is not an integer, the 5 will be chopped
    
    cout << 5.0/10.0 << endl;
    // output 0.5 since we are using double instead of integer with the .0
    
    cout << endl;
    return 0;
}

