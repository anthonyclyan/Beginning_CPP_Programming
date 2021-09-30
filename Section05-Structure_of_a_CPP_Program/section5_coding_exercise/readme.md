# Coding Exercise 1: Using cout and the insertion operator to say Hi to Frank
Write a single output statement using `cout` that displays "**Hi Frank!**" to the console. Please don't use `\n` or `endl`, just display the bold text.

## Solution

```c++
#include <iostream>

using namespace std;

void say_hi() {
    //--- WRITE YOUR CODE BELOW THIS LINE----  
    cout << "Hi Frank!";
    //--- WRITE YOUR CODE ABOVE THIS LINE----
}
```

# Coding Exercise 2: Using cout and the insertion operator

Write a statement using `cout` and the insertion operator `<<` to display how many dogs Sally has.
The variable `x` represents the number of dogs.
`x` has already been declared and initialized for you.
The output should read "**Sally has 3 dogs.**".

## Solution

```c++
#include <iostream>
using namespace std;

void sallys_dogs() {
    
    int x {3};
    
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE---- 
    cout << "Sally has " << x << " dogs.";
    
    
    //---- WRITE YOUR CODE ABOVE THIS LINE----
}
```

# Coding Exercise 3: Using cin and the extraction operator

Write code using `cin` and the extraction operator `>>` to allow a user to enter their date of birth.
The variable `m` represents the month, `d` represents the day, and `y` represents the year. Assume that the user will enter their date of birth in the order of month, day, year, with each value being seperated by a white space.

## Solution

```c++
#include <iostream>
using namespace std;

void date_of_birth() {
    int m {};
    int d {};
    int y {};
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //---- WRITE YOUR CODE BELOW THIS LINE----
    cin >> m >> d >> y;
    
    
    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- Do NOT MODIFY THE CODE BELOW THIS LINE----
    cout << m << " " << d << " " << y;
}
```