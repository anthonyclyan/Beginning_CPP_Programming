# Coding Exercise 28: Creating and Accessing Objects

We have already declared a C++ class named `Dog` that is located in `Dog.h` file (we'll learn about header files later in this section)

In the `test_dog` function create a `dog` object named `spot` and, using the `.` operator, set the `name` attribute to the string `"Spot"` and the `age` attribute to `5`.

```c++
#include "Dog.h"

Dog test_dog() {
//---- WRITE YOUR CODE BELOW THIS LINE----

Dog spot;

spot.name = "Spot";
spot.age = 5;

//---- WRITE YOUR CODE ABOVE THIS LINE----
//---- DO NOT CHANGE THE CODE BELOW----
    return spot;
}
```

# Coding Exercise 29: Adding public methods that access private class attributes

Given the following `Dog` class in `Dog.h` add the following public getter and setter methods that get and set each class attribute as follow:

`get_name` return the name attribute of the dog
`set_name` sets the name attribute of the dog to the string that is passed into the method
`get_age` returns the age attribute of the dog
`set_age` sets the age attribute of the dog to the int that is passed into the method

`Dog.h` file:

```c++
#ifndef __DOG_H__
#define __DOG_H__
#include <string>
using namespace std;

class Dog {
private:
    string name;
    int age;
public:

//---- WRITE YOUR CLASS FUNCTIONS BELOW THIS LINE----
    string get_name() {
        return name;
    }

    void set_name(string n) {
        name = n;
    }

    int get_age() {
        return age;
    }

    void set_age(int a) {
        age = a;
    }

//---- WRITE YOUR CLASS FUNCTIONS ABOVE THIS LINE----
};
#endif 
```

# Coding Exercise 30: Adding more public methods to an existing class

Given an existing `Dog` class in `Dog.h`, add the following public method to the class:
`get_human_years()` return the dog's age ultiplied by 7
`speak()` returns the std::string "Woof"

`Dog.h` file:

```c++
#ifndef __DOG_H__
#define __DOG_H__
#include <string>
using namespace std;

class Dog {
private:
    string name;
    int age;
public:

    string get_name() {return name; }
    void set_name(string n) {name = n; }
    int get_age() {return age; }
    void set_age(int a) { age = a;}
    //---- WRITE YOUR CLASS FUNCTIONS BELOW THIS LINE----
    
    int get_human_years() {
        return age*7;
    }

    string speak() {
        // return string("Woof");       // works too
        string woof = "Woof";
        return (woof);
    }

    //---- WRITE YOUR CLASS FUNCTIONS ABOVE THIS LINE----
};
#endif 
```

# Coding Exercise 31: Add a Default Constructor to an Existing Class

Given the `Dog` class in `Dog.h`, add a default no-args constructor that initializes the dog's name to "None" and hte dog's age to zero.

`Dog.h` file:

```c++
#ifndef __DOG_H__
#define __DOG_H__
#include <string>
using namespace std;

class Dog {
private:
    string name;
    int age;
public:
//---- WRITE YOUR NO-ARGS CONSTRUCTOR BELOW THIS LINE----

    Dog() {
        name = "None";
        age = 0;
    }

//---- WRITE YOUR NO_ARGS CONSTRUCTOR ABOVE THIS LINE----
//---- DO NOT MODIFY THE CODE BELOW THIS LINE


    string get_name() {return name; }
    void set_name(string n) {name = n; }
    int get_age() {return age; }
    void set_age(int a) { age = a;}
    int get_dog_years() { return age * 7; }
    string speak() { return "Woof";}
};

#endif 
```

# Coding Exercise 32: Add an Overloaded Constructor to an Existing Class

Given the `Dog` class in `Dog.h`, add an overloaded constructor that expect a `std::string` and `int` as parameters

The constructor should allow us to create `Dog` objects as follows

```c++
Dog fido {"Fido", 4};
Dog spot {"Spot", 5};
```

`Dog.h` file:

```c++
#ifndef __DOG_H__
#define __DOG_H__
#include <string>
using namespace std;

class Dog {
private:
    string name;
    int age;
public:

//---- WRITE YOUR OVERLOADED CONSTRUCTOR BELOW THIS LINE
    
    Dog(string name_val, int age_val) {
        name = name_val;
        age = age_val;
    }

//---- WRITE YOUR OVERLOADED CONSTRUCTOR ABOVE THIS LINE
    string get_name() {return name; }
    void set_name(string n) {name = n; }
    int get_age() {return age; }
    void set_age(int a) { age = a;}
    int get_dog_years() { return age * 7; }
    string speak() { return "Woof";}
};
#endif
```

# Coding Exercise 33: Add a Copy Constructor to an Existing Class

Given the `Dog` class in `Dog.h`, add an copy constructor.

The copy constructor should copy the attributes from one object to another.
Also, display "Copy Constructor" to `cout` in the body of copy constructor. 
Do NOT follow the outpult statment with `\n` or `endl`.

The copy constructor should allow us to create `Dog` object as follows:

```c++
Dog spot {"Spot", 5};       // Overloaded constructor
Dog twin {spot};            // Copy constructor, twin will be a copy of spot
```

`Dog.h` file

```c++
#ifndef __DOG_H__
#define __DOG_H__
#include <string>
using namespace std;

class Dog {
private:
    string name;
    int age;
public:
    Dog(string name, int age) : name{name}, age{age} { }

//---- WRITE YOUR COPY CONSTRUCTOR BELOW THIS LINE

    Dog(const Dog &source) 
        : Dog {source.name, source.age} {
            cout << "Copy Constructor";
        }

//---- WRITE YOUR COPY CONSTRUCTOR ABOVE THIS LINE
    string get_name() {return name; }
    void set_name(string n) {name = n; }
    int get_age() {return age; }
    void set_age(int a) { age = a;}
    int get_dog_years() { return age * 7; }
    string speak() { return "Woof";}
};
#endif
```