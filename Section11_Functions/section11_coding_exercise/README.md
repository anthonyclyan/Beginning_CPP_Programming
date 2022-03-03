# Coding Exercise 21:

Create a program that will be used as a POS (Point of Scale) system in a resturant

```c++
#include <iostream>
#include <cmath>
using namespace std;

void c_math_functions() {
    
    double bill_total {102.78};
    int number_of_guests {5};
    
    //DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    // Initialization
    double individual_bill {bill_total / number_of_guests};
    double individual_bill_1 = floor (individual_bill);       // https://www.programiz.com/cpp-programming/library-function/cmath/floor
    double individual_bill_2 = round (individual_bill);       // https://www.programiz.com/cpp-programming/library-function/cmath/round
    double individual_bill_3 = ceil (individual_bill * 100) / 100;        // https://www.programiz.com/cpp-programming/library-function/cmath/ceil

    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    cout << "The individual bill at location 1 will be $" << individual_bill_1 << "\n" << "The individual bill at location 2 will be $" << individual_bill_2 << "\n" << "The individual bill at location 3 will be $" << individual_bill_3;
}
```

# Coding Exercise 22: Functions and Prototypes - Converting Temperatures

Create a program that will be used to convert Fahrenheit temperatures to Celcius and Kelvin temperatures through the use of two functions.

```c++
#include <iostream>
#include <cmath>
using namespace std;

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION PROTOTYPES BELOW THIS LINE----

// Function prototypes
double fahrenheit_to_celsius(double temperature);
double fahrenheit_to_kelvin(double temperature);

//----WRITE YOUR FUNCTION PROTOTYPES ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void temperature_conversion(double fahrenheit_temperature) {
    
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR FUNCTION CALLS BELOW THIS LINE----

    // Call functions and store to variable
    double celsius_temperature = fahrenheit_to_celsius(fahrenheit_temperature);
    double kelvin_temperature = fahrenheit_to_kelvin(fahrenheit_temperature);

    //----WRITE YOUR FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to " << celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION DEFINITIONS BELOW THIS LINE----

double fahrenheit_to_celsius(double temperature) {
    return round(5 * (temperature - 32) / 9);
}

double fahrenheit_to_kelvin(double temperature) {
    return (fahrenheit_to_celsius(temperature) + 273);
}
```

# Coding Exercise 23: Using Default Argument Values - Grocery List

In this exercise you will create a program that will be used to automatically print a grocery list. Most weeks the grocery list is the same and so you may begin by declaring the function prototype `print_grocery_list` which has the default argument values:
`mangos = 13`
`apples = 3`
`oranges = 7`
The function `print_grocery_list` has no return statement and so the return type of the function prototype should be `void`.
*IMPORTANT:* Before declaring the function prototype, read the entire exercise to determine the proper order of arguments in the function parameter list. Remember that default argument values that do not change should be placed at the tail end of the parameter list, and those which change most often should be placed at the beginning.

```c++
#include <iostream>
using namespace std;

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION PROTOTYPE BELOW THIS LINE----

void print_grocery_list(int apples = 3, int oranges = 7, int mangos = 13);

//----WRITE YOUR FUNCTION PROTOTYPE ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void modify_grocery_list() {
    
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR FUNCTION CALLS BELOW THIS LINE----

    print_grocery_list();
    print_grocery_list(5);
    print_grocery_list(7, 11);
    
    //----WRITE YOUR FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
}

void print_grocery_list(int apples, int oranges, int mangos) { //----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
                                     //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    cout << apples << " apples" << "\n" << oranges << " oranges" << "\n" << mangos << " mangos" << "\n";
}
```

# Coding Exercise 24: Overloading Functions - Calculating Area

Create a program taht computes the area of two shapes, a `square` and a `rectangle`, by calling the overload function `find_area`

```c++
#include <iostream>
#include <cmath>
using namespace std;

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION PROTOTYPES BELOW THIS LINE----

int find_area(int side_length);
double find_area(double length, double width);

//----WRITE YOUR FUNCTION PROTOTYPES ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void area_calc() {
    
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR FUNCTION CALLS BELOW THIS LINE----
    
    int square_area = find_area(2);
    double rectangle_area = find_area(4.5, 2.3);

    //----WRITE YOUR FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << "The area of the square is " << square_area << "\n" << "The area of the rectangle is " << rectangle_area;
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION DEFINITIONS BELOW THIS LINE----

int find_area(int length) {
    return pow(length, 2);
}

double find_area(double length, double width) {
    return (length * width);
}
```

# Coding Exercise 25: Passing Arrays to Functions - Print a Gust List

Create a program that will be used to `print` the `guest_list` to an event and then `clear` the `guest_list` when the event is over

