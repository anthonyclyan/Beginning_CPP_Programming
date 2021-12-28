# Coding Exercise 7: Using the Assignment Operator

Write a program that uses the assignment operator `=` to change the value of an initialized variable as well as assign the calue of one variable to another.

- begin by declaring and initialize the integer variable `num1` to the value of `13`.
- now declare and initialize the integer variable `num2` to the value `0`.
- use the assignment operator to assign the value of `num1` to `5`.
- now use the assignment operator to assign the value of `num1` to `num2`.

## Solution

```c++
#include <iostream>
#include <tuple>
using namespace std;

void assignment_operator() {
    
    //----WRITE YOUR CODE BELOW THIS LINE----
    // Declare num1 as an integer and initialize it to 13.
    int num1 {13};
    
    // Declare num2 as an integer and initialize it to 0.
    int num2 {0};
    
    // Assign the value 5 to num1
    num1 = 5;
    
    // Assign the value of num1 to num2
    num2 = num1;
    
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
   
   cout << num1 << " " << num2;
}
```

# Coding Exercise 8: Using the Arithmetic Operators

Write a program that uses arithmetic operators to manipulate an integer number that is provided to you.
You do **NOT** have to declare `number`, it is already declared and will be set to various values by the automated tester.
In order to complete this exercise you will have to update the value contained within the variable `number` by using the currently contained value as an argument in the statement.
This can be done through the use of the assignment operator `=` int he following way:
- i.e. `number = number + 4`
Lets assume that `number` is currently holding the value `3`. This means that the above statement is equivalent to `number = 3 + 4`. Thereby, through the assignment operator, the new value of `number` will be 7.

- use the arithmetic operators in the manner and order in which they are listed below. For those who feel inclined, try challenging yourself by completing all operations in one statement remembering the rules of **PEMDAS**.
- use the multiplication operator `*` to `double` the value of the variable `number` and store the result back in `number`.
- use the addition operator `+` to add `9` to the variable `number` and store the result back in `number`.
- use the subtraction operator `-` to subtract `3` from the variable `number` and store the result back in `number`.new value.
- use the division operator `/` to divide the variable `number` by `2` and store the result back in `number`.
- use the subtraction operator `-` to subtract the variable named `original_number` from the variable `number` and store the result back in `number`.
- use the modulo operator `%` to find the reamined of the new value when divided by `3` and store the result back in `number`.

## Solution

```c++
#include <iostream>
using namespace std;

int arithmetic_operators(int number) {
    int original_number {number};

    
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    //-- Multiply number by 2 and assign the result back to number
    number = number * 2;
    //-- Add 9 to number and assign the result back to number
    number = number + 9;
    //-- Subtract 3 from number and assign the result back to number
    number = number - 3;
    //-- Divide number by 2 and assign the result back to number
    number = number / 2;
    //-- Subtract original_number from number and assign the result back to number
    number = number - original_number;
    //-- Take the modulus 3 (%) of number and assign it back to number
    number = number % 3;

    //----WRITE YOUR CODE ABOVE THIS LINE----
    
    return number;
}
```