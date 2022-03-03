// Section 12
// Passing Pointers 2
#include <iostream>
#include <string>
#include <vector>

using namespace std;


void swap(int *a, int *b) {
    // a now has the address of x; b has the address of y
    // *a and *b derefernce the address and get the int values at the addresses respectively
    int temp = *a;      // temp is an integer not a pointer
                        //      and temp is assigned with the dereferenced int value of address x == x value == 100
    *a = *b;            // dereferncing a pointer and store the dereferenced b pointer value into the dereferenced a pointer == x
                        //      effectively: x = y
    *b = temp;          // dereferncing b pointer and store the int value from variable temp
}


int main() {
    int x {100}, y {200};
    cout << "\nx: " << x <<  endl;          // Output: 100
    cout << "y: " << y <<  endl;            // Output: 200
    
    swap(&x, &y);   // pass in address of x and address of y as input to swap function
    
    cout << "\nx: " << x <<  endl;          // Output: 200
    cout << "y: " << y <<  endl;            // Output: 100
    
    cout  << endl;
    return 0;
}