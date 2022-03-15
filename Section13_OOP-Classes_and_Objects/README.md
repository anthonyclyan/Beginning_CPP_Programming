# OOP - Classes and Objects

## Section Overview 

### Object-Oriented Programming - Classes and Objects

- What is Object-Oriented Programming?
- What are Classes and Objects?
- Declaring Classes and creating Objects
- Dot and pointer operators
- `public` and `private` access modifiers
- Methods, Constructors and Destructors
    - `class` methods
    - default and overloaded constructors
    - copy and move constructors
    - shallow vs. deep copying
    - `this` pointer
- `static` class members
- `struct` vs. `class`
- `friend` of a class

## What is Object-Oriented Programming?

### Procedural Programming

- Focus is on processes or actions that a program takes
- Programs are typically a collection of functions
- Data is declared separately
- Data is passed as arguments into functions
- Fairly easy to learn

### Procedural Programming Limitations

- Functions need to know the structure of the data
    - if the structure of the data changes many functions must be changed
- As programs get larger they become more:
    - difficult to understand
    - difficult to maintain
    - difficult to extend
    - difficult to debug
    - difficult to reuse code
    - fragile and easier to break

### What is OOP

- Classes and Objects
    - focus is on classes that model real-world domain entities
    - allows developers to think at a higher level of abstraction
    - used successfully in very large programs
- Encapsulation
    - objects contain data AND operations that work on that data
    - Abstract Data Type (ADT)
- Information-hiding
    - implementation-specific logic can be hidden
    - users of the class code to the interface since they don't need to know the implementation
    - more abstraction
    - easier to test, debug, maintain and extend
- Reusability
    - easier to reuse classes in other applications
    - faster development
    - higher quality
- Inheritance
    - can create new classes in term of existing classes
    - reusability
    - polymorphic classes
- Polymorphism and more...

### OOP Limitations

- Not a panacea
    - OOP won't make bad code better, likely make it worse
    - not suitable for all types of problems
    - not everything decomposes to a class
- Learning curve
    - usually a steeper learning curve, especially for C++
    - many objet-oriented languages, many variations of object-oriented concepts
- Design
    - usually ore up-front design is necessary to create models and hiearchies
- Programs can be:
    - larger in size
    - slower
    - more complex

## What are Classes and Creating Objects

### Classes

- blueprint from which objects are created
- a user-defined data-type
- has attributes (data)
- has methods (functions)
- can hide data and methods
- provides a public interface

### Example Classes

- Account
- Employee
- Image
- `std::vector`
- `std::string`

### Objects

- created from a class
- represents a specific instance of a class
- can creat many, many objects
- each has its own identity
- each can use the defined class methods

### Example Account objects

- Frank's account is an instance of an Account
- Jim's account is an instance of an Account
- Each has its own balance, can make deposits, withdraw, etc.

Example

```c++
// Imagine int is a class and high_score and low_score are objects
int high_score;
int low_score;

// Account is a user-defined type and frank_account and jim_account are instances 
Account frank_account;
Account jim_account;

std::vector<int> scores;
std::sting name;
```

## Declaring a Class and creating Objects

```c++
class Class_Name    // best practice to use cap letter
{
    // declaration(s);
}
```

### Example - creating a class and objects

- Player
    - game application

```c++
class Player 
{
    // attributes
    std::sting name;
    int health;
    int xp;

    // methods
    void talk (std::string text_to_say);
    bool is_dead();
};
```

```c++
// objects or instances of the Player class
Player frank;
Player hero;

// enemy is a pointer to a Player object that is stored dynamically in the heap
Player *enemy = new Player();
delete enemy;
```

- Account

```c++
class Account 
{
    // attributes
    std::string name;
    double balace;

    // methods
    bool withdraw (double amount);
    bool deposit (double amount);
};
```

```c++
Account frank_account;
Account jim_account;

Account *mary_account = new Account();
delete mary_account;
```

Once you have objects you can use them like any other variables

