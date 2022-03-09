# Pointers and References

## Section Overview

- What is pointer?
- Declaring pointers
- Storing addresses in pointers
- Dereferencing pointers
- Dynamic memory allocation
- Pointer arithmetic
- Pointers and arrays
- Pass-by-reference with pointers
- const and pointers
- Using pointers to functions
- Potential pointer pitfalls

- What is a reference?
- Review passing references to functions
- const and references
- Reference variables in range-based for loops
- Potnetial reference pitfalls

- Raw vs. Smart pointers

## What is a Pointer?

- A variable 
    - whose value is an address

- What can be at the address?
    - Another variable
    - A function

- Pointers point to variables or functions?

- If x is an integer variable and its value is 10, then I can declare a pointer that points to it

- To use the data that the pointer is pointing to you must know its type

## Why we use Pointers?

- Can't I just use the variable or function itself?
    - Yes, but not always

- Inside functions, pointers can be used to access data that are defined outside the function. Those variables may not be in scope so you can't access them by their name.

- Pointers can be used to operate on arrays very efficiently

- We can allocate memory dynamically on the 
    - This memory doesn't even have a variable
    - The only way to get to it is via a pointer

- With OO. pointers are how polymorphism works!

- Can access specific addresses in memeory
    - useful in medded and systems applications

## Declaring Pointers

`variable_type *pointer_name;`

```c++
int *int_ptr;
double* double_ptr;     // not typo, C++ compiler doesn't care where * is placed
char *char_ptr;
string *string_ptr;

// all contains garbage data without initialization
```

### Initializing pointer variables to 'point nowhere'

`variable_type *pointer_name {nullptr}`

```c++
int *int_ptr {};
double* double_ptr {nullptr};
char *char_ptr {nullptr};
string *string_ptr {nullptr};

// initialize pointer to point no where
```

- Always initialize pointers
- Uninitialized pointers contain garbage data and can 'point anywhere'
- Initializing to zero or `nullptr` (C++11)
    - implies that the pointer is 'pointing nowhere'
- If you don't initialize a pointer to point to a variable or function then you should initialize it to `nullptr` to 'make it null'

## Accessing Pointer Address?

`&` the address operator

- Vairables are stored in unique addresses
- Unary operator
- Evaluates to the address of its operand
    - Operand cannot be a constant or expression that evalueate to temp values

```c++
int num {10};

cout << "Value of num is: " << num << endl;             // 10
cout << "sizeof of num is: " << sizeof num << endl;     // 4 byte: how much storage is used 
cout << "Address of num is: " << &num << endl;          // 0x61ff1c: hex number of location in memory (base 16)
```

`&` the address operator - example

```c++
int *p;

cout << "Value of p is: " << p << endl;             // 0x61ff60 - garbage since we didn't initialize anything to p
cout << "Address of p is: " << &p << endl;          // 0x61ff18
cout << "sizeof of p is: " << sizeof p << endl;     // 4 bytes of storage

p = nullptr;        // set p to point nowhere
cout << "Value of p is: " << p << endl;             // 0 meaning pointing no where
```

`sizeof` a pointer variable

- Don't confuse the size of a pointer and the size of what it points to 
- All pointers in a program have the same size
- They may be pointing to very large or very small types

```c++
// All pointer hold the same size
int *p1 {nullptr};
double *p2 {nullptr};
unsigned long long *p3 {nullptr};
vector<string> *p4 {nullptr};
string *p5 {nullptr};
```

### Typed pointers

- The compiler will make sure that the address stored in a pointer variable is of the correct type

```c++
int score {10};
double high_temp {100.7};

int *score_ptr {nullptr};

score_ptr = &score;     // OK
score_ptr = &high_temp; // Compile Error

// There is a type conflict
```

## Storing an Address in Pointer Variable

`&` the address operator

- Pointer are variables so they can change
- Pointer can be null
- Pointer can be uniinitialized (not recommended)

```c++
double high_temp {100.7};
double low_temp {37.2};

double *temp_ptr;           // pointring anywhere

temp_ptr = &high_temp;      // points to high_temp
temp_ptr = &low_temp;       // points to low_temp

temp_ptr = nullptr;
```

Go to SimplePointers folder

## Derefencing a Pointer

- Access the data we're pointing to - dereferencing a pointer
- If `score_prt` is a pointer and has a valid address
- Then you can access the data at the address contained in the `score_prt` using the dereferencing operator `*`
*Yes... same operator as declaring a pointer*

