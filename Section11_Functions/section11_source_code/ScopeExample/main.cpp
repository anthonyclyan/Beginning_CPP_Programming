// Section 11
// Scope example
#include <iostream>

using namespace std;

void local_example();
void global_example();
void static_local_example();

int num {300};    // Global variable - declared outside any class or function

void global_example() {
    cout << "\nGlobal num is: " << num << " in global_example - start" << endl;     // 1. Output: 300   2. Output: 600      3. 1200
    num *= 2;
    cout << "Global num is: " << num << " in global_example - end" << endl;         // 1. Output: 600   2. Output: 1200     3. 2400
    // Line 11. int num {300}, will be updated (reinitialize) everytime to 600, 1200, etc. everytime global_example is called
}

void local_example(int x) {
    int num {1000};     // local to local_example
    // Always prioritize local scope
    cout << "\nLocal num is: " << num << " in local_example - start" << endl;       // Output: 1000
    num = x;
    cout << "Local num is: " << num << " in local_example - end" << endl;           // From function call in main, Output: 10 and Output: 20
    // num1 in main is not within scope - so it can't be used here.
}

void static_local_example() {
    static int num {5000};      // local to static_local_example static - retains it value between calls
    cout << "\nLocal static  num is: " << num << " in static_local_example - start" << endl;    // 1. Output: 5000   2. Output: 6000      3. 7000
    num += 1000;
    cout << "Local static  num is: " << num << " in static_local_example - end" << endl;        // 1. Output: 6000   2. Output: 6000      3. 8000
}

int main() {
    
    int num {100};  // Local to main
    int num1 {500}; // Local to main
    
    cout << "Local num is : " << num << " in main" << endl;     // Output: 100
    
    {   // creates a new level of scope
        // Look out until you find it
        int num {200};  // local to this inner block
        cout << "Local num is: " << num << " in inner block in main" << endl;       // Output: 200  
        cout << "Inner block in main can see out - num1 is: " << num1 << endl;      // Output: 500
    }
    
    // Never look inside another scope
    cout << "Local num is : " << num << " in main" << endl;     // Output: 100


    local_example(10);
    local_example(20);
    
    global_example();
    global_example();
    
    static_local_example();
   static_local_example();
   static_local_example();

    cout << endl;
    return 0;
}




