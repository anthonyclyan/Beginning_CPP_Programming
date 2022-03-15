// Section 13
// Copy Constructor - Shallow Copy
// Note: this program will crash
#include <iostream>

using namespace std;

class Shallow {
    private:
        int *data;
    public:
        void set_data_value(int d) { *data = d; }
        int get_data_value() { return *data; }
        // Constructor
        Shallow(int d);
        // Copy Constructor
        Shallow(const Shallow &source);
        // Destructor
        ~Shallow();
};

// Constructor
Shallow::Shallow(int d) {
    // storing int data d dynamically in the heap
    data = new int;     // create storage dynamically in the heap
    *data = d;          // dereference data pointer and store d value inside
}

// Shallow copy constructor
//      copying pointer but not what it is pointing to
Shallow::Shallow(const Shallow &source) 
    : data(source.data) {
        cout << "Copy constructor  - shallow copy" << endl;
}

// Destructor
Shallow::~Shallow() {
    delete data;
    cout << "Destructor freeing data" << endl;
}

void display_shallow(Shallow s) {
    cout << s.get_data_value() << endl;
}

int main() {
    
    Shallow obj1 {100};
    display_shallow(obj1);
    
    Shallow obj2 {obj1};
    obj2.set_data_value(1000);
    
    return 0;
}