```c++
int score {100};
// declaring pointer
int *score_ptr {&score};  

// dereferencing pointer
cout << *score_ptr << endl;         // Output: 100

*score_ptr = 200;
cout << *score_ptr << endl;         // Output: 200
cout << score << endl;              // Output: 200
```

- Access the data we're pointing to 

```c++
double high_temp {100.7};
double low_temp {37.4};
double *temp_ptr {&high_temp};

cout << *temp_ptr << endl;          // Output: 100.7

temp_ptr = &low_temp;

cout << *temp_ptr << endl;          // Output: 37.4
```

```c++
string name {"Frank"};
string *string_ptr {&name};

cout << *string_ptr << endl;        // Output: Frank

name = "James";
cout << *string_ptr << endl;        // Output: James
```

Go to Dereference folder

## Dynamic Memory Allocation

**Allocating storage from the heap at runtime**

- We often don't know how much storage we need until we need it
- We can allocate storage for a variable at run time
- Recall C++ arrays
    - We had to explicityly provide the size and it was fixed
    - But vectors grow and shrink dynamically
- We can use pointers to access newly allocated heap storage

**using `new` to allocate stroage**

```c++
int *int_ptr {nullptr};
int_ptr = new int;          // allocate an integer on the heap

cout << int_ptr << endl;    // address

// Dereference pointer
cout << *int_ptr << endl;   // garbage
*int_ptr = 100;             // dereference and put value 100 in

cout << *int_ptr << endl;   // Output: 100
```

**using `delete` to deallocate storage**

```c++
int *int_ptr {nullptr};
int_ptr = new int;          // allocate an integer on the heap
...
delete int_ptr;             // frees the allocated storage
```

**using `new []` to allocate storage for an array**

```c++
int *array_ptr {nullptr};
int size {};

cout << "How big do you wan the array? ";
cin >> size;

array_ptr = new int[size];      // allocate array on the heap

// We can access the array here
```

**using `delete []` to deallocate storage for an array**

```c++
int *array_ptr {nullptr};
int size {};

cout << "How big do you wan the array? ";
cin >> size;

array_ptr = new int[size];      // allocate array on the heap
...
delete [] array_ptr;            // free allocated storage, [] must be empty
```

Go to DynamicMemory folder

## The relationship between Arrays and Pointers

- The value of an array name is the address of the first element in the array
- The value of a pointer variable is an address
- If the pointer points to the same data type as the array element then the pointer and array name can be used interchangably (almost)

```c++
// ========== Arrays ========== 
int scores[] {100, 95, 89};

cout << scores << endl;         // Output: addreess
cout << *scores << endl;        // Output: 100
// Yes, one can dereference array

// ========== Pointer ========== 
int *score_ptr {scores};

cout << score_ptr << endl;      // Output: same addreess as scores
cout << *scores_ptr << endl;    // Output: 100
```

```c++
int scores[] {100, 95, 89};
int *score_ptr {scores};

cout << score_ptr[0] << endl;   // Output: 100
cout << score_ptr[1] << endl;   // Output: 95
cout << score_ptr[2] << endl;   // Output: 89
```

### Using pointes in expressions

```c++
int scores[] {100, 95, 89};
int *score_ptr {scores};

cout << score_ptr << endl;          // Output: address (i.e. 0x61ff10)
// adding 1 size of address therefore Output isn't 0x61ff11 but 0x61ff14
cout << (score_ptr + 1) << endl;    // Output: 0x61ff14
cout << (score_ptr + 2) << endl;    // Output: 0x61ff18
```

```c++
int scores[] {100, 95, 89};
int *score_ptr {scores};

cout << *score_ptr << endl;          // Output: 100
cout << *(score_ptr + 1) << endl;    // Output: 95
cout << *(score_ptr + 2) << endl;    // Output: 89
```

### Subscript and Offset notation equivalence

```c++
int array_name[] {1,2,3,4,5};
int *pointer_name {array_name};
```

| Subscript Notation | Offset Notation |
| --- | --- |
| `array_name [index]` | `*(array_name + index) |
| `pointer_name [index]` | `*(pointer_name + index) |

Go to ArraysAndPointers folder

## Pointer Arithmetic

- Pointers can be ussed in 
    - Assignment expression
    - Arithmetic expression
    - Comparison expression
- C++ allows pointer arithmetic
- Pointer arithmetic only makes sense with raw arrays

- Increments a pointer to point to the next array element (`++`)
    - i.e. `int_ptr++;`
- Decrements a pointer to point to the previous array element (`--`)
    - i.e. `int_ptr--;`
