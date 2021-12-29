1. The ________ operator increments the value of its operand by one then uses the value.
    - [x] prefix increment
    - [ ] postfix increment
    - [ ] prefix decrement
    - [ ] postfix decrement

2. The operator used to test two operands for equality is ________ . 
    - [ ] equals
    - [ ] compare
    - [x] == 
    - [ ] =

3. The operator that represents logical AND is ________ .
    - [ ] &
    - [ ] ||
    - [ ] |
    - [x] && 

4. The operator that represents logical OR is ________ .
    - [ ] &
    - [x] ||
    - [ ] |
    - [ ] && 

5. If a is 3, b is 5, and c is 7, which of the following are true?

```c++
b == 5;
c == (a + b) - 1;
b > 5;
a >= 3;
c <= (a * b) / a;
```

    - [ ] 1, 2, and 3 are true
    - [x] 1, 2, and 4 are ture
    - [ ] Only 1 is true
    - [ ] All are true

6. `a < 10` is called a(n) ________ .
    - [ ] statement
    - [ ] declaration
    - [x] relational expression
    - [ ] unary expression
    *I got this one wrong!! I thought it was a "statement"*

7. What will the following code display?

```c++
int x = 10, y = 3, z = 6;
cout << (x == y) << " ";
cout << (z <= x) << " ";
cout << (y != z) << " ";
cout << (x > y && z < x) << " ";
cout << (y < x && z < x) << " ";
cout << (x < y || z < 0 ) << endl;
```
    - [ ] 010101
    - [ ] 011010
    - [ ] 100001
    - [x] 011110

8. What is displayed by the following code?
```c++
int amout = 100;
amount += amount * 2
cout << amout << endl;
```

    - [ ] 102
    - [ ] 202
    - [ ] 200
    - [x] 300

9. What is displayed by the following code?
```c++
int x = 5;
int y = -2;
int z = 2;
cout << (x + y * z <= x + z * z - x) << endl;
```
    - [x] 1
    - [ ] 0
    - [ ] -1
    - [ ] It won't compile

10. What are the values of x and y after the follwing code executes?
```c++
double a = 100;
int b = 12;
int x = b %3;
double y = a / b;
int z = a / b;
```
    - [ ] x = 0, y = 8, z = 8
    - [ ] x = 4, y = 8.3333333 and z = 8
    - [ ] x = 8, y = 8.3333333 and z = 8
    - [x] x = 0, y = 8.3333333 and z = 8