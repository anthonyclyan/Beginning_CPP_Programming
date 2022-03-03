// Section 12
// Dynamic Memory
#include <iostream>

using namespace std;

int main() {
    
    int *int_ptr {nullptr};
    int_ptr = new int;               // allocate the int on the heap
    cout << int_ptr << endl;    // use it
    delete int_ptr;                    // release it
    
    size_t size{0};
    double *temp_ptr {nullptr};
    
    cout << "How many temps? ";
    cin >> size;
    
    temp_ptr = new double[size];    // allocate the storage on the heap
    cout << temp_ptr << endl;       // use it
    delete [] temp_ptr;                     // release it
    
    cout << endl;
    return 0;
}

