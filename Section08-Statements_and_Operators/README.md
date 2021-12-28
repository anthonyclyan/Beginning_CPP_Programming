# Statements and Operators

## Overview

### Expressions, Statements and Operators

- Expressions
    - building blocks to statements
- Statements and block statements
    - building blocks to C++
    - 
- Operators
    - Assignment
    - Arithmetic
    - Increment and decrement
    - Equality
    - Relational
    - Logical
    - Compound assignment
    - Precedence

## Expressions, Statements

- Expressions
    - the most basic building block of a program
    - "a sequence of operatros and operands that specifies a computation"
    - computes a value from a number of operands
    - There is much, much more to expressions - not necessary at this level...

    ```c++
    /* Expressions - examples */

    34              // literal
    favorite_number // variable
    1.5 + 2.8       // addition
    2 * 5           // multiplication
    a > b           // relational
    a = b           // assignment
    ```

- Statements
    - a complete line of code that performs some action
    - usually terminated with a semi-colon (`;`)
    - usually contain expressions
    - C++ has many types of statments
        - expression, null, compound, selection, iteration, declaration, jump, try blocks, and others.

    ```c++
    /* Statements - examples */

    int x;                  // declaration
    favorite_number = 12;   // assignment
    1.5 + 2.8;              // expression
    x = 2 * 5;              // assignment
    if (a > b) cout << "a is greater than b";   // if statement
    ;                       // null statement
    ```

## Using Operators

- C++ has a rich set of operators
    - unary, binary, ternary
- Common operators can be grouped as follows:
    - assignment
    - arithmetic
    - increment/decrement
    - relational
    - logical (`not`, `and`, `or`, etc.)
    - member access (`.`)
    - other

## Assignment Operator (`=`)

**LHS = RHS**
- RHS is an expression that is evaluated to a value
- the value of the RHS is stored to the LHS
- the value of the RHS must be type compatible with the LHS
- the LHS must be assignable
- assignment expressions is evaluated to what was just assigned
- more than one variable can be assigned in a single statement

## Arithmetic Operators

- Addition (`+`)
- Subtraction (`-`)
- Multiplication (`*`)
- Division (`/`)
- Modulo or remainder (`%`)
    - only works with integers

## Increment and Decrement Operators

- Increment operator `++`
- Decrement operator `--`
    - Increments or decrements its operand by 1
    - Can be used with integers, floating point types and pointers
- Below behavior is not identical
    - Prefix   `++num`
    - Postfix  `num++`
    - see Example 2 - 5 under `section08_source_code/IncrementDecrementOperators/main.cpp`
- Don't use the operator twice for the same variable in the same statement!!!
    - i.e. DON'T:
        - `cout << i++ << ++i`
        - `cout << i++ + ++i`

## Mixed Type Expressions

- C++ operations occur on same type operands
- If operands are of different types, C++ will convert one
- Important! Since it could affect calculation results
- C++ will attempt to automatically convert types (coercion)
    - If it can't, a compiler error will occur
    - i.e. try to assign `string` to `int`

### Conversions

- Higer vs Lower types are based on the size of the values the type can hold
    - can typically convert from lower typ to higher type automatically since it will fit but the opposite may not be true
    - decending order: long double, double, float, unsigned long, long, unsigned int, int
    - short and char types are always converted to int
- Type Coercion: conversion of one operand to another data 
    - sometimes done automatically
- Promotion: conversion to a higher type
    - Used in mathematical expressions
- Demotion: conversion to a lower type
    - Used with assignment to lower type

#### Example
- The `lower` is promoted to a `higher`
    - lower **op** higher: `2 * 5.2`
    - 2 is promoted to 2.0 automatically
- The `higher` is demoted to a `lower`
    - lower = higher:
        ```c++ 
        int num {0};
        num = 100.2;
        ```

### Explicit Type Casting - static_cast<type>

```c++
int total_amount {100};
int total_number {8};
double average {0.0};

average = total_amount / total_number;
cout << average << endl;
// displays 12 since int operations

/* 
- use static_cast<type>
- () the variable name
- total_number is automatically promoted
- do double division instead of int division
*/
average = static_cast<double>(total_amount) / total_number;
cout << average << endl;
// displays 12.5
```

## Testing for Equality `==` & `!=`

- Compares the value of 2 expressions
- Evaluates to a Boolean (True or False, 1 or 0)
- Commonly used in control flow statements
    - `expr1 == expr2`
    - `expr1 != expr2`
    - `100 == 200` -> False
    - `num1 != num2`
```c++
bool result {false};

result = (100 == 50 + 50);
result = (num1 != num2);

cout << (num1 == num2) << endl;     // 0 or 1
cout << std::boolalpha;             // this allow display "true or false" rather than "0 or 1"
cout << (num1 == num2) << endl;     // true or false
cout << std::noboolalpha;           // this revert display "true or false" back to "0 or 1"
```

## Relational Operator

| Operator | Meaning |
| --- | --- |
| `>` | greater than |
| `>=` | greater than or equal to |
| `<` | less than |
| `<=` | less than or equal to |
| `<=>` | three-way comparision (C++20) |


## Logical Operators

| Operator | Meaning |
| --- | --- |
| `not`, `!` | negation |
| `and`, `&&` | logical and |
| `or`, `||` | logical or |


### AND or `&&`

- is only true if both operands are true

| Expression A | Expression B | `A and B` or `A && B` |
| --- | --- | --- |
| true | true | **true** |
| true | false | false |
| false | true | false |
| false | false | false |


### OR or `||` 

- is true if one or more operands are true

| Expression A | Expression B | `A or B` or `A || B` |
| --- | --- | --- |
| true | true | **true** |
| true | false | **true** |
| false | true | **true** |
| false | false | false |


### Precedence 

- `not` has higher precedence than `and`
- `and` has higher precedence than `or`
- `not` is a unary operator
- `and` and `or` are binary operators


### Short-Circuit Evaluation

- When evaluating a logical expression C++ stops as soon as the result is known


## Compound assignemnt

| Operator | Example | Meaning |
| --- | --- | --- |
| `+=` | lhs += rhs; | lhs = lhs + (rhs); |
| `-=` | lhs -= rhs; | lhs = lhs - (rhs); |
| `*=` | lhs *= rhs; | lhs = lhs * (rhs); |
| `/=` | lhs /= rhs; | lhs = lhs / (rhs); |
| `%=` | lhs %= rhs; | lhs = lhs % (rhs); |
| `>>=` | lhs >>= rhs; | lhs = lhs >> (rhs); |
| `<<=` | lhs <<= rhs; | lhs = lhs << (rhs); |
| `&=` | lhs &= rhs; | lhs = lhs & (rhs); |
| `^=` | lhs ^= rhs; | lhs = lhs ^ (rhs); |
| `|=` | lhs |= rhs; | lhs = lhs | (rhs); |

```c++
a += 1;     // a = a + 1;
a /= 5;     // a = a / 5;
a *= b + c; // a = a * (b + c);

cost += items * tax;        // cost = cost + (items * tax);
```

## Operator Precedence

- [C++ Operator Precedence](https://en.cppreference.com/w/cpp/language/operator_precedence)
- Use parenthesis is good practice to remove confusion