```c++
Account frank_account;
Account jim_account;

Account accounts[] {frank_account, jim_account};

std::vector<Account> accounts1 {frank_account};
accounts1.push_back(jim_account);
```

Go to DeclareClassAndObjects folder

## Accessing Class Members

- We can access:
    - class attributes
    - class methods
- Some class members will not be accessible (more on that later)
- We need an object to access instance variables

### If we have an object

- Dot operator (`.`)

```c++
Account frank_account;

frank_account.balance;
frank_account.deposit(1000.00);
```

### If we have a pointer to an object

- Member of pointer operator
- Dereference the pointer then use the dot operator

```c++
Account *frank_account = new Account();

(*frank_account).balance;
(*frank_account).deposit(1000.00);
```

- or use the member of pointer operator (arrow operator `->`)

```c++
Account *frank_account = new Account();

frank_account->balance;
frank_account->deposit(1000.00);
```

Go to AccessingClassMembers folder

Go to Coding Exercise 28: Creating and Accessing Objects

## Public and Private

### Class Member Access Modifiers

`public`, `private`, and `protected`

- `public`
    - accessible everywhere

```c++
class Class_Name
{
    public:
        // declaration(s);
};
```

- `private`
    - accessible only by members or friends of the class

```c++
class Class_Name
{
    private:
        // declaration(s);
};
```

- `protected`
    - used with inheritance - we'll talk about it in the next section

```c++
class Class_Name
{
    protected:
        // declaration(s);
};
```

### Declaring a Class

Player

```c++
class Player
{
    private:
        std::string name;
        int health;
        int xp;
    public:
        void talk (std::string text_to_say);
        bool is_dead();
};
```

### Creating objects

```c++
Player frank;
frank.name = "Frank";           // Compiler error
frank.health = 1000;            // Compiler error
frank.talk("Ready to battle");  // OK

Player *enemy = new Player();
enemy->xp = 100;                        // Compiler error
enemy->talk("I will hunt you down");    // OK

delete enemy;
```

### Declaring a Class

Account

```c++
class Account
{
    private:
        std::string name;
        double balance;
    public:
        bool withdraw(double amount);
        bool deposit(double amount);
}
```

```c++
Account frank_account;
frank_account.balance = 10000000.00;        // Compiler error
frank_account.deposit(1000000.0);           // OK
frank_account.name = "Frank's Account";     // Compiler error

Account *mary_account = new Account ();

mary_account->balance = 10000.0;            // Compiler error
mary_account->withdraw(1000.0);             // OK

delete mary_account;
```

Go to AccessModifiers folder

## Implementing Member Methods

- Very similar to how we implemented functions
- Member methods have access to member attributes
    - so you don't need to pass them as arguments!
- Can be implemented inside the class declaration
    - implicitly inline
- Can be implemted outside the class declaration
    - Need to use `Class_Name::method_name`
- Can separate specification from implementation
    - `.h` file for the class declaration
    - `.cpp` file for the class implementation

### Inside the class declaration

```c++
class Account 
{
    private:
        double balance;
    public:
        void set_balance(double bal) {
            balance = bal;
        }
        double get_balance() {
            return balance;
        }
};
```

### Outside the class declaration

```c++
class Account 
{
    private:
        double balance;
    public:
        void set_balance(double bal);
        double get_balance();
};

void Account::set_balance(double bal) {
    balance = bal;
}
double Account::get_balance() {
    return balance;
}
```

### Separating Specification from Implementation - header

`Account.h`

```c++
class Account
{
    private:
        double balance;
    public:
        void set_balance(double bal);
        double get_balance();
};
```

#### Include Guards

- Prevent header file to be 'included' more than once

```c++
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

    // Account class declaration

#endif
```

So to do the header file properly:

`Account.h`

```c++
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

class Account
{
    private:
        double balance;
    public:
        void set_balance(double bal);
        double get_balance();
};

#endif
```

or

`Account.h` - #pragma once

```c++
#pragma once

class Account
{
    private:
        double balance;
    public:
        void set_balance(double bal);
        double get_balance();
};
```

