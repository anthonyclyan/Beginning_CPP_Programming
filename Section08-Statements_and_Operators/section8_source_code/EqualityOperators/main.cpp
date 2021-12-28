// Section 8
// Equality Operators

#include <iostream>

using namespace std;

int main() {
    
    bool equal_result {false};
    bool not_equal_result {false};
    
    int num1{}, num2{};
    
    cout << boolalpha;      // will display true/false instead of 1/0 for booleans
    
    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;
    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);
    cout << "Comparision result (equals) : " << equal_result << endl;
    cout << "Comparision result (not equals) : " << not_equal_result << endl;

    
//    char char1{}, char2{};
//    cout << "Enter two characters separated by a space: ";
//    cin >> char1 >> char2;
//    equal_result = (char1 == char2);
//    not_equal_result = (char1 != char2);
//    cout << "Comparision result (equals) : " << equal_result << endl;
//    cout << "Comparision result (not equals) : " << not_equal_result << endl;
//    
    double double1{}, double2{};
//    cout << "Enter two doubles separated by a space: ";
//    cin >> double1 >> double2;
//    equal_result = (double1 == double2);
//    not_equal_result = (double1 != double2);
//    cout << "Comparision result (equals) : " << equal_result << endl;
//    cout << "Comparision result (not equals) : " << not_equal_result << endl;
// if the input dobules are "12.0" and "11.99999999999", they will equate to each other becuase the representation that is used to save the doubles behind the scene is equal.
// if one desired to distinguish between the two doubles, speical libraries need to be used.
//
//    cout << "Enter an integer and a double separated by a space: ";
//    cin >> num1 >> double1;
//    equal_result = (num1 == double1);
//    not_equal_result = (num1 != double1);
//    cout << "Comparision result (equals) : " << equal_result << endl;
//    cout << "Comparision result (not equals) : " << not_equal_result << endl;
// mix mode comparison doesn't work. The two types have to be the same.
// the int will be promoted to double.
// the output will be equal

    cout << endl;
    return 0;
}

