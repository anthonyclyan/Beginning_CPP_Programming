// Section 9
// If-Else Statement
#include <iostream>

using namespace std;

int main() {
    int num{};
    const int target {10};

    cout << "Enter a number  and I'll compare it to " << target << ": ";
    cin >> num;
    
    if (num >= target) {
        cout << "\n==================================" << endl;
        cout << num << " is greater than or equal to " << target << endl;
        int diff { num - target};
        cout << num << " is " << diff << " greater than " << target << endl;
    } else {
        cout << "\n==================================" << endl;
        cout << num << " is less than " << target << endl;
        int diff { target - num};
        cout << num << " is " << diff << " less than " << target << endl;
    }
    cout  << endl;
    return 0;
}

