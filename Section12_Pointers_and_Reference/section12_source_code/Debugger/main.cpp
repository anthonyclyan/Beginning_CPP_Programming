//Section 12
// Debugger

#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    
    int i{5};
    while (i>0) {
        cout << i << endl;
        i--;
    }
    
    int x {100}, y {200};
    cout << "\nx: " << x <<  endl;
    cout << "y: " << y <<  endl;
    
    swap(&x, &y);
    
    cout << "\nx: " << x <<  endl;
    cout << "y: " << y <<  endl;
    cout  << endl;
    return 0;
}

