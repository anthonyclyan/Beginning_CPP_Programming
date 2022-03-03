1. A function can have __________ parameters.

- [ ] a maximum of five
- [ ] only one
- [x] zero or more
- [ ] a blank space

2. Variables defined in the body of a function that are visible only to the function are called __________ variables.

- [x] local
- [ ] global
- [ ] function
- [ ] special

3. Vairables defined in functions whose values persist from call are called __________ variables.

- [ ] global 
- [x] static
- [ ] function 
- [ ] special

4. The default manner in which passing parameters to funcitons is achieved in C++ __________ .

- [ ] pass-by-reference
- [ ] pass-by-name
- [ ] pass-by-pointer
- [x] pass-by-value

5. What is displayed by the following code?

```c++
#include <iostream>
using namespace std;

void func(int x, int y, int z) {
    x = y + z;
    y = 10;
    x = 20;
}

int main() {
    int a = 10, b = 20, c = 30;
    func(a, b, c);
    cout << a << " " << b << " " << c << endl;
    return 0;
}
```

- [x] 10 20 30
- [ ] 50 30 80
- [ ] 10 30 80
- [ ] 80 30

6. What is displayed by the following code?

```c++
#include <iostream>
using namespace std;

void func(int &x, int &y, int &z) {
    x = y + z;
    y = 10;
    x = 20;
}

int main() {
    int a = 10, b = 20, c = 30;
    func(a, b, c);
    cout << a << " " << b << " " << c << endl;
    return 0;
}
```

- [ ] 10 20 30
- [x] 20 10 30
- [ ] 10 30 80
- [ ] 80 30

7.  __________ arguments can be automatically supplied to a function when no arguments are provided when the function is called.

- [ ] local
- [ ] reference
- [ ] regular
- [x] default

8. When a funciton calls itself, either directly or indirectly, this defined as __________ .

- [ ] self-calling
- [ ] an infinite loop
- [x] recursion
- [ ] a function prototype

9. Before we call a function in C++, it must be definied or have a __________ provided.

- [x] prototype
- [ ] default
- [ ] overloaded function
- [ ] namespace

10. Creating multiple version of the same funciton name that accepts different parameters is called __________ .

- [ ] function defaulting
- [ ] function prototyping
- [x] function overloading
- [ ] function augmenting