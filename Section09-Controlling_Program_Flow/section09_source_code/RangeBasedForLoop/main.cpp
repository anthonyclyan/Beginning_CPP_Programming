// Section 9
// Range-based For Loop
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
   
    int scores[] {10, 20, 30};      // array of integers
    
    // for (int score: scores)      // same as below but explicitly declare the type of collection
    for (auto score: scores)        // ask compiler to figure out the type of collection
        cout << score << endl;
        

//    vector<double> temperatures {87.9, 77.9, 80.0, 72.5};
//    double average_temp {};
//    double total {};
//    
//    for (auto temp: temperatures)
//        total += temp;
//    
//    if (temperatures.size() != 0)
//        average_temp = total / temperatures.size();
//      
//    cout << fixed << setprecision(1);         // round output decimal place, need #include <iomanip>
//    cout << "Average temperature is " << average_temp << endl;
        

//    for (auto val: {1,2,3,4,5})
//        cout << val << endl;


//    for (auto c: "This is a test")
//        if (c != ' ')
//            cout << c;


//    for (auto c: "This is a test")
//       if (c == ' ')
//           cout << "\t";
//        else
//            cout << c;
            
        
    cout <<  endl;
    return 0;
}

