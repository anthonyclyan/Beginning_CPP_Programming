// Section 8
// Assignment operator (=)

#include <iostream>

using namespace std;

int main() {
    
    // variables initialization
    int num1 {10};
    int num2 {20};
    
    // assignment statement: 
    num1 = 100;          // assign 100 into num1
    // num1 = num2;         // assign num2 value into num1
    // num1 = num2 = 1000;  // works since compiler reads from right to left
    // num1 = "Frank";      // compiler will try to put string type into int type but will fail and output "conversion error"

    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    cout << endl;
    return 0;
}

/*
int main() {
    
    // variables initialization
    const int num1 {10};
    int num2 {20};
    
    // num1 = 100;  // this doesn't work because num1 is a constant, compiler will throw "read-only variable error"
    // 100 = num1;  // compiler doesn't understand and throw error "lvalue required as left operand of assignment"
    
    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    cout << endl;
    return 0;
}
*/