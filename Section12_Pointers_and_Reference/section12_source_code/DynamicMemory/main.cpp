// Section 12
// Dynamic Memory
#include <iostream>

using namespace std;

int main() {
    
    int *int_ptr {nullptr};
    int_ptr = new int;              // allocate the int dynamically on the heap
    cout << int_ptr << endl;        // Output: address in the heap
    // Can use int_ptr now
    delete int_ptr;                 // release it
    
    size_t size{0};
    double *temp_ptr {nullptr};
    
    cout << "How many temps? ";
    cin >> size;
    
    temp_ptr = new double[size];    // allocate the storage on the heap
    cout << temp_ptr << endl;       // use it
    // Memory leak if   temp_ptr = nullptr;
    // Now we lose the only way to access the memeory in the heap
    delete [] temp_ptr;             // release it
    
    cout << endl;
    return 0;
}