### Separating Specification from Implementation - source

`Account.cpp`

```c++
#include "Account.h"

void Account::set_balance(double bal) {
    balance = bal;
}
double Account::get_balance() {
    return balance;
}
```

### Separating Specification from Implementation - main

`main.cpp`

```c++
#include <iostream>
#include "Account.h"

int main() {
    Account frank_account;
    frank_account.set_balance(1000.00);
    double bal = frank_account.get_balance();

    std::cout << bal << std::endl;              // Output: 1000
    return 0;
}
```

Go to ImplementingMethods folders

Go to Coding Exercise 29: Adding public methods that access private class attributes

Go to Coding Exercise 30: Adding more public methods to an existing class

## Constructors and Destructors

### Constructors

- Special member method
- Invoked during object creaetion
- Useful for initialization
- Same name as the class
- No return type is specified
- Can be overloaded

#### Player Constructors

```c++
class Player 
{
    private:
        std::sting name;
        int health;
        int xp;
    public:
        // Overloaded Constructors
        Player();
        Player(std::string name);
        Player(std::string name, int health, int xp);
};
```

#### Account Constructors

```c++
class Account 
{
    private:
        std::sting name;
        double balance;
    public:
        // Constructors
        Account();
        Account(std::string name, double balance);
        Account(std::string name);
        Account(double balance);
};
```

### Destructors

- Special member method
- Same name as the class proceeded with a tilde (`~`)
- Invoked automatically when an object is destroyed
- No return type and no parameters
- Only 1 destructor is allowed per class - cannot be overloaded!
- Useful to release memory and other resources

#### Player Destructors

```c++
class Player 
{
    private:
        std::sting name;
        int health;
        int xp;
    public:
        // Overloaded Constructors
        Player();
        Player(std::string name);
        Player(std::string name, int health, int xp);
        // Destructor
        ~Player();
};
```

#### Account Destructors

```c++
class Account 
{
    private:
        std::sting name;
        double balance;
    public:
        // Constructors
        Account();
        Account(std::string name, double balance);
        Account(std::string name);
        Account(double balance);
        // Destructor
        ~Account();
};
```

### Creating objects

```c++
{
    Player slayer;
    Player frank {"Frank", 100, 4};
    Player hero {"Hero"};
    Player villain {"Villain"};
    // Use the objects
} // 4 destructors called

Player *enemy = new Player("Enemy", 1000, 0);
delete enemy;   // destructor called
```

Go to ConstructorAndDestructors folder

## The Default Constructor 

- Does not expect any arguments
    - Also called the no-args constructor
- If you write no constructors at all for a class
    - C++ will generage a Default Constructor that does nothing
- Called when you instaniate a new object with no arguments

```c++
Player frank;
Player *enemy = new Player;
```

### Declaring a Class

#### Account - using default constructor

```c++
class Account 
{
    private:
        std::sting name;
        double balance;
    public:
        bool withdraw(doubl amount);
        bool deposit(doubl amount);
};
```

```c++
Account frank_account;
Account jim_account;

Account *mary_account = new Account;
delete mary_account;
```

#### Account - user-defined no-args constructor

```c++
class Account 
{
    private:
        std::sting name;
        double balance;
    public:
        // best practice to do this
        Account() {
            name = "None";
            balance = 0.0;
        }

        bool withdraw(doubl amount);
        bool deposit(doubl amount);
};
```

#### Account - no default constructor

```c++
class Account 
{
    private:
        std::sting name;
        double balance;
    public:

        Account(std::string name_val, double bal) {
            name = name_val;
            balance = bal;
        }

        bool withdraw(doubl amount);
        bool deposit(doubl amount);
};
```

- but default no-args constructor will no longer be available

```c++
Account frank_account;                      // Error
Account jim_account;                        // Error

Account *mary_account = new Account;        // Error
delete mary_account;

Account bill_account {"Bill", 15000.0};     // OK
```

