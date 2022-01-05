# Characters and Strings

## Overview

- Character functions
- C-style Strings
- Working with C-style Strings
- C++ Strings
- Working with C++ Strings

## Character Functions

```c++
#include <cctype>

function_name (char)
```

- Functions for testing characters
- Functions for converting character case

### Testing characters

| `isalpha(c)` | True if c is a letter |
| `isalnum(c)` | True if c is a letter of digit |
| `isdigit(c)` | True if c is a digit |
| `islower(c)` | True if c is a lowercase letter |
| `isprint(c)` | True if c is a printable character |
| `ispunct(c)` | True if c is a punctuation character |
| `isupper(c)` | True if c is an uppercase letter |
| `isspace(c)` | True if c is whitespace |

### Converting characters

| `tolower(c)` | return lowercase of c |
| `toupper(c)` | return uppercase of c |

## C-Style Strings

- Sequence of characters
    - Contiguous in memory
    - Implemented as an array of characters
    - Fixed in size
    - Terminated by a null character (null)
        - null - character with a value of zero
    - Referred to as zero or null terminated strings

- String literal
    - Sequence of characters in double quote
        - e.g. "Anthony"
    - Constant
    - Terminated with null character

Example 
`"C++ is fun"` is stored:
| C | + | + | | | i | s| | f | u | n | \0 |
- Needed null character in the end
- size of 11 in memory instead of 10

### Declaring variables

```c++
char my_name [] {"Frank"};

my_name[5] = 'y';   // Problem since not dynamic size
```

```c++
char my_name [8];
| ? | ? | ? | ? | ? | | ? | ? | ? | 

my_name = "Frank";          // Error

strcpy(my_name, "Frank");   // OK
```

### Functions that work with C-style Strings

- Copying
- Concatenation
- Comparison
- Searching
- and others

All functions rely on one factor: that the sequence of characters that they are working on are terminated by the null character.

Example

```c++
char str[80];

strcpy(str, "Hello ");      // copy

strcat(str, "there");       // concatenate

cout << strlen(str);        // length - Output: 11

strcmp(str, "Another");     // compare - Ouput: 0
```

### General purpose functions

- C standard library: `#include <cstdlibb>`
- Includes functions to convert C-style Strings to 
    - integer
    - float
    - long
    - etc.

## C++ Strings

- `std::string` is a Class in the Standard Template Library
    - `#include <string>`
    - std namespace
    - contiguous in memory
    - dynamic size
    - work with input and output streams
    - lots of useful member functions
    - our familiar operators can be used (`+`, `=`, `<`, `<=`, `>`, `>=`, `+=`, `==`, `!=`, `[]`, ...)
    - can be easily converted to C-style Strings if needed
    - safer

### Declaring and initializing

```c++
#include <string>
using namespace std;

string s1;                  // empty
// automatically empty - no need to worry about garbage data and initialization
string s2 {"Frank"};        // Frank
string s3 {s2};             // Frank: different memories as s2
string s4 {"Frank", 3};     // Fra
string s5 {s3, 0, 2};       // Fr: string s3 and starting at index 0 and copy length of 2
string s6 (3, 'X');         // XXX
```

### Assignment

```c++
#include <string>
using namespace std;

string s1;
s1 = "C++ Rocks!";

string s2 {"Hello"};
s2 = s1;
```

### Concatenation

```c++
#include <string>
using namespace std;

string part1 {"C++"};
string part2 {"is a powerful"};

string sentence;

sentence = part1 + " " + part2 + " language";
// Output: C++ is a powerful language

// Below is ILLEGAL!!!
sentence = "C++" + " is powerful";
```

### Accessing charaacters [] and at() method

```c++
#include <string>
using namespace std;

string s1;
string s2 {"Frank"};

cout << s2[0] << endl;      // Output: F
cout << s2.at(0) << endl;   // Output: F

s2[0] = 'f';        // frank
s2.at(0) = 'p'      // prank

// ========= For loop to access each character ========= 
string s1 {"Frank"};

for (char c : s1) {
    cout << c << endl;
}

// Output:
// F
// r
// a
// n
// k
// 

// ========= For loop to access each character as integer ========= 
string s1 {"Frank"};

for (int c : s1) {
    cout << c << endl;
}

// Output: ascii code of the characters
// 70   // F
// 114  // r
// 97   // a
// 110  // n
// 107  // k
// 0    // null character
```

### Comparing

`==`, `!=`, `>`, `>=`, `<`, `<=`

The objects are compared character by character lexically.

Can compare:
- two `std::string` objects
- `std::string`object  and C-style string literal
- `std::string` object and C-style string variable

Example

```c++
string s1{"Apple"};
string s2{"Banana"};
string s3{"Kiwi"};
string s4{"apple"};
string s5{s1};      // Apple

s1 == s5;       // True
s1 == s2;       // False
s1 != s2;       // True
s1 < s2;        // True
s2 > s1;        // True
s4 < s5;        // False
s1 == "Apple";  // True
```

### Substrings - `substr`

Extracts a substring from a `std::string`

`object.substr(start_index, length)`

```c++
string s1 {"This is a test"};

cout << s1.substr(0, 4);    // Output: This
cout << s1.substr(5, 2);    // Output: is
cout << s1.substr(10, 4);   // Output: test
```

### Searching - `find`

Returns the index of a substring in a `std::string`

`obect.find(search_string)`

```c++
string s1 {"This is a test"};

cout << s1.find("This");    // Output: 0
cout << s1.find("is");      // Output: 2
cout << s1.find("test");    // Output: 10
cout << s1.find("e");       // Output: 11
cout << s1.find("is", 4);   // Output: 5
// start find at specified index, in this case, index 4
cout << s1.find("XX");      // Output: string::npos
// no position available
```

### Removing characters - `erase()` and `cleaer()`

Removes a substring of characters from a `std::string`

`object.erase(start_index, length)`

```c++
string s1 {"This is a test"};

cout << s1.erase(0, 5);     // Output: is a test
cout << s1.erase(5, 4);     // Output: is a
s1.clear();                 // empties string s1
```

### Other useful methods

```c++
string s1 {"Frank"};
cout << s1.length() << endl;    // Output: 5

s1 += " James";
cout << s1 << endl;             // Output: Frank James
```

many more...

### Input with C++ Strings

Inut `>>` and `getline()`

Reading `std::string` from `cin`

```c++
string s1;

cin >> s1;
// Input: "Hello there"

cout << s1 << endl;
// Output: "Hello"

// Input only accepts    up to the first <SPACE>

// Read entire line until \n
getline(cin, s1);

cout << s1 << endl;
// Output: "Hello there"

getline(cin, s1, 'x');
// Input: this isx

cout << s1 << endl;
// Output: "this is"
```