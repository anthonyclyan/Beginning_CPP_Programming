1. A Class is  __________ .

- [x] a user-defined data type
- [ ] a pointer to a method
- [ ] also know as an object
- [ ] special variable

2. The __________ of a class is used to initialize object of that class type.

- [ ] destructor 
- [ ] initializer
- [ ] assignment operator
- [x] constructor

3. Class member attributes can be accessed with the __________ operator.

- [x] dot `.`
- [ ] insertion `<<`
- [ ] extraction `>>`
- [ ] sizeof

4. If not user-defined constructor are provided for a class, C++ will automatically generate a __________ constructor.

- [ ] useful
- [x] default
- [ ] local
- [ ] global

5. __________ and __________ determine the access allowed to class members.

- [ ] new, delete
- [x] public, private
- [ ] open, closed
- [ ] viewable, non-viewable

6. The copy semantics provided by the default C++ Copy Constructor is __________ .

- [ ] dynamic access
- [ ] static access
- [ ] deep copy
- [x] memberwise copy

7. __________ are associated with the C++ Move Constructor.

- [ ] L-values
- [ ] R-values
- [ ] L-value references
- [x] R-value references

8. The class __________ is called when an object goes out of scope.

- [ ] deconstructor
- [ ] deleter
- [x] destructor
- [ ] destroyer

9. What does the following code display?

```c++
#include <iostream>

using namespace std;

class Test{
    private:
        int num;
        void increment_num() {
            num++;
        }
    public:
        Test(int num) : num{num} {}
};

int main() {
    Test object{100};
    cout << object.increment_num() << endl;
    return 0;
}
```

- [x] the code won't compile
- [ ] 100
- [ ] 101
- [ ] gargabe data

10. Given the following class declaration, which statment is NOT true?

```c++
class Test{
    private:
        int num;
        void increment_num() {
            num++;
        }
    public:
        Test(int num) : num{num} {}
        void decrement_num() {
            num--;
        }
};
```

- [ ] num is not accessible outside the class declaration
- [ ] the class name is Test
- [ ] `decrement_num()` is accessible outside the class declaration
- [ ] the class has a default compiler generated copy constructor
- [x] the class has a default compiler generate default constructor
