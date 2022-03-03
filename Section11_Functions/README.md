# Functions

## Overview

- Function
    - definition
    - prototype
    - Parameters and pass-by-value
    - `return` statement
    - default parameter values
    - overloading
    - passing arrays to function
    - pass-by-reference
    - `inline` function
    - `auto` return type
    - recursive functions

## What is a function?

- C++ programs
    - C++ Standard Libraries (functions and classes)
    - Third-party libraries (functions and classes)
    - Our own functions and classes

- Functions allow the modularization of a program
    - Separate code into logical self-contained units
    - These units can be reused


```c++
int main() {
    // read input
    statement1;
    statement2;
    statement3;
    statement4;

    // process input
    statement5;
    statement6;
    statement7;

    // provide output
    statement8;
    statement9;
    statement10;

    return 0;
}

// ===== Modularized Code =====
int main() {
    // read input
    read_input();

    // process input
    process_input();

    // provide output
    provided_output();
}
```

Example
Boss/Worker analogy

- Write your code to the function specification
- Understand what the function does
- Understand what the information the function needs
- Understand what the function returns
- Understand any errors the function may produce
- Understand any performance constraints

- Don't worry about HOW the function works inernally
    - Unless you are the one writing the function

### `<cmath>`

- Example of abstraction
- Common mathematical calculations
- Global functions called as:

```c++
function_name(argument);
function_name(argument1, argument2, ...);

cout << sqrt(400.0) << endl;        // Output: 20.0
double result;
result = pow(2.0, 3.0);             // Output: 2.0^3.0
```

### User-defined functions

- We can define our own functions

```c++
/*  This is a function that expects 2 integers a and b
    It calculates the sum of a and b and returns it to the caller
    Notes that we specify that the function returns an int
*/

int add_numbers(int a, int b) {
    return a + b;
}

// I can call the function and use the value that it returns

cout << add_numbers(20, 40);
```

## Function definition

- Name
    - the name of the function
    - same rules as for variable
    - should be meaningful
    - usually a verb or berb phrase

- Parameter list
    - the variables passed into the function
    - their types must be specified

- Return type
    - the type of the data that is returned from the function

- Body
    - the statements that are executed when the function is called
    - in curly braces `{}`

Example with no parameters

```c++
int function_name(){
    statements(s);
    return 0;
}

// Name:        function_name
// Parameters:  ()
// Return type: int
// Body:        inside {}
```

Example with parameter

```c++
int function_name(int a){
    statements(s);
    return 0;
}

// Name:        function_name
// Parameters:  (int a)
// Return type: int
// Body:        inside {}
```

Example with no return type (void)

```c++
void function_name(){
    statements(s);
    return;     // optional
}

// Name:        function_name
// Parameters:  ()
// Return type: void
// Body:        inside {}
```

Example with multiple parameters

```c++
void function_name(int a, std::string b){
    statements(s);
    return;     // optional
}

// Name:        function_name
// Parameters:  (int a, std::string b)
// Return type: void
// Body:        inside {}
```

### Calling a funciton

```c++
void say_hello() {
    cout << "Hello" << endl;
}
// Notice:
//      since void function, no need to return anything

int main() {
    say_hello();
    return 0;
}
// Notice:
//      since int function, need to return an int
//      call function by function name and parameter

// ========== Calling functions multiple times =========
// Call function 10 times

void say_hello() {
    cout << "Hello" << endl;
}

int main() {
    for (int i{1}; i<=10; ++i)
        say_hello();
    return 0;
}
```

- Functions can call other functions
- Compiler must know the function details BEFORE it is called!

```c++
// ========== ILLEGAL =========
int main() {
    say_hello();        // called BEFORE it is defined - ERROR
    return 0;
}

void say_hello() {
    cout << "Hello" << endl;
}
```

## Function Prototypes

- The compiler must 'know' about a function before it is used
- Define functions before calling them
    - OK for small programs
    - Not a practical solution for larger programs
- Use function prototypes
    - Tells the compiler what it needs to know without a full function definition
    - Also called *forward declarations*
    - Placed at the beginning of the program
    - Also used in our own header files (.h) - more about this later

Example

```c++
int function_name();    // prototype

int funciton_name() {
    statement(s);
    return 0;
}
```

