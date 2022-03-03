# Pointers and References

## Section Overview

- What is pointer?
- Declaring pointers
-Storing addresses in pointers
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
double* double_ptr;
char *char_ptr;
string *string_ptr;

// all contains garbage data
```

Initializing pointer variables to 'point nowhere'
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
cout << "sizeof of num is: " << sizeof num << endl;     // 4 : how much storage is used 
cout << "Address of num is: " << &num <<endl;           // 0x61ff1c
```

`sizeof` a pointer variable

```c++
int *p1 {nullptr};
double *p2 {nullptr};
unsigned
```

- Don't confuse the size of a pointer and the size of what it points to 
- All pointers in a program have the same size
- They may be pointing to very large or very small types

### Typed pointers

- The compiler will make sure that the address stored in a pointer variable is of the correct type

```c++
int score {10};
double high_temp {100.7};


```

## Storing an Address in Pointer Variable

`&` the address operator

- Pointer are variables so they can change
- Pointer can be null
- Pointer can be uniinitialized (not recommended)

```c++
double high_temp {100.7};
double low_temp {37.2};

double *temp_ptr;

temp_ptr = &high_temp;      // points to high_temp
temp_ptr = &low_temp;       // points to low_temp

temp_ptr = nullptr;
```

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

cout << *int_ptr << endl;   // garbage

*int_ptr = 100;

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

## The relationship between Arrays and Pointers

- The value of an array name is the address of the first element in the array
- The value of a pointer variable is an address
- If the pointer points to the same data type as the array element then the pointer and array name can be used interchangably (almost)

```c++
// ========== Arrays ========== 
int scores[] {100, 95, 89};

cout << scores << endl;         // Output: addreess
cout << *scores << endl;        // Output: 100

// ========== Pointer ========== 
int *score_ptr {scores};

cout << score_ptr << endl;      // Output: same addreess
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
- Both pointers must point to the same data type
    - `int n = int_ptr2 - int_ptr1;`

### Comparing two pointers 

- Determine if two pointers point to the same location
    - does NOT compare the data where they point!

```c++
string s1 {"Frank"};
string s2 {"Frank"};

string *p1 {&s1};
string *p2 {&s2};
string *p3 {&s1};

cout << (p1 == p2) << endl;     // Output: False
cout << (p1 == p3) << endl;     // Output: True
```
 
## Passing pointers to a function

`const` and Pointers

- There are several ways to qualify pointers using `const`
    - Pointers to constants
    - Constant pointers
    - Constant pointers to constants

### Pointers to constants

- The data pointed to by the pointers is constant and cannot be changed.
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
    
}
```