- Increment pointer by `n * sizeof(type)` (`+`)
    - `int_ptr += n;` or `int_ptr = int_ptr + n;`
- Decrement pointer by `n * sizeof(type)` (`-`)
    - `int_ptr -= n;` or `int_ptr = int_ptr - n;`

### Subtracting two pointers

- Determine the number of elements between the pointers
- Both pointers must point to the same data type, otherwise we get compiler error
    - `int n = int_ptr2 - int_ptr1;`

### Comparing two pointers 

- Determine if two pointers point to the same location
    - does NOT compare the data where they point!
    - you must compare the referenced pointers

```c++
string s1 {"Frank"};
string s2 {"Frank"};

string *p1 {&s1};
string *p2 {&s2};
string *p3 {&s1};

// data is considered with pointer comparison but only locations
cout << (p1 == p2) << endl;     // Output: False
cout << (p1 == p3) << endl;     // Output: True

// compare data between two pointers
cout << (*p1 == *p2) << endl;     // Output: True
cout << (*p1 == *p3) << endl;     // Output: True
```

Go to PointerArithmetic folder

## Const and Pointers

`const` and Pointers

- There are several ways to qualify pointers using `const`
    - Pointers to constants
    - Constant pointers
    - Constant pointers to constants


### Pointers to constants

- The data pointed to by the pointers is constant and **cannot** be changed.
- The pointer itself can change and point somewhere else

```c++
int high_score {100};
int low_score {65};
const int *score_ptr {&high_score};

*score_ptr = 86;        // Error
score_ptr = &low_score; // OK
```

### Constant pointers

- The data pointed to by the pointers can be changed
- The pointer itself cannot change and point somewhere else

```c++
int high_score {100};
int low_score {65};
int *const score_ptr {&high_score};

*score_ptr = 86;        // OK
score_ptr = &low_score; // Error
```

### Constant pointers to constants

- The data pointd to by the pointer is constant and cannot be changed.
- The pointer itself cannot change and point somewhere else

```c++
int high_score {100};
int low_score {65};
const int *const score_ptr {&high_score};

*score_ptr = 86;        // Error
score_ptr = &low_score; // Error
```

## Passing Pointers to Functions

- Pass-by-reference with pointer parameters
- We can use pointers and the reference operator to achieve pass-by-reference
- The function parameter is a pointer
- The acutal parameter can be a pointer or address of a variable

### Defining the function

```c++
// Function prototype
void double_data(int *int_ptr);

// Function definition
void double_data(int *int_ptr) {
    *int_ptr *= 2;
    // *int_ptr = *int_ptr * 2;
}
```

### Calling the function

```c++
int main() {
    int value {10};
    cout << value << endl;          // Output: 10

    double_data( &value);
    cout << value << endl;          // Output: 20
}
```

Go to PassingPinters folders 

## Returning a Pointer from a Function

- Function can also return pointers: `type *function();`
- Should return pointers to
    - Memory dynamically allocated in the function
    - To data that was passed in
- Never return a pointer to a local function variable!

### Returning a Parameter

```c++
int *largest_int(int *int_ptr1, int *int_ptr2) {
    if (*int_ptr1 > *int_ptr2)
        return int_ptr1;
    else
        return int_ptr2;
}
```

```c++
int main() {
    int a{100};
    int b{200};

    int *largest_ptr{nullptr};
    largest_ptr = largest_int( &a, &b);
    cout << *largest_ptr << endl;           // Output: 200
    return 0;
}
```

### Returning dynamically allocated memory

```c++
int *create_array(size_t size, int init_value = 0) {
    int *new_storage {nullptr};

    new_storage = new int[size];
    for (size_t i{0}; i < size; ++i)
        *(new_storage + i) = init_value;
    return new_storage;
}
```

```c++
int main() {
    int *my_array;      // will be allocated by the function

    my_array = create_array(100,20);    // create the array

    // use it

    delete [] my_array;         // be sure to free the storage
    return 0;
}
```

### Never return a pointer to a local variable!!!

```c++
int *dont_do_this() {
    int size {};
    ...
    return &size;
}

int *or_this() {
    int size {};
    int *int_ptr {&size};
    ...
    return int_ptr;
}
```

Go to ReturnPointer folder

## Potential Pointer Pitfalls

- Uninitialized pointers
- Dangling Pointers
- Not checking if new failed to allocate memory
- Leaking memory

### Uninitialized pointers