```c++
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION PROTOTYPES BELOW THIS LINE----

string print_guest_list(const string[], size_t);//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
void clear_guest_list(string[], size_t);//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
                                      
//----WRITE THE FUNCTION PROTOTYPES ABOVE THIS LINE----                                      
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void event_guest_list() {

    string guest_list[] {"Larry", "Moe", "Curly"};
    size_t guest_list_size {3};

    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE THE FUNCTION CALLS BELOW THIS LINE----

    print_guest_list(guest_list, guest_list_size);
    clear_guest_list(guest_list, guest_list_size);
    print_guest_list(guest_list, guest_list_size);

    //----WRITE THE FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----

string print_guest_list(const string guest_list[], size_t guest_list_size) {//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES

    //----WRITE THE FUNCTION BODY BELOW THIS LINE----
    for (size_t i=0; i < guest_list_size; ++i) {
        cout << guest_list[i] << endl;
    }
        
    //----WRITE THE FUNCTION BODY ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    return typeid(guest_list).name();
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----

void clear_guest_list(string guest_list[], size_t guest_list_size) {//----WRITE THE FUNCTION PARAMETER LIST WITHIN THEPARENTHESES

    //----WRITE THE FUNCTION BODY BELOW THIS LINE----
    
    for (size_t i=0; i < guest_list_size; ++i) {
        guest_list[i] = " ";
    }
    
    // return guest_list;
    
    //----WRITE THE FUNCTION BODY ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
}
```

# Coding Exercise 26: Using Pass by Reference - Print a Guest List

Create a program that will be used to `print` the `guest_list` to an event and then `clear` the `guest_list` when the event is over

```c++
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION PROTOTYPES BELOW THIS LINE----

string print_guest_list(const string &, const string &, const string &);//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
void clear_guest_list(string &, string &, string &);//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES

//----WRITE THE FUNCTION PROTOTYPES ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void event_guest_list() {

    string guest_1 {"Larry"};
    string guest_2 {"Moe"};
    string guest_3 {"Curly"};

    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE THE FUNCTION CALLS BELOW THIS LINE----

    print_guest_list(guest_1, guest_2, guest_3);
    clear_guest_list(guest_1, guest_2, guest_3);
    print_guest_list(guest_1, guest_2, guest_3);    

    //----WRITE THE FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----

string print_guest_list(const string &guest_1, const string &guest_2, const string &guest_3) {//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES

    //----WRITE THE FUNCTION BODY BELOW THIS LINE----

    cout << guest_1 << endl;
    cout << guest_2 << endl;
    cout << guest_3 << endl;
    
    
    //----WRITE THE FUNCTION BODY ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    string test_1 = typeid(guest_1).name(), test_2 = typeid(guest_2).name(), test_3 = typeid(guest_3).name();
    return test_1 + test_2 + test_3;
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----

void clear_guest_list(string &guest_1, string &guest_2, string &guest_3) {//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
    
    //----WRITE THE FUNCTION BODY BELOW THIS LINE----
    
    guest_1 = " ";
    guest_2 = " ";
    guest_3 = " ";
        
    //----WRITE THE FUNCTION BODY ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
}
```

# Codign Exercise 27: Implemeting a Recursive Function - Save a Penny

Create a program that calculate the `total_amount` of money that will be accumulated if you start with a penny and double it everyday for `n` number of days.

i.e.
```txt
Day 1: $0.01
Day 2: $0.02
Day 3: $0.04
...
...
...
Day 16: $327.68
Day 17: $655.36
Day 18: $1310.72
```

```c++
#include <iostream>
#include <iomanip>
using namespace std;

int function_activation_count {0};

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION PROTOTYPE BELOW THIS LINE----

double a_penny_doubled_everyday(int num_day, double amount);//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES

//----WRITE THE FUNCTION PROTOTYPE ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void amount_accumulated() {
    
//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION CALL BELOW THIS LINE----

int num_day {25};
double amount {0.01};

double total_amount = a_penny_doubled_everyday(num_day, amount);

    
//----WRITE THE FUNCTION CALL ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----
    cout <<  "If I start with a penny and doubled it every day for 25 days, I will have $" << setprecision(10) << total_amount;
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION DEFINITION BELOW THIS LINE----

double a_penny_doubled_everyday(int num_day, double amount) {//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
    function_activation_count++;
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE THE FUNCTION BODY BELOW THIS LINE----
    
    if (num_day == 1)
        return amount;
    return a_penny_doubled_everyday(num_day--, amount*2);
    
    
    //----WRITE THE FUNCTION BODY ABOVE THIS LINE----
    //DO NOT MODIFY THE CODE BELOW THIS LINE----
}

int test_function_activation_count() {
    return function_activation_count;
}
```