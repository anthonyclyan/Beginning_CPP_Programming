1. Data values that do not change while a program executes are __________ .
    - [ ] doubles
    - [ ] variables
    - [x] literals
    - [ ] integer

2. All variables must have a __________ before they are used in a program.
    - [ ] value
    - [ ] display statement
    - [ ] comment
    - [x] definition

3. Storage locations in memory are represented by __________ .
    - [x] variables
    - [ ] square brackets []
    - [ ] literals
    - [ ] constants

4. String literals are always encloed in __________ .
    - [ ] square brackets []
    - [ ] curly braces {}
    - [ ] single quotes ''
    - [x] double quotes ""

5. Character literals are always enclosed in __________ .
    - [ ] square brackets []
    - [ ] curly braces {}
    - [x] single quotes ''
    - [ ] double quotes ""

6. A variable that hold only true or false values is of type __________ .
    - [ ] int 
    - [x] bool
    - [ ] logical
    - [ ] double

7. The following expression determines how many bytes of storage are required to store a double on your computer:
    - [ ] `bytes(double)`
    - [ ] `length(double)`
    - [ ] `double`
    - [x] `sizeof(double)`

8. What is the output from the following code: 
    
    ```c++
    int x;
    cout << x << endl;
    ```
    
    - [ ] 0
    - [x] some garbage value
    - [ ] null
    - [ ] "No value"

9. Which variable definitions is not legal in C++?
    - [ ] `int x = 100;`
    - [ ] `int x;`
    - [ ] `int x { 100 };`
    - [x] `int x = 100`

10. Which line in the following code will generate a compiler error?

    ```c++
    #include <iostream>
    using namespace std;

    int main ()
    {
        const int min_age = 18;
        const int max_age = 35;
        min_age = 21;
        cout << "Minimum age is" << min_age << endl;
        return 0;
    }

    - [x] 8 `min_age = 21;`
    - [ ] 7 `const int max_age = 35;`
    - [ ] 6 `const int min_age = 18;`
    - [ ] 9 `cout << "Minimum age is" << min_age << endl;`