Go to DefaultConstructor folder

Go to Coding Exercise 31: Add a Default Constructor to an Existing Class

## Overloading Constructors

- Classes can have as many constructors as necessary
- Each must have a unique signature
- Default constructor is no longer compiler-generated once another constructor is declared

### Overloaded Constructors

```c++
class Player
{
    private:
        std::string name;
        int health;
        int xp;
    public:
        //  Overloaded constructors
        Player();
        Player(std::string name_val);
        Player(std::string name_val, int health_val, int xp_val);
};

Player::Player() {
    name = "None";
    health = 0;
    xp = 0;
}

Player::Player(std::string name_val) {
    name = name_val;
    health = 0;
    xp = 0;
}

Player::Player(std::string name_val, int health_val, int xp_val) {
    name = name_val;
    health = health_val;
    xp = xp_val;
}
```

#### Creating objects

```c++
Player empty;                                       // None, 0, 0

Player hero {"Hero"};                               // Hero, 0, 0 
Player villain {"Villain"};                         // Villain, 0, 0

Player frank {"Frank", 100, 4};                     // Frank, 100, 4

Player *enemy = new Player("Enemy", 1000, 0);       // Enemy, 1000, 0
delete enemy;
```

Go to Coding Exercise 32: Add an Overloaded Constructor to an Existing Class

## Constructor Initialization Lists

- So far, all data member values have been set in the consturctor body

- Constructor initialization lists
    - are more efficient
    - initialization list immediately follows the parameter list
    - initializes the data members as the object is created!
    - order of initialization is the order of declaration in the class

```c++
class Player
{
    private:
        std::string name;
        int health;
        int xp;
    public:
        //  Overloaded constructors
        Player();
        Player(std::string name_val);
        Player(std::string name_val, int health_val, int xp_val);
};



// ========== Previous way ========== 
Player::Player() {
    name = "None";      // assignment not initialization
    health = 0;         // assignment not initialization
    xp = 0;             // assignment not initialization
}

// ========== Better way ========== 
Player::Player()
    : name{"None"}, health{0}, xp{0} {

    }



// ========== Previous way ========== 
Player::Player(std::string name_val) {
    name = name_val;
    health = 0;
    xp = 0;
}

// ========== Better way ========== 
Player::Player(std::string name_val) 
    : name{name_val}, health{0}, xp{0} {
    
    }



// ========== Previous way ========== 
Player::Player(std::string name_val, int health_val, int xp_val) {
    name = name_val;
    health = health_val;
    xp = xp_val;
}

// ========== Better way ========== 
Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
    
    }
```

## Proper way for Constructor Initialization Lists

```c++
class Player
{
    private:
        std::string name;
        int health;
        int xp;
    public:
        //  Overloaded constructors
        Player();
        Player(std::string name_val);
        Player(std::string name_val, int health_val, int xp_val);
};


Player::Player()
    : name{"None"}, health{0}, xp{0} {
        // can still add contents
    }

Player::Player(std::string name_val) 
    : name{name_val}, health{0}, xp{0} {
        // can still add contents
    }

Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
        // can still add contents
    }
```

Go to ConstructorInitializationLists folder

## Delegating Constructors

- Often the code for constructors is very similar
- Duplicated code can lead to errors
- C++ allows delegating constructors
    - code for one constructor can call another in the initialization list
    - avoids duplicating code

```c++
class Player
{
    private:
        std::string name;
        int health;
        int xp;
    public:
        //  Overloaded constructors
        Player();
        Player(std::string name_val);
        Player(std::string name_val, int health_val, int xp_val);
};

Player::Player(std::string name_val, int health_val, int xp_val) 
    : name{name_val}, health{health_val}, xp{xp_val} {
        // can still add contents
    }

Player::Player()
    : Player {"None",0, 0} {
        // can still add contents
    }

Player::Player(std::string name_val) 
    : Player {name_val, 0, 0} {
        // can still add contents
    }
```

Go to DelegatingConstructors folder

## Constructor Parameters and Default Values

