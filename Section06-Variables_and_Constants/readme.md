# What is a varialbe

- A variable is an abstraction for a memory location
- Allow programmer to use meaningful names and not memory addresses
- Variables have
    - Type: their category
    - Value: the contents
- Variables **must** be declared before they are used
- Variables value may change

# Declaring and Initializing Variables

## Naming variables

- Can contain letters, numbers, and underscores
- Must begin with a letter or underscore
    - cannot begin with a number
- Cannot use C++ reserved keywords i.e. `int int`
- Cannot redeclare a name in the same scope
    - C++ is case sensitive: upper case and lower case are different variables

## Style and Best Practices

- Be consistent with naming conventions
    - `myVariableName` vs `my_variable_name`
    - avoid beginning names with underscores
- Use meaningful names
    - not too long and not too short
- Never use variables before initializing them
- Declare variables close to when you need them in your code

# Global variables
- Declared outside functions
    - Declared inside a function is then local variables
- Global variable will not be used inside the fuction if variable is also declared locally
    - Below C++ code output 16 and not 18.

```c++
#include <iostream>

using namespace std;

int age {18};   // Global variable

int main () {
    int age {16}    // Local variable
    cout << age << endl;
    return 0;
}
```

# C++ Primitive Data Types

- Fundamental data types implemented directly by the C++ language
- Character types
- Integer types
    - signed and unsigned
- Floating-point types
- Boolean type
- Size and precision is often compiler-dependent
    - `#include <climits>`

## Type sizes

- Expressed in bits
- The most bits the more values that can be represented
- The more bits the more storage required
| Size (in bits) | Representable Values |  |
| --- | --- | --- |
<!-- | 8 | 256 | 2 <sup> 8 </sup> | -->
| 8 | 256 | 2^8 |
<!-- | 16 | 65,536 | 2 <sup> 16 </sup> | -->
| 16 | 65,536 | 2^16 |
<!-- | 32 | 4,294,967,296 | 2 <sup> 32 </sup> | -->
| 32 | 4,294,967,296 | 2^32 |
<!-- | 64 | 18,446,744,073,709,551,615 |  2 <sup> 64 </sup> | -->
| 64 | 18,446,744,073,709,551,615 |  2^64 |

## Character Types

- Used to represent single characters, `A`, `X`, `@`
- Wider types are used to represent wide character sets
| Type Name | Size/Precision |
| --- | --- |
| char | Exactly one byte. At least 8 bits |
| char16_t | At least 16 bits. |
| char32_t | At least 32 bits. |
| wchar_t | Can represent the largest available character set. |

## Integer Types

- Default *signed* integers

| Type Name | Size/Precision |
| --- | --- |
| *signed* **short** int | At least 16 bits. |
| *signed* **int** | At least 16 bits. |
| *signed* **long** int | At leaset 32 bits. |
| *signed* **long long** int | At least 64 bits. |

| Type Name | Size/Precision |
| --- | --- |
| **unsigned short** int | At least 16 bits. |
| **unsigned** int | At least 16 bits. |
| **unsigned long** int | At least 32 bits. |
| **unsigned long long** int | At least 64 bits. |

## Floating-point Type

- Used to represent non-integer numbers
- Represented by mantissa and exponent (scientific notation)
- Precision is the number of digits in the mantissa
- Precision and size are compiler dependent

| Type Name | Size/Typical Precision | Typical Range | 
| --- | --- | --- |
| float | / 7 decimal digits | 1.2 x 10 <sup> -38 </sup> to 3.4 x 10 <sup> 38 </sup> |
| double | No less than float / 15 decimal digits | 2.2 x 10 <sup> -308 </sup> to 1.8 x 10 <sup> 308 </sup> |
| long double | No less than double / 19 decimal digits | 3.3 x x 10 <sup> -4932 </sup> to 1.2 x 10 <sup> 4932 </sup> |

## Boolean Type

- Used to represent true and false
- Zero is false
- Non-zero is true

| Type Name | Size/Precision |
| --- | --- |
| bool | Usually 8 bit: true or false (C++ keywords) |

# What is the Size of a Variable (sizeof)

## Using the sizeof operator

- The `sizeof` operator determines the size in bytes of a type or variable
- Example 

```c++
sizeof(int)
sizeof(double)

sizeof(some_variable)

sizeof some_variable    // () is optional for variables
```

- The `sizeof` operator gets information from `climits`, for integer types, and `cfloat`, for float types
- The `climits` and `cfloat` include files contain size and precision information about your implementation of C++
- The sizeof information varies between 32 bit compiler and 64 bit compiler

# What is a constant

- Similar to C++ variables
    - have names
    - occupy storage
    - are usually typed
    - however, their **value cannot change once declared!**

## Types of constants in C++

- Literal constants
    - i.e. `x = 12;`, `y = 3.14;`, `name = "Anthony";`, `middle_initial = 'J';`
    - Integer Literal Constants
        - an integer: 12
        - an unsigned integer: 12U or 12u
        - a long integer: 12L or 12l
        - a long long integer: 12LL or 12ll
    - Floating-point Literal Constants
        - a double: 12.1
        - a float: 12.1F
        - a long double: 12.1L
    - Character Literal Constatns (escape codes)
        - newline: `\n`
        - return: `\r`
        - tab: `\t`
        - backspace: `\b`
        - single quote: `\'`
        - double quote: `\"`
        - backslash: `\\`
        - i.e.
        ```c++
        cout << "Hello\tthere\nmy friend\n";
        // output: 
        Hello     there
        my friend
        ```
- Declared constants
    - `const` keyword
    - i.e. 
    ```c++
    const double pi {3.1415926};
    const int months_in_year {12};

    pi = 2.5;   // Compiler error
    ```
- Constant expressions
    - `constexpr` keyword
- Enumerated constants
    - `enum` keyword
- Defined constants
    - `#define`