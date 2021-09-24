// Section 5
// Comments

/*****************************************************
 * author Frank
 * 
 * 11/11/2017  Frank - fixed bug in ...
 * 11/13/2017 Joe - Added function to...
 * 
 ****************************************************/

#include <iostream>

// This is a comment

/* This is a multiple
        line
         comment
*/

// Using a modified version Dijkstra's algorithm to improve space efficiency

int main()
 {    
    int favorite_number;  // this is where my favorite number is stored
    
    std::cout << "Enter your favorite number between 1 and 100: ";

    std::cin >> favorite_number;    /* comment */  
    
    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    std::cout << "No really!!, " << favorite_number << " is my favorite number!" << std::endl;
    
    return 0;  // return 0
 }
 
 
