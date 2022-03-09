// Section 12
// Dereferencing

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    
    int score {100};
    // Initialize score_ptr to point at the location of score
    int *score_ptr {&score};

    // Dereference score_ptr
    cout << *score_ptr << endl;		// Output: 100

    // Dereference score_ptr and put value 200 inside
    *score_ptr = 200;
    
    // Dereference score_ptr
    cout << *score_ptr << endl;		// Output: 200
    cout << score << endl; 			// Output: 200


    cout << "\n------------------------------" << endl;
    double high_temp {100.7};
    double low_temp {37.4};			       
    double *temp_ptr {&high_temp};    

    cout << *temp_ptr << endl;   	// Output: 100.7    	    
    temp_ptr = &low_temp;           // Change where pointer is pointing to
    cout << *temp_ptr << endl;   	// Output: 37.4   	    


    cout << "\n------------------------------" << endl;

    string name {"Frank"};
    // Initialize string_ptr to point at the location of name
    string *string_ptr {&name};

    // Dereference string_ptr
    cout << *string_ptr << endl;   	// Output: Frank   
    name = "James"; 	            // Change variable value directly
    cout << *string_ptr << endl;   	// Output: James
    *string_ptr = "Anthony";        // Dereference string_ptr and put value Anthony inside
    cout << *string_ptr << endl;   	// Output: Anthony


    cout << "\n------------------------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};
    vector<string> *vector_ptr {nullptr};
    
    vector_ptr = &stooges;

    cout << "&stooges:\t" << vector_ptr << endl;                // Output: address
    
    cout << "First stooge: " << (*vector_ptr).at(0) << endl;    // Output: Larry
    
    cout << "Stooges: ";
    for (auto stooge: *vector_ptr)  
        cout << stooge << " ";
    cout << endl;
    
    cout << endl;
    return 0;
}

