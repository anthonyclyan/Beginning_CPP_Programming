// Section 14
// Overloading move constructor and move assignment operator
#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main() {
    
    Mystring a{"Hello"};                // Overloaded constructor
    a = Mystring{"Hola"};              // Overloaded constructor then move assignment
    a = "Bonjour";                         // Overloaded constructor then move assignment
    
 
    Mystring empty;                      // no-args constructor
    Mystring larry("Larry");             // overloaded constructor
    Mystring stooge {larry};            // copy constructor 
    Mystring stooges;                   // no-args constructor
    
    empty = stooge;                     // copy assignment operator
                                                  // stooge is an l-value
    
    empty = "Funny";                    // move assignment operator
                                                  // "Funny" is an r-value
    
    empty.display();
    larry.display();
    stooge.display();
    empty.display();
    
    stooges = "Larry, Moe, and Curly";  
    stooges.display();
    
    vector<Mystring> stooges_vec;
    stooges_vec.push_back("Larry");                // Move constructor
    stooges_vec.push_back("Moe");                // Move constructor
    stooges_vec.push_back("Curly");              // Move constructor    
    
    cout << "=== Loop 1 ==================" << endl;
    for (const Mystring &s: stooges_vec) 
        s.display();
        
    cout << "=== Loop 2 ==================" << endl;
    for (Mystring &s: stooges_vec)
        s = "Changed";                                      // move assignment
        
    cout << "=== Loop 3 ==================" << endl;
    for (const Mystring &s: stooges_vec) 
        s.display();
        
    
    return 0;
}