```c++
int function_name(int);    // prototype
// or
int function_name(int a);  // prototype

// Best practce is [ int function_name(int a); ] for documentation purposes

int funciton_name() {
    statement(s);
    return 0;
}
```

```c++
void function_name(int a, std::string b);

void function_name (int a, std::string b) {
    statement(s);
    return;     // optional
}
```

```c++
void say_hello();

int main() {
    say_hello();            // OK
    say_hello(100);         // Error
    cout << say_hello();    // Error: No return value

    return 0;
}
```

## Function Parameters and the Return Statement

- When we call a funciton we can pass in data to the function
- In the function call they are called arguments
- In the function definition they are called parameters
- They must match in number, order, and in type

Example

```c++
int add_numbers(int a, int b);      // prototype

int main() {
    int result {0};
    result = add_numbers(100, 200); // call
    return 0;
}

int add_numbers(int a, int b) {     // definition
    return a + b;
}
```

```c++
void say_hello(std::string name) {
    cout << "Hello " << name << endl;
}

// Compiler will try to convert C-style string to C++ type

say_hello("Frank");

std::string my_dog {"Buster"};
say_hello(my_dog);
```

### Passy-by-value

- When you pass data into a function it is passed-by-value
- A copy of the data is passed to the function
- Whatever changes you make to the parameter in the function does NOT affect the argument that was passed in.
    - Pro: we can't change the original copy by mistake or intentionally
    - Con: somtimes making a copy of data can be expensive both in storage and time needed
- Formal vs. Actual parameters
    - Formal parameters - the parameters defined in the function header
    - Actual parameters - the parameters used in the function call, the arguments
- The actual parameters are pass-by-value and are copied to the formal parameters

Example
```c++
void param_test(int formal) {   // formal is a copy of actual 
    cout << formal << endl;     // Output: 50
    formal = 100;               // only changes the local copy
    cout << formal << endl;     // Output: 100
}

int main() {
    int actual {50};
    cout << actual << endl;     // Output: 50
    param_test(actual);         // pass in 50 to param_test
    cout << actual << endl;     // Output: 50 --- did not change
}
```

### Function Return Statement

- If a function returns a value thenn it must use a `return` statement that returns a value
- If a function does not retur a value (`void`) then the `return` statements is optioanl
- `return` statement can occur anywhere in the body of the function
- `return` statement immediately exits the function
- We can have multiple `return` statements in a function
    - avoid many return statements in a funciton
- The return value is the result of the function call

## Default Argument Values

- When a function is called, all arguments must be supplied
- Somtimes some of the arguments have the same values
- We can tell the compiler to use default values if the arguments are not supplied
- Default values can be in the prototpe or definition, not both
    - best practice - in the prototype
    - must appear at the tail end of the parameter list
- Can have multiple default values
    - must appear consecutively at the tail end of the parameter list

Example - no default arguments

```c++
double calc_cost(double base_cost, double tax_rate);

double calc_cost(double base_cost, double tax_rate) {
    return base_cost += (base_cost * tax_rate);
}

int main() {
    double cost {0};
    cost = calc_cost(100.0, 0.06);
    return 0;
}
```

Example - single default argument

```c++
double calc_cost(double base_cost, double tax_rate = 0.06);

double calc_cost(double base_cost, double tax_rate) {
    return base_cost += (base_cost * tax_rate);
}

int main() {
    double cost {0};
    cost - calc_cost(200.0);        // will use the default tax = 0.06
    cost = calc_cost(100.0, 0.08);  // will use 0.08 not the default
    return 0;
}
```

Example - multiple default arguments

```c++
double calc_cost(double base_cost, double tax_rate = 0.06, double shipping = 3.50);

double calc_cost(double base_cost, double tax_rate, double shipping) {
    return base_cost += (base_cost * tax_rate) + shipping;
}

int main() {
    double cost {0};
    cost = calc_cost(100.0, 0.08, 4.25);        // will not use any defaults
    cost = calc_cost(100.0, 0.08);              // will use default shipping
    cost = calc_cost(200.0);                    // will use default tax and shipping
    return 0;
}
```

## Overloading Functions

- We can have functions that have different parameter lists that have the same name
- Abstraction mechanism since we can just think 'print' for example
- A type of polymorphism
    - We can have the same name work with different data types to execute similar behavior
