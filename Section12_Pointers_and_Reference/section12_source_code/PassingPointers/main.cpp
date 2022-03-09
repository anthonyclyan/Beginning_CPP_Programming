// Section 12
// Passing Pointers 1
#include <iostream>

using namespace std;


void double_data(int *int_ptr) {
   *int_ptr *= 2;	
}

int main() {
    int value {10};
    int *int_ptr {nullptr};
    
    cout << "Value: " << value << endl;         // Output: 10
    double_data(&value);
    cout << "Value: " << value << endl;         // Output: 20

    cout << "-----------------------------" << endl;
    int_ptr = &value;
    double_data(int_ptr);
    cout << "Value: " << value << endl;         // Output: 40

    cout  << endl;
    return 0;
} 