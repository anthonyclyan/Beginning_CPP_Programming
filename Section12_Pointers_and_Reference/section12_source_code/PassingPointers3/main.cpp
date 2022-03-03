// Section 12
// Passing Pointers 3

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display( const vector<string> *const  v) {
// (*v).at(0) = "Funny";        // this is not allowed anymore because of the const in front of vector <string> in the function definition
    for (auto str: *v)
        cout << str << " ";
    cout << endl;
  
 // v = nullptr;                // this is not allowed anymore because of the const in front of the pointer v and after the dereferencing operator *
}

void display(int *array, int sentinel) {
    while (*array != sentinel)
        cout << *array++ << " ";
    // can't have const pointer because *array++ is changing where the pointer is pointing at
    cout << endl;
}

int main() {

//    cout << "-----------------------------" << endl;
//    vector<string> stooges {"Larry", "Moe", "Curly"};
//    display(&stooges);
   
    cout << "\n-----------------------------" << endl;
    int scores[] {100,98,97,79,85,-1};
    display(scores, -1);
    
    cout  << endl;
    return 0;
}

