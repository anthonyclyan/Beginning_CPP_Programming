1. Arrays are always indexed starting at subscript _____ .
    - [x] 0
    - [ ] 1
    - [ ] "start"
    - [ ] "begin"

2. How many integers can the array named numbers contain? `int numbers[10]`
    - [ ] 11 (got it wrong the first time... thought it was 11)
    - [ ] 9
    - [x] 10
    - [ ] 0

3. Which of the following is a legal array definiton in C++?
    - [ ] `int numbers[0];`
    - [ ] `double 5numbers[5];`
    - [ ] `real numbers[5];`
    - [x] `float numbers[10];`

4. C++ treats an array name as:
    - [ ] all of the array elements
    - [ ] a variable
    - [x] the location in memory of first array element
    - [ ] the first array element

5. All array elements must be:
    - [ ] enclosed in square brackets `[]`
    - [ ] constants
    - [ ] literals
    - [x] of the same type

6. Given the following array declaration, how would you display `100.7` from the array? `double temperatures[] = {98.6, 95.2, 88.7, 100.7, 89.0};`
    - [ ] `cout << temperatures[4] << endl;`
    - [ ] `cout << 100.7 << endl;`
    - [ ] `cout << temps[3] << endl;`
    - [x] `cout << temperatures[3] << endl;`

7. Given the following array declaration, what would the following code display?

```c++
double temperatures[] = {98.6, 95.2, 88.7, 100.7, 89.0};
cout << temperatures[5] << endl;
```
    - [x] garbage data
    - [ ] 89.0
    - [ ] it won't compile
    - [ ] it will generate an "out of range error"

    *I got this one wrong!! I thought it was either "it won't compile" or "it will generate an 'out of range error'"...*

8. How would you define a vector named temperatures that contains doubles?
    - [x] vector <double> temperatures;
    - [ ] vector double temperatures;
    - [ ] vector [double] temperatures;
    - [ ] double vector temperatures

9. How would you determine the number of elements contained in a vector named temperatures?
    - [ ] length(temperatures);
    - [ ] tmeperatures.length();
    - [x] temperatures.size();
    - [ ] temperatures.num_elements();

10. What is one way that vectors and arrays are different?
    - [ ] vectors always more efficient than arrays
    - [ ] arrays can only store primitive types
    - [x] vectors can vary their capacity as the program runs, but arrays are fixed in size
    - [ ] vectors elements cannot be accessed using their subscript