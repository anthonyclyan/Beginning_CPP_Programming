# Coding Exercise 1: Declaring and Initializing Variables

You must declare a totale of **THREE** variables, each of a different type, to represent the employee's **name**, **age**, and **hourly_wage**.

- `age` should be an `int`
- `name` should be a `string`
- `hourly_wage` should be a `double`

- You must initialize the **hourly_wage** to **23.50**. In order to set the values
- For **name** and **age** you must use `cin` and the extraction operator `>>` to allow the employee to enter their **name** and **age** in that order separated by a single space.


## Solution

```c++
#include <iostream>
#include <string>
using namespace std;

void employee_profile() {
    
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    double hourly_wage {23.50};

    string name;
    cin >> name;
    
    int age {0};
    cin >> age;
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << name << " " << age << " " << hourly_wage;
}
```