- The compiler must be able to tell the funcitons apart based on the parameter lists and argument supplied

Example 

```c++
int add_numbers(int, int);          // add ints
double add_numbers(double, double); // add doubles

int main() {
    cout << add_numbers(10, 20) << endl;        // integer
    cout << add_numbers(10.0, 20.0) << endl;    // double
    return 0;
}
```

```c++
int add_numbers(int a, int b) {
    return a + b;
}

double add_numbers (double a, double b) {
    return a + b;
}
```

*keep an eye out for function `template` under Standard Template Library in later course*

Example 

```c++
void display (int n);
void display (double d);
void display (std::string s);
void display (std::string s, std::string t);
void display (std::vector<int> v);
void display (std::vector<std::string> v);
```

- the compiler will check the argument of the function and try to match it with one of the overloaded functions
- if it can't match it, or can't convert the type of the argument to one that matches, it throws an error 

```c++
int get_value();
double get_value();

// Error

cout << get_value() << endl;    // which one??
```

- Return type is not considered

## Passing Arrays to Functions

- We can pass an array to a function by providing square brackets in the formal parameter description
`void print_array (int numbers []);`
- The array elements are NOT copied
- Since the array name evaluates to the location of the array in memory - this address is what is copied
- So the function has no idea how many elements are in the array since all it knows is the location of the first element (the name of the array)
- Therefore, need to provide the size of the array

Example 

```c++
// Error
void print_array(int numbers []);

int main() {
    int my_numbers[] {1, 2, 3, 4, 5};
    print_array(my_numbers);
    return 0;
}

void print_array (int numbers []) {
    // Doesn't konw how many elements are in the array???
    // we need to pass in the size!!!
}
```

```c++
// Fix
void print_array(int numbers [], size_t size);

int main() {
    int my_numbers[] {1, 2, 3, 4, 5};
    print_array(my_numbers, 5);
    return 0;
}

void print_array (int numbers []) {
    for (size_t i{0}); i < size; ++i)
        cout << numbers[i] << endl;
}
```

Gotcha!!!
- Since we are passing the location of the array
    - The function can modify the actual array

```c++
// Use case of modifying array through a function
//      zero out all array element
void zero_array(int numbers [], size_t size) {
    for (size_t i{0}; i < size; ++i)
        numbers[i] = 0;                             // zero out array element
}

int main() {
    int my_numbers[] {1, 2, 3, 4, 5};
    zero_array(my_numbers, 5);          // my_numbers is now zeroes!!!
    print_array(my_numbers, 5);         // Output: 0, 0, 0, 0, 0
    return 0;
}
```

- We can tell the compiler that function parameters are `const` (read-only)
- This could be useful in the `print_array` function since it should NOT modify the array

```c++
void print_array(const int numbers [], size_t size) {
    for (size_t i{0}; i < size; ++i) {
        cout << numbers[i] << endl;
    }
    numbers[i] = 0;         // any attempt to modify the array will result in a compiler error
}
```

## Pass by reference

- Sometimes we want to be able to change the actual parameter from within the funciton body
- In order to achieve this we need the locaiton or address of the actual parameter
- We saw how this is the effect with array, but what about other variable types?
- We can use reference parameters to tell the compiler to pass in a reference to the actual parameter
- Using `&`
- The formal parameter will now be an alias for the actual parameter

Example

```c++
void scale_number(int &num);   // prototype

int main() {
    int number {1000};
    scale_number(number);       // call
    cout << number << endl;     // Output: 100 and not 1000
}

void scale_number(int &num) {  // definition
    if (num > 100)
        num = 100;
}
```

Example 

```c++
void swap(int &a, int &b);

int main() {
    int x{10}, y{20};
    cout << x << " " << y << endl;      // Output: 10 20
    swap(x,y);
    cout << x << " " << y << endl;      // Output: 20 10
    return 0;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
```

Example - Vector with pass by value

```c++
void print(std::vector<int> v);

int main() {
    std::vector<int> data {1,2,3,4,5};
    print(data);        // Output: 1 2 3 4 5
    return 0;
}

void print(std::vector<int> v) {
    // v here is a copy of v from main
    for (auto num: v)
        cout << num << endl;
}
```

Example - Vector with pass by reference

