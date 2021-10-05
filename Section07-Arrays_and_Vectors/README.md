# Arrays and Vectors

## What is an Array?

- Compound data type or data structure
    - Collection of elements
- All elements are of the same type
- Each element can be accessed directly

### Characterisitcs

- Fixed size
- Elements are all the same type
- Stored contiguously in memeory
- Individual elements can be accessed by their position or index
    - First element is at `index 0`
    - Last element is at `index size-1`
- No checking to see if you are out of bounds
- Always initialize arrays
- Very efficient
- Iteration (looping) is often used to process

## Declaring and Initalizing Arrays

`Element_Type array_name [constant number of elements] {init list};`

```c++
int test_scores [5] {100, 95, 99, 87, 88};    // 5 integers

int high_score_per_level [10] {3, 5};   // init to 3, 5 and remaining to 0

const int days_in_year {365};
double hight_temperatures [days_in_year] {0};   // init all to zero

int another_array [] {1, 2, 3, 4, 5};   // size automatically calculated
```

## Accessing and Modifying Array Elements

### Accessing array elements

`array_name [element_index]`

```c++
int test_scores [5] {100, 95, 99, 87, 88};

cout << "First score at index 0:" << test_scores[0] << endl;
cout << "Second score at index 1:" << test_scores[1] << endl;
cout << "Third score at index 2:" << test_scores[2] << endl;
cout << "Fourth score at index 3:" << test_scores[3] << endl;
cout << "Fifth score at index 4:" << test_scores[4] << endl;

// output
First score at index 0: 100
Second score at index 1: 95
Third score at index 2: 99
Fourth score at index 3: 87
Fifth score at index 4: 88
```

### Changing the contents of array elements

`array_name [element_index]`

```c++
int test_scores [5] {100, 95, 99, 87, 88};

cin >> test_scores [0];
cin >> test_scores [1];
cin >> test_scores [2];
cin >> test_scores [3];
cin >> test_scores [4];

// assignment statment
test_scores[0] = 90;
```

### How does Arrays work?

- The name of the array represent the location of the first element in the array (`index 0`)
- The `[index]` represents the offset from the beginning of the array 
- C++ simply performs a calculation to find the correct element
- Remember - no bounds checking!


## Multidimensional Arrays

### Declaring multi-dimensional arrays

`Element_Type array_name [dim1_size][dim2_size]`

```c++
int movie_rating [3][4];    // 3 rows, 4 columns
```

| 0 | 1 | 2 | 3 |
| --- | --- | --- | --- |
| 0 | 0 | 4 | 3 | 5 |
| 1 | 2 | 3 | 3 | 5 |
| 2 | 1 | 4 | 4 | 5 |

```c++
const int rows {3};
const int cols {4};
int movie_rating [rows][cols];
```

### Accessing array elements in multi-dimensional arrays

```c++
cin >> movie_rating [1][2];
cout << movie_rating [1][2];

// output
5
```

### Initializing multi-dimensionaly arrays

```c++
int movie_rating [3][4] 
{
    {0, 4, 3, 5},
    {2, 3, 3, 5},
    {1, 4, 4, 5}
};
```

## What is a vector

- Container in the C++ Standard Template Library
- An array that can grow and shrink in size at execution time
- Provides dsimilar semantics and syntax as arrays
- Very efficient
- Can provide bounds checking
- Can use lots of cool functions like sort, reverse, find, and more

### Characteristics

- Dynamic size
- Elements are all the same type
- Stored contiguously in memory
- Individual elements can be accessed by their position or index
- First element is at `index 0`
- Last element is at `index size-1`
- `[]` no checking to see if you are out of bounds
- Provided many useful function taht do bounds check
- Elements initialized to zero
- Very efficient
- Iteration (looping) is often used to process

## Declaring and Initializing Vectors

- Suppose we want to store test scores for my school and I have no way of knowing how many students will register next year...
- Options:
    - Pick a size that you are not likely to exceed and use static arrays
    - Use a dynamic array such as vector

### Declaring

```c++
#include <vector>
using namspace std;

vector <char> vowels (5);
vector <int> test_scores (10);  // automatically set to zero

vector <char> vowels {'a', 'e', 'i', 'o', 'u'}; // single quotes
vector <int> test_scores {100, 98, 89, 85, 93};
vector <double> high_temperature (365, 80.0);   // 365 initializes size of vector, 80.0 initializes all the 365 doubles to.
```

## Accessing and Modigying Vector Elements