```c++
int *int_ptr;       // pointing anywhere - garbage
...
*int_ptr = 100;     // Hopefully a crash
```

### Dangling Pointers

- Pointer that is pointing to released memory
    - For example, 2 pointers point to the same data
    - 1 pointer releases the data with delete
    - The other pointer access the release data
- Pointer that points to memory that is invalid
    - We saw this when we returned a pointer to a function local variable

### Not checking if new failed to allocate memory

- If `new` fails an exeception is thrown
- We can use exception handling to catch exceptions
- Dereferencing a null pointer will cause your program to crash

### Leaking memory

- Forgetting to release allocated memory with delete
- If you lose your pointer to the storage allocated on the heap you have no way to get to that storage again
- The memory is orphaned or leaked
- One of the most common pointer problems

## What is a Reference?

- An alias for a variable
- Must be initialized to a variable when declared
- Cannot be null
- Once initialized cannot be made to refer to a different variable
- Very useful as function parameters
- Might be helpful to think of a reference as a constant pointer that is automatically dereferenced

### Using references in range-based for loop

```c++
vector<string> stooges {"Larry", "Moe", "Curly"};

for (auto str : stooges)
    str = "Funny";              // changes the copy

for (auto str : stooges)
    cout << str << endl;        // Output: Larry, Moe, Curly
```

```c++
vector<string> stooges {"Larry", "Moe", "Curly"};

for (auto &str : stooges)
    str = "Funny";              // changes the actual

for (auto str : stooges)
    cout << str << endl;        // Output: Funny, Funny, Funny
```

```c++
vector<string> stooges {"Larry", "Moe", "Curly"};

for (auto const &str : stooges)
    str = "Funny";              // compiler error
```

```c++
vector<string> stooges {"Larry", "Moe", "Curly"};

for (auto const &str : stooges)
    cout << str << endl;        // Output: Larry, Moe, Curly
```

Go to References folder

Refer to Section 11 for more details regarding passing references to functions

## L-values and R-values

### L-values

- values that have names and are addressable
- modifiable if they are not constants

```c++
// ========== L-values ==========
int x {100};        // x is an L-value
x = 1000;
x = 1000 + 20;

string name;        // name is an L-value
name = "Frank";

// ========== NOT L-values ==========
// in fact they are R-values
100 = x;            // 100 is NOT an L-value
(1000 + 20) = x;    // (1000 + 20) is NOT an L-value

string name;
name = "Frank";
"Frank" = name;     // "Frank" is NOT an L-value
```

### R-values

- values that's not an L-value
    - on the right-hand side of an assignment expression
    - a literal
    - a temporary which is intended to be non-modifiable
- values that are non-addressable and non-assignable
- R-values can be assigned to L-values explicitly

```c++
int x {100};                    // 100 is an R-value
int y = x + 200;                // (x + 200) is an R-value

string name;
name = "Frank";                 // "Frank" is an R-value

int max_num = max(20,30);      // max(20,30) is an R-value
```

### L-values references

```c++
int x {100};

int &ref1 = x;          // ref1 is reference to L-value
ref1 = 1000;

int &ref2 = 100;        // Error 100 is an R-value


// Similarly with pass-by-refernce
int square (int &n) {
    return n*n;
}

int num {10};
square(num);            // OK
square(5);              // Error - can't reference R-value 5
```

Go to Debugger folder

## Section Recap

When to use pointers vs. references parameters

- Pass-by-value
    - when the function does NOT modify the actual parameter, and 
    - the parameter is small and efficient to copy like simple types (`int`, `char`, `double`, etc.)

- Pass-by-reference using a pointer
    - when the function does modify the actual parameter, and
    - the parameter is expensive to copy, and
    - it is OK to the pointer is allowed a `nullptr` value

- Pass-by-reference using a pointer to `const`
    - when the function does NOT modify the actual parameter, and
    - the parameter is expensive to copy, and
    - it is OK to the pointer is allowed a `nullptr` value

- Pass-by-reference using a `const` pointer to `const`
    - when the function does modify the actual parameter, and
    - the parameter is expensive to copy, and
    - it is OK to the pointer is allowed a `nullptr` value, and
    - you don't want to modify the pointer itself

- Pass-by-reference using a reference
    - when the function does modify the actual parameter, and
    - the parameter is expensive to copy, and
    - the parameter will never be `nullptr` value

- Pass-by-reference using a `const` reference
    - when the function does NOT modify the actual parameter, and
    - the parameter is expensive to copy, and
    - the parameter will never be `nullptr` value

    