```c++
void print(std::vector<int> &v);

int main() {
    std::vector<int> data {1,2,3,4,5};
    print(data);        // Output: 1 2 3 4 5
    return 0;
}

void print(std::vector<int> &v) {
    // v here is a reference of v from main
    for (auto num: v)
        cout << num << endl;
}
```

Example - Vector with pass by constant reference

```c++
void print(const std::vector<int> &v);

int main() {
    std::vector<int> data {1,2,3,4,5};
    print(data);        // Output: 1 2 3 4 5
    return 0;
}

void print(const std::vector<int> &v) {
    v.at(0) = 200;      // Error!!! Avoid accidentially modifing values
    for (auto num: v)
        cout << num << endl;
}
```

## Scope Rules

- C++ uses scope rules to determine where an identifier can be used
- C++ uses static or lexical scoping
- Local or Block scope
- Global scope

### Local or Block scope

- Identifier declared in a block `{}`
- Funcion parameters have block scope
- Only visible within the block `{}` where declared
- Function local variables are only active while the function is executing
- Local variables are NOT preserved between function calls
- With nested blocks inner blocks can 'see' but outer blocks cannot 'see' in

### Static local variables

- Declared with static qualifer
    `static int vlaue {10};`
- Value IS preserved between funciton call
- Variable lifetime is the same as the lifetime of the program
- Only initialized the first time the function is called

### Global scope

- Identifier declared outside any function or class
- Visible to all parts of the program after the global identifier has been declared 
- Global constant are OK
- Best practice - don't use global variables

## How do Function Calls work?

- Functions use the "function call stack"
    - Analogous to a stack of books
    - LIFO - Last In First Out
    - Push(add) and Pop(remove)

- Stack Frame or Activation Record
    - Function must return control to function that called it
    - Each time a function is called we create an new activation record and push it on stack
    - When a function terminates we pop the activation record and return
    - Local variables and function parameters are allocated on the stack

- Stack size is finite - Stack Overflow

### Memory 

| Heap or Free store |
| --- |
| Stack |
| Static variables |
| Code Area |

Go to HowFunctionCallsWork

## Inline Functions

- Function calls have a certain amount of overhead
- You saw what happens on the call stack
- Sometimes we have simple functions
- We can suggest to the compiler to compile them 'inline'
    - avoid function call overhead
    - generate inline assembly code
    - faster
    - could cause code bloat
- Compilers optimization are very sophisticated
    - will likely inline even without your suggestion
- Best practice to put them in header files

Example

```c++
inline int add_numbers(int a, int b) { // definition
    return a + b;
}

int main() {
    int result [0];
    result = add_numbers(100, 200);     // function call
    return 0;
}
```

## Recursive Functions

- is a funciton taht calls itself
    - either directly or indirectly through another function
- recursive problem solving
    - base case
    - divide the rest of problem into subproblem and do recursive call
- there are many problems that lend themselves to recursive solutions
- mathematic - factorial, Fibonacci, fractals, ...
- searching and sorting - binary search, search trees, ...

Example - Factorial

`0! = 1`
`n! = n * (n-1)!`

- Base case:
    - factorial(0) = 1
- Recursive case:
    - factorial(n) = n * factorial(n-1)

```c++
unsigned long long factorial(unsigned long long n) {
    if (n == 0)
        return 1;                   // base case
    return n * factorial(n-1);      // recursive case
}

int main() {
    cout << factorial(8) << endl;   // Output: 40320
    return 0;
}
```

Example - Fibonacci

`Fib(0) = 0`
`Fib(1) = 1`
`Fib(n) = Fib(n-1) + Fib(n-2)`

- Base case:
    - Fib(0) = 0
    - Fib(1) = 1
- Recursive case:
    - Fib(n) = Fib(n-1) + Fib(n-2)

```c++
unsigned long long fibonacci(unsigned long long n) {
    if (n <= 1)
        return n;                               // base cases
    return fibonacci(n-1) + fibonacci(n-2);     // recursion
}

int main() {
    cout << fibonacci(30) << endl;              // Output: 832040
    return 0;
}
```

### Important notes

- If recursion doesn't eventually stop you will have infinite recursion
- Recursion can be resource intensive
- Remember the base case(s)
    - It terminates the recusion
- Only use recursive solutions when it makes sense
- Anything that can be done recursively can be done iteratively
    - Stack overflow error

