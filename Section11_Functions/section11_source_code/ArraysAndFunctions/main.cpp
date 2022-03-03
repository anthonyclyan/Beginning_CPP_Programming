// Section 11
// Arrays and functions
#include <iostream>

using namespace std;

// Function prototypes
void print_array(const int arr[], size_t size);
void set_array(int arr[], size_t size, int value);

// Function print_array
void print_array(const int arr[], size_t size) {  // const
    for (size_t i{0}; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
   // arr[0] = 50000; // bug
}

// Function set_array
// set each array element to value
void set_array(int arr[], size_t size, int value) {
    for (size_t i{0}; i < size; ++i)
        arr[i] = value;
}

int main() {
    int my_scores[] {100, 98, 90, 86, 84};
    
    print_array(my_scores, 5);          // goes to storage address instead of copying values
    set_array(my_scores, 5, 100);
    print_array(my_scores, 5);          
    print_array(my_scores, 5);
    
    cout << endl;
    return 0;
}

