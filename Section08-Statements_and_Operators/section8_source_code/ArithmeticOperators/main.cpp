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
    
  //  cout << num1 << " + " <<  num2 << " = "<< num1+ num2 << endl;
 
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
    
    result = num1 % num2;
    cout << num1 << " % " <<  num2 << " = "<< result << endl;    
    
    num1 = 10;
    num2 = 3;
    
    result = num1 % num2;
    cout << num1 << " % " <<  num2 << " = "<< result << endl;    
    
    result = num1 * 10 + num2;
    
    cout << 5/10 << endl;
    
    cout << 5.0/10.0 << endl;
    
    cout << endl;
    return 0;
}

