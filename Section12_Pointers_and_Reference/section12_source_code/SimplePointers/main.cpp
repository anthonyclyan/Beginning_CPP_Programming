// Section 12
// Simple pointers

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    
    int num{10};
    cout << "Value of num is: " << num << endl;		        // Output: 10
    cout << "sizeof of num is: " << sizeof num << endl; 	// Output: 4 bytes (depend on computer)
    cout << "Address of num is: " << &num << endl;	 	    // Output: address of num

// ========== Pointer ==========
//    int *p;          // declaring pointer
//    cout << "\nValue of p is: " << p << endl;             // Output: garbage since p is not initialized
//    cout << "Address of p is: " << &p << endl;            // Output: address of p
//    cout << "sizeof of p is: " << sizeof p<< endl;        // Outpu: 4 bytes
// Initialize p
//    p = nullptr;      // 0 pointer
//    cout << "\nValue of p is: " << p << endl;

// ========== 5 Pointers ==========
//    int *p1 {nullptr};
//    double *p2 {nullptr};
//    unsigned long long *p3 {nullptr};
//    vector<string>  *p4{nullptr};
//    string *p5 {nullptr};
//    
//    cout << "\nsizeof p1 is: " << sizeof p1 << endl;      // Output: 4 bytes
//    cout << "sizeof p2 is: " << sizeof p2 << endl;        // Output: 4 bytes
//    cout << "sizeof p3 is: " << sizeof p3 << endl;        // Output: 4 bytes
//    cout << "sizeof p4 is: " << sizeof p4 << endl;        // Output: 4 bytes
//    cout << "sizeof p5 is: " << sizeof p5 << endl;        // Output: 4 bytes
// Pointer and what it points to is very different!!!!
    
// ========== Pointer ==========
//    int score{10};
//    double high_temp{100.7};
//    
//    int *score_ptr {nullptr};
//    
//    score_ptr = &score;
//    cout << "Value of score is: " << score << endl;           // Output: 10
//    cout << "Address of score is: " << &score << endl;        // Output: address of score
//    cout << "Value of score_ptr is: " << score_ptr << endl;   // Output: address of score
//
//   // score_ptr = &high_temp;     // Compiler error since we are tryping to hold address of double with address that holds integer

    cout  << endl;
    return 0;
}