- Can often simplify our code and reduce the number of overloaded constructors
- Same rules apply as we learned with non-member functions

```c++
class Player
{
    private:
        std::string name;
        int health;
        int xp;
    public:
        // Constructors with default parameter values
        Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
};
```

### Default Constructor Parameters

```c++
Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {

    }

Player empty;                           // None, 0, 0
Player frank {"Frank"};                 // Frank, 0, 0        
Player villain {"Villain", 100, 55};    // Villain, 100, 55
Player hero {"Hero", 100};              // Hero, 100, 0 
// Note what happens if you declare a no-args constructor
```

Go to DefaultConstructorParameters folder

## Copy Constructor

- When objects are copied C++ must create a new object from an existing object
- When is a copy of an object made?
    - passing object by value as a parameter
    - returning an object from a function by value
    - constructing one object based on another of the same class
- C++ must have a way of accomplishing this so it provides a compiler-defined copy constructor if you don't

### Pass object by-value

```c++
Player hero {"Hero", 100, 20};

void display_player(Player p) {
    // p is a COPY of hero in this example
    // use p
    // Destructor for p will be called
}

display_player(hero);
```

### Return object by-value

```c++
Player enemy;

Player create_super_enemy() {
    Player an_enemy {"Super Enemy", 1000, 1000};
    return an_enemy;        // a COPY of an_enemy is returned
}

enemy = create_super_enemy();
```

### Construct one object based on another

```c++
Player hero {"Hero", 100, 100};

Player another_hero {hero};     // a COPY of hero is made
```

### Copy Constructor 

- If you don't provide your own way of copying objects by value then the compiler provides a default way of copying objects
- Copies the value of each data member to the new object
    - default memberwise copy
- Perfectly fine in many cases
- Beware if you have a pointer data member
    - Pointer will be copied
    - Not what it is pointing to
    - Shallow vs Deep copy - more later

### Best practices

- Provide a copy constructor when your class has raw pointer members
- Provide the copy constructor with a **const reference** parameter
- Use STL classes as they already provide copy constructors
- Avoid using raw pointer data members if possible

### Declaring the Copy Constructor

```c++
Type::Type(const Type &source);

Player::Player (const Player &source);
Account::Account (const Account &source);
```

### Implementing the Copy Constructor

```c++
Type::Type(const Type &source) {
    // code or initialization list to copy the object
}
```

Player Example 

```c++
Player::Player(const Player &source)
    : name{source.name}, health {source.health}, xp {source.xp} {
    }
```

Account Example 

```c++
Account::Account(const Account &source)
    : name{source.name}, balance {source.balance} {
    }
```

Go to CopyConstructor folder

Go to Coding Exercise 33: Add a Copy Constructor to an Existing Class

## Shallow Copying with the Copy Constructor

- Consider a class the contains a pointer as a data member
- Constructor allocates storage dynamically and initializes the pointer
- Destructor releases the memory allocated by the constructor
- What happens in the defualt copy constructor?

### Default copy constructor

- memberwise copy
- Each data member is copied from the source object
- The pointer is copied NOT what it points to (shallow copy)
- **Problem:** when we release the storage in the destructor, the other object still refers to teh released storage!

```c++
class Shallow {
    private:
        int *data;                          // Pointer
    public:         
        Shallow(int d);                     // Constructor
        Shallow(const Shallow &source);     // Copy
        ~Shallow();                         // Destructor
};
```

### Shallow constructor

```c++
Shallow::Shallow(int d) {
    data = new int;     // allocate storage
    *data = d;
}
```

### Shallow destructor

```c++
Shallow::~Shallow() {
    delete data;        // free storage
    cout << "Destructor freeing data" << endl;
}
```

### Shallow copy Constructor

```c++
Shallow::Shallow(const Shallow &source)
    : data(source.data) {
        cout << "Copy constructor - shallow" << endl;
    }
```

- Shallow copy - only the pointer is copied - not what it is pointing to!
- **Problem:** `source` and the newly created object BOTH points to the **SAME** `data` area!

