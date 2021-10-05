# Coding Exercise 5: Declaring, Initializing and Accessing an Array

- Declare an array of `10` integers named `arr` and initialize the array so that all 10 integers are `0`.
- Then assign `100` to the first element of the array and `1000` to the last element of the array.

## Solution

```c++
#include <vector>
using namespace std;

vector<int> use_array() {
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    int arr [10] {};
    arr[0] = 100;
    arr[9] = 1000;
    
    //-----WRITE YOUR ABOVE THIS LINE----
    //-----DO NOT CHANGE THE CODE BELOW THIS LINE----
    vector<int> v(arr, arr + sizeof arr / sizeof arr[0]);
    return v;
}
```

# Coding Exercise 5: Declaring, Initializing and Accessing Vectors

- Decalre a vector of integers named `vec` and initialize the vector to `10, 20, 30, 40, and 50`
- Modify the first element of the vector to be `100` and modigy the last element of the vector to be `1000`.
- The final vector should then be `100, 20, 30, 40, and 1000`.

## Solution

```c++
#include <vector>
using namespace std;

vector<int> use_vector() {
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    vector <int> vec {10, 20, 30, 40, 50};

    vec.at(0) = 100;
    vec.at(4) = 1000;

    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----NO NOT MODIFY THE CODE BELOW THIS LINE----
    return vec;
}
```