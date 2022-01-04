# Coding Exercise 10: If Statement - Can you Drive?

- Use a simple `if` statement to decide if someone can drive
- Let's assume that anyone 16 or older can legally drive
- If the person can legally drive, your program should display, **"Yes - you can drive!"** using a `cout` statement. You do not have to provide a `\n` or `endl`
- If the person cannot legally drive, your program should not display anything
- The `age` will be provided for you, do NOT declare `age`

## Solution

```c++
#incldue <iostream>
using namespace std;

void can_you_drive(int age) {
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    if (age >= 16)
        cout << "Yes - you can drive!";
    
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
}
```

# Coding Exercise 11: If-Else statement - Can you Drive?

- Use a simple `if/else` statement to decide if someone can drive
- Let's assume that anyone 16 or older can legally drive
- If the person can legally drive, your program should display, **"Yes - you can drive!"** using a `cout` statement. You do not have to provide a `\n` or `endl`
- If the person cannot legally drive, your program should display **"Sorry, come back in `n` years"**, where `n` is how many years until the person turns 16 years old.
- The `age` will be provided for you, do NOT declare `age`

## Solution

```c++
#incldue <iostream>
using namespace std;

void can_you_drive(int age) {
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    if (age >= 16)
        cout << "Yes - you can drive!";
    else {
        int diff = 16 - age;        
        cout << "Sorry, come back in " << diff << " years";
    }
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
}
```

# Coding Exercise 12: Nested If Statements - Can you Drive?

- Use nested `if` statement to decide if someone can drive
- Let's assume that anyone 16 or older can legally drive but they must also own a car to drive
- If the person is not 16 or older then you should display **"Sorry, come back in `n` years and be sure you own a car when you come back."**, where `n` is how many years until the person turns 16 years old.
- If the person is 16 or older but they do NOT own a car then your program should display **"Sorry, you need to buy a car before you can drive!"**
- If the person is 16 or older and the DO own a car, then your program should display, **"Yes - you can drive!"** 
- The `age` will be provided for you, do NOT declare `age`
- The boolean variable name `has_car` will also be provided

## Solution

```c++
#include <iostream>
using namespace std;

void can_you_drive(int age, bool has_car) {
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    if (age >= 16) {
        if (has_car) {
            cout << "Yes - you can drive!";
        } else {
            cout << "Sorry, you need to buy a car before you can drive!";
        }
    } else {
        int diff = 16 - age;
        cout << "Sorry, come back in " << diff << " years and be sure you own a car when you come back.";
    }
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
}
```

# Coding Exercise 13: Switch Statements - Day of the Week

- Write a `switch` statement that displays the name of the day of the week given the day code.
- Use the integer variable named `day_code` whose value we will change to automatically to test your code.
- Do NOT declase this variable
- Given the following day codes, your program should display the day of the week using a `cout` statement. No `\n` or `endl` should be used.

| Day Code | Display |
| --- | --- |
| 0 | Sunday |
| 1 | Monday |
| 2 | Tueday |
| 3 | Wednesday |
| 4 | Thursday |
| 5 | Friday |
| 6 | Saturday |
| other | Error - illegal day code |

## Solution

```c++
#include <iostream>
using namespace std;

void display_day(int day_code) {
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    switch (day_code) {
        case 0:   cout << "Sunday"; break;
        case 1:   cout << "Monday"; break;
        case 2:   cout << "Tuesday"; break;
        case 3:   cout << "Wednesday"; break;
        case 4:   cout << "Thursday"; break;
        case 5:   cout << "Friday"; break;
        case 6:   cout << "Saturday"; break;
        default:    cout << "Error - illegal day code";
    }
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
}
```

# Coding Exercise 14: For loop - Sum of Odd Integers

- Write code that uses a for loop to calculate the sum of the odd integers from 1 to 15, inclusive.
- The final result should be stored in an integer variable named `sum`.

## Solution

```c++
int calculate_sum() {
    //---- WRITE YOUR CODE BELOW THIS LINE
    
    int sum{0};
    for (int i{0}; i <= 15; ++i) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    //---- WRITE YOUR CODE ABOVE THIS LINE
    //---- DO NOT MODIFY THE CODE BELOW
    return sum;
}
```


# Coding Exercise 15: Using the range-based for loop

- Use a range-based for loop to loop through a given vector of integers and determine how many elements in the vector are evenly divisible by either 3 or by 5.
- The final result should be stored in an integer variable named `count`
- The vector of integers has been provided for you and is named `vec`

## Solution

```c++
#include <vector>
using namespace std;

int count_divisible() {
    
    vector<int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
    //---- WRITE YOUR CODE BELOW THIS LINE----
    
    // initialize output
    int count {};

    for (auto integer : vec) {
        if ( (integer % 3 == 0) || (integer % 5 == 0) )
            ++count;
    }

    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT CHANGE THE CODE BELOW THIS LINE----
    return count;
}
```


# Coding Exercise 16: While loop exercise

- Given a vector of integers, determine how many integers are present before you see the value `-99`. 
- Note, it's possible `-99` is NOT in the vector!
- If `-99` is NOT in the vector then the result will be equal to the number of elements in the vector.
- The final result should be stored in an integer variable named `count`
- Note that you the different vectors will be tested against your code. You do not need to declare the vector of integers. 
- `vec` is the name of the vector you should use

## Solution

```c++
#include <iostream>
#include <vector>
using namespace std;

int count_numbers(const vector<int> &vec) {
    //---- WRITE YOUR CODE BELOW THIS LINE----

    // initialization
    int index {};
    int count {};

    while (index < vec.size() && vec.at(index) != -99) {
        ++count;
        ++index;
    }
    
    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT MODIFY THE CODE BELOW THIS LINE-----
    return count;
}
```


# Coding Exercise 17: Nested Loops - Sum of the Product of all Pairs of Vector Elements

- Given a vector of integers named `vec` that is provided for you, find the sum of the product of all pairs of vector elements.
- You should DECLARE an integer variable named `result` and store the final pordut in this vairable.
- If the vector is EMPTY or has only `1` element then the `result` should be `0`.

### Example 1

- Given the vector `vec` to be `{1, 2, 3}`, the possible pairs are `(1,2), (1,3), and (2,3)`.
- So the result would be `(1*2) + (1*3) + (2*3)` which is `11`

## Example 2

- Given the vector `vec` to be `{2, 4, 6, 8}`, the possible pairs are `(2,4), (2,6), (2,8), (4,6), (4,8), and (6,8)`.
- So the result would be `(2*4), (2*6), (2*8), (4*6), (4*8), and (6*8)` which is `140`


## Solution

```c++
#include <vector>
using namespace std;

int calculate_pairs(vector<int> vec) {
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    // initialization
    int result {0};

    // Edge cases
    if (vec.size() == 0 || vec.size() == 1)
        result = 0;
    

    for (int i{0}; i < vec.size(); ++i) {
        for (int j{i+1}; j < vec.size(); ++j){
            result += vec.at(i) * vec.at(j);
        }
    }
     
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    return result;
}
```