Sample main - will likely crash

```c++
int main() {
    Shallow obj1 {100};
    display_shallow(obj1);
    // obj1's  data has been released!

    obj1.set_data_value(1000);
    Shallow obj2 {obj1};
    cout << "Hello world" << endl;
    return 0;
}
```

Go to ShallowCopy folder

## Deep Copying with the Copy Constructor

### User-provided copy constructor

- Create a **copy** of the pointed-to data
- Each copy will have a pointer to unique storage in the heap
- Deep copy when you have a raw pointer as a class data member

### Deep

```c++
class Deep {
    private:
        int *data;                      // Pointer
    public:
        Deep (int d);                   // Constructor
        Deep (const Deep &source);      // Copy constructor
        ~Deep();                        // Destructor
};
```

### Deep constructor

```c++
Deep::Deep(int d) {
    data = new int;     // allocate storage
    *data = d;
}
```

### Deep destructor

```c++
Deep::~Deep() {
    delete data;        // free storage
    cout << "Destructor freeing data" << endl;
}
```

### Deep copy constructor

```c++
Deep::Deep(const Deep &source) {
    data = new int;     // allocate storage
    *data = *source.data;
    cout << "Copy constructor - deep" << endl;
}
```

- Deep copy - create new storage and copy values

#### Delegaring constructor

```c++
Deep::Deep(const Deep &source)
    : Deep{*source.data} {
        cout << "Copy constructor - deep" << endl;
    }
```

- Delegate to `Deep(int)` and pass in the `int (*source.data)` source is pointing to

### Deep Copy Constructor

- Deep - a simple method that expects a copy

```c++
void display_deep (Deep s) {
    cout << s.get_data_value() << endl;
}
```

- When `s` goes out of scope the destructor is called and releases `data`.
- **No Problem:** since the storage being releases is unique to `s`

Sample main - will not crash

```c++
int main() {
    Deep obj1 {100};
    display_deep(obj1);

    obj1.set_data_value(1000);
    Deep obj2 {obj1};

    return 0;
}
```

Go to DeepCopy folder

## Move Constructors

- Sometimes when we execute code that compiler creates unnamed temporary values

```c++
int total {0};
total = 100 + 200;
```

- `100 + 200` is evaluated and `300` stored in an unnamed temp value
- the `300` is then stored in the variable total
- then the temp value is discarded

- The same happens with object as well

### When is it useful?

- Sometimes copy constructor are called many times automatically due to the copy semantics of C++
- Copy constructors doing deep copying can have a significant performance bottlenect
- C++11 introduced move semantics and the move constructor
    - Move constructor moves an object rather than copy it
- Optional but recommended when you have a raw pointer
- Copy elision - C++ may optimize copying away completely (RVO-Return Value Optimization)

### R-value references

- Used in moving semantics and perfect forwarding
- Move semantics is all about r-value references
- Used by move constuctor and move assignment operator to efficiently move an object rather than copy it
- R-value reference operator (`&&`)

Examples

```c++
int x {100}         // x is an L-value

int &L_ref = x;     // L-value reference
L_ref = 10;         // change x to 10

int &&R_ref = 200;  // R-value reference
R_ref = 300;        // change R_ref to 300

int &&x_ref = x;    // Compiler error
```

### L-value reference parameters

```c++
int x {100};        // x is an L-value

void func(int &num); // A

func(x);            // Calls A - x is an L-value
func(200);          // Error - 200 is an R-value
```

### R-value reference parameters

```c++
int x {100};            // x is an L-value

void func(int &&num);   // B

func(200);              // Calls B - 200 is an R-value
func(x);                // Error - x is an L-value
```

- Error: cannot bind rvalue reference to type 'int&&' to lvalue to type 'int'

### L-value and R-value reference parameters

- Overload functions works

```c++
int x {100};            // x is an L-value

void func(int &num);    // A
void func(int &&num);   // B

func(x);                // calls A - x is an L-value
func(200);              // calls B - 200 is an R-value
```

