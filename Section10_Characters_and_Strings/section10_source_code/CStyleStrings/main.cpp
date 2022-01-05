#include <iostream>
#include <cstring>      // for c-style string functions
#include <cctype>       // for character-based functions

using namespace std;    

int main()
{
    // Initialization: best practice to have {} or you might get garbage 
    char first_name[20];
    char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};
    
    cout << first_name;     // Will likely display garbage!

    cout << "Please enter your first name: ";
    cin >> first_name;    // best practice to initialize as nothing last_name has {} and first_name doesn't

    cout << "Please enter your last name: ";
    cin >> last_name;
    cout << "-------------------------------" << endl; 
    
    cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
    // strlen return size_t type and not int or double, etc.
    cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;
//
// 
    strcpy(full_name, first_name);          // copy first_name to full_name
    // strcpy also copy the null space over
    strcat(full_name, " ");                 // concatenate full_name and a space
    strcat(full_name, last_name);           // concatenate last_name to full_name
    // strcat will also concatenate the null space over in the end
    cout << "Your full name is " << full_name << endl;
// 
// 
// ========== Full name not properly displaying ========== 
    cout << "-------------------------------" << endl;
    cout << "Enter your full name: ";
    cin >> full_name;

    cout << "Your full name is " << full_name << endl;
    
    // i.e. I type in "Anthony Yan"
    //      the output would be "Your full name is Anthony" and not "Your full name is Anthony Yan"
    //      the output stops when it hit <SPACE>
// 
// 
// ========== Full name properly displaying ========== 
    cout << "Enter your full name: ";
    cin.getline(full_name, 50);             // using .getline function that works with C-style Strings
    // the .getline function provide the C-style String name and a limit (max. character it can read)
    cout << "Your full name is " << full_name << endl;
// 
// 
// ========== Compare C-style Strings ========== 
    cout << "-------------------------------" << endl;
    strcpy(temp, full_name);
    if(strcmp(temp, full_name) == 0)        // if we get a zero, that means they are the same
        cout << temp << " and " << full_name << " are the same" << endl;
    else                                    // if we get 1, that means temp and full_name aren't the same
        cout << temp << " and " << full_name << " are different" << endl;

    cout << "-------------------------------" << endl;
// 
// 
// ========== Full name to uppercase ========== 
    // using proper type that works with C-style Strings, not int, double, etc. but size_t
    for(size_t i{ 0 }; i < strlen(full_name); ++i) {
        if(isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }
    cout << "Your full name is " << full_name << endl;
// 
// 
// ========== Compare uppercase with normal ========== 
    cout << "-------------------------------" << endl;
    // temp is "Anthony Yan" while full_name is now "ANTHONY YAN"
    if(strcmp(temp, full_name) == 0) 
        cout << temp << " and " << full_name << " are the same" << endl;
    else
        cout << temp << " and " << full_name << " are different" << endl;

    cout << "-------------------------------" << endl;
    cout << "Result of comparing " << temp << " and " <<  full_name <<  ": " << strcmp(temp, full_name) << endl;
    cout << "Result of comparing " << full_name << " and " <<  temp <<  ": " << strcmp(full_name, temp) << endl;
    // The result will be 0 if the two C-style Strings are the same
    // The result will be + or - 1 depending which string is larger

    cout  << endl;
    return 0;
}
