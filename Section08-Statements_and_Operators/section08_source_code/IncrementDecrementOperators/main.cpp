// Section 8
/*
    Increment operator ++
    Decrement operator --

    Increments or decrements its operand by 1
    Can be used with integers, floating point types and pointers

    Prefix   ++num
    Postfix    num++
    
    Don't overuse this operator!
    ALERT!!! Never use it twice for the same variable in the same statement!!
*/
#include <iostream>

using namespace std;

int main() {
    
    int counter {10};
    int result {0};
     
// Example 1 - simple increment
    cout << "Counter : " << counter << endl;
    // output: Counter : 10 
    
    counter = counter + 1;
    cout << "Counter : " << counter << endl;
    // output: Counter : 11 
  
    counter++;
    cout << "Counter : " << counter << endl;
    // output: Counter : 12 

    ++counter; 
    cout << "Counter : " << counter << endl;
    // output: Counter : 13 

// Example 2 - preincrement
    counter = 10;
    result = 0;
    
    cout << "Counter : " << counter << endl;
    // output: Counter : 10

    result = ++counter; // Note the pre increment
    // the ++ is equavilent to counter = counter + 1
    // the = then assign the new counter value also into result
    cout << "Counter : " << counter << endl; // counter value remained unchanged
    // output: Counter : 11
    cout << "Result : " << result << endl; 
    // output: Result : 11 

// Example 3 - post-increment
    counter = 10;
    result = 0;
    
    cout << "Counter : " << counter << endl;
    // output: Counter : 10
    
    result = counter++; // Note the post increment
    // the = first assign the counter value into result
    // the ++ then counter = count + 1

    cout << "Counter : " << counter << endl;
    // output: Counter : 11
    cout << "Result : " << result << endl;
    // output: Counter : 10

// Example 4
    counter = 10;
    result = 0;
    
    cout << "Counter : " << counter << endl;
    // output: Counter : 10 
    
    result = ++counter + 10;  // Note the pre increment
    // first counter = counter + 1
    // then result = counter_updaed + 10
        
    cout << "Counter : " << counter << endl;
    // output: Counter : 11
    cout << "Result : " << result << endl;
    // output: Counter : 21 

// Example 5
    counter = 10;
    result = 0;

    cout << "Counter : " << counter << endl;
    // output: Counter : 10

    result = counter++ + 10;  // Note the post increment
    // first ignore ++ and result = counter + 10
    // then counter = counter + 1

    cout << "Counter : " << counter << endl;
    // // output: Counter : 11

    cout << "Result : " << result << endl;
    // output: Counter : 20

    cout << endl;
    return 0;
}