### Example - Move Class

```c++
class Move {
    private:
        int *data;          // raw pointer
    public:
        void set_data_value(int d)  { *data = d; }
        int get_data_value()        { return *data; }

        Move(int d);                // Constructor
        Move (const Move &source);  // Deep copy constructor
        ~Move();                    // Destructor
};
```

#### Move class copy constructor

```c++
Move::Move(const Move &source) {
    data = new int;
    *data = *source.data;
}
```

- Allocate storage and copy

#### Inefficient copying

```c++
Vector<Move> vec;

vec.push_back(Move{10});
vec.push_back(Move{20});
```

- Copy Constructors will be called to copy the temps

Example output:

```bash
Constructor for: 10
Constructor for: 10
Copy constructor - deep copy for: 10
Destructor freeing data for: 10
Constructor for: 20
Constructor for: 20
Copy constructor - deep copy for: 20
Constructor freeing data for: 10
Copy constructor - deep copy for: 10
Destructor freeing data for: 10
Destructor freeing data for: 20
```

#### What does it do?

- Instead of making a deep opy of the move constructor
    - 'moves' the resource
    - Simply copies the address of the resource from source to the current object
    - And, nulls out the pointer in the source pointer
- Very efficient

#### Syntax - R-value reference

```c++
Type::Type(Type &&source);

Player::Player(Player &&source);
Move::Move(Move &&source);
```

### Move class with move constructor

```c++
class Move {
    private:
        int *data;          // raw pointer
    public:
        void set_data_value(int d)  { *data = d; }
        int get_data_value()        { return *data; }

        Move(int d);                // Constructor
        Move (const Move &source);  // Deep copy constructor
        Move(Move &&source);        // Move constructor
        ~Move();                    // Destructor
};
```

```c++
Move::Move(Move &&source)
    : data{source.data} {
        source.data = nullptr;
    }
```

- 'Steal' the data and then null out the source pointer

#### Efficient

```c++
Vector<Move> vec;

vec.push_back(Move{10});
vec.push_back(Move{20});
```

- Move constructors will be called for the temp R-values

Example output:

```bash
Constructor for: 10
Move constructor - moving resource: 10
Destructor freeing data for nullptr
Constructor for: 20
Move constructor - moving resource: 20
Move constructor - moving resource: 10
Destructor freeing data for nullptr
Destructor freeing data for nullptr
Destructor freeing data for: 10
Destructor freeing data for: 20
```

Go to MoveConstructor folder

## The 'this' Pointer

- `this` is a reserved keyword
- Contains the address of the object - so it's a pointer to the object
- Can only be used in class scope
- All member access is done via the `this` pointer
- Can be used by the programmer
    - to access data member and methods
    - to determine if two objets are the same (more in the next section)
    - can be dereferenced (`*this`) to yield the current object

```c++
void Account::set_balance(double bal) {
    balance = bal;      // this->balance is implied
}
```

To disambiguate identifier use

```c++
void Account::set_balance(double balance) {
    balance = balance;          // which balance? The parameter
}

void Account::set_balance(double balance) {
    this->balance = balance;    // Unambiguous
}
```

To determine object identity

- Somtimes its useful to know if two objects are the same object

```c++
int Account::compare_balance(const Account &other) {
    if (this == &other)
        std::cout << "The same objects" << std::endl;
        ...
}

frank_account.compare_balance(frank_account);
```

- We'll use the `this` pointer again when we overload the assignment operator

## Using const with Classes

- Pass arguments to class member methods as `const`
- We can also create `const` objects
- What happens if we call member functions on `const` objects?
- `const`-correctness

### Example - creating a const object

- `villain` is a const object so it's attributes cannot change

```c++
const Player villain {"Villain", 100, 55};
```

### What happens when we call member methods on a const object?

**ERROR!!**

```c++
const Player villain {"Villain", 100, 55};

void display_player_name(const Player &p) {
    cout << p.get_name() << endl;
}

display_player_name(villain);       // Error
```

### Solution 

const methods = Tell compiler that specific methods won't modify the object

```c++
class Player {
    private:
        ...
    public:
        std::string get_name() const;   // Error if code in get_name modifies this object
        ...
};
```

const-correctness

```c++
const Player villain {"Villain", 100, 55};
villain.set_name("Nice guy");                   // Error
std::cout << villain.get_name() << std::endl;   // OK
```

Go to ConstInClasses folder

## Static Class Member

- Class data members can be declared as static
    - a single data member that belongs to the class, not the objects
    - Useful to store class-wide information
- Class functions can be declared as static
    - Independent of any objects
    - Can be called using the class name

### Player class - static members

Typically in `Player.h` file

```c++
class Player {
    private:
        static int num_players;
    public:
        static int get_num_players();
        ...
};
```

### Player class - implement static method

Typically in `Player.cpp` file

```c++
#include "Player.h"

int Player::num_players = 0;
```

```c++
int Player::get_num_players() {
    return num_players;
}
```

### Player class - update the constructor

```c++
Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
        ++num_players;
    }
```

### Player class - update the destrucor

```c++
Player::~Player() {
    --num_players;
}
```

### Use Player class

`main.cpp` file

```c++
// helper function
void display_active_players() {
    cout << "Active players: " << Player::get_num_players() << endl;
}

int main() {
    display_active_players();       // Output: 0

    Player obj1 {"Frank"};
    display_active_players();       // Output: 1
    ...
}
```

Go to StaticClassMembers folder

## Struct vs Classes

- In addition to define a `class` we can declare a `struct`
- `struct` comes from the C programming language
- Essentially the same as a `class` except
    - members are `public` by default

### Class

```c++
class Person {
    std::string name;
    std::sting get_name();
};

Person p;
p.name = "Frank";           // Compiler error - private
std::cout << p.get_name();  // Compiler error - private
```

### Struct

```c++
struct Person {
    std::string name;
    std::sting get_name();  // What if name is public?
};

Person p;
p.name = "Frank";           // OK - public
std::cout << p.get_name();  // OK - public
```

### Some general guideline

- `struct`
    - Use `struct` for passive objects with public access
    - Don't declare methods in `struct`

- `class`
    - Use `class` for active objects with private access
    - Implement getter/setters as needed
    - Implement member methods as needed

## Friends of a class

- Friend
    - A function or class that has access to private class member
    - and, that function of or class is NOT a member of the class it is accessing

- Function
    - Can be regular non-member functions
    - Can be member methods of another class

- Class
    - Another class can have access to private class members

### Friends of a Class

- Friendship must be granted NOT taken
    - Declared explicitly in the class that is granting friendship
    - Declared in the function prototype with the keword `friend`

- Friendship is not symmetric
    - Must be explicitly granted
        - if A is a friend of B
        - B is NOT a friend of A

- Friendship is not transitive
    - Must be explicitly granted
        - if A is a friend of B AND
        - B is a friend of C
        - then A is NOT a friend of C

### Non-member function

```c++
class Player {
    private:
        friend void display_player(Player &p);
        std::string name;
        int health;
        int xp;
    public:
        ...
};
```

```c++
void display_player(Player &p) {
    std::cout << p.name << std::endl;
    std::cout << p.health << std::endl;
    std::cout << p.xp << std::endl;
}

// display_player may also change private data members
```

### Member function of another class

```c++
class Player {
    private:
        friend void OtherClass::display_player(Player &p);
        std::string name;
        int health;
        int xp;
    public:
        ...
};
```

```c++
class OtherClass {
    private:
        ...
    public:
        void display_player(Player &p) {
            std::cout << p.name << std::endl;
            std::cout << p.health << std::endl;
            std::cout << p.xp << std::endl;
        }
};
```

### Another class as a friend

```c++
class Player {
    private:
        friend class OtherClass;
        std::string name;
        int health;
        int xp;
    public:
        ...
};
```

