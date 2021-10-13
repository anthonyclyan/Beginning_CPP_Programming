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

