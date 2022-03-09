1. A pointer variable can store __________ .

- [ ] integer values
- [ ] double values
- [x] addresses of other variables
- [ ] string values

2. In order to determine the address of a variable in C++, we can use the __________ operator.

- [ ] `@`
- [ ] `++`
- [ ] `*`
- [x] `&`


3. Pointer variables must always be __________ before they are used.

- [ ] dereferenced
- [ ] static
- [x] initialized
- [ ] checked

4. In order to follow a pointer and access the data it is pointing to, we must __________ the pointer using the __________ operator.

- [ ] use, @
- [ ] access, &
- [x] dereference, *
- [ ] reference, *

5. Pointer can be used to dynamically allocate storage from the __________ at __________.

- [ ] stack, compile-time
- [ ] stack, run-time
- [x] heap or free store, run-time
- [ ] heap or free store, compile-time

6. When using raw pointers and dynamica storage allocation, we must always de-allocate the used storage by using __________ to prevent __________.

- [x] delete, memory leaks
- [ ] free, buffer overruns
- [ ] delete, stack overflows
- [ ] new, memory leaks

7. __________ and pointers can be used interchangeably in many contexts.

- [ ] Function calls
- [ ] Classes
- [ ] Vectors
- [x] Array names

8. What types of variables can ptr store given the following declaraion below?
`int **ptr;`

- [ ] integers
- [ ] addresses of integers
- [x] addresses of pointers to integers
- [ ] any type of integer

9. What does the following code snippet display?

```c++
int *data = new int[5];

for (int i=0; i<5; i++)
    *(data + i) = i*2;

for (int i=0; i<4; i++)
    cout << data[i] << " ";
cout << endl;

delete [] data;
```

- [ ] 0 1 2 3 4
- [x] 0 2 4 6 8
- [ ] 2 4 6 8 10
- [ ] garbage data

10. Given the following pointer decalrations, what can you say about ptr1 and ptr2?

```c++
int *ptr1;
int *ptr2 {nullptr};
```

- [ ] ptr1 and ptr2 are both contains the address 0
- [ ] ptr1 and ptr2 are both initialized
- [x] ptr1 is uninitialized and ptr2 is initialized
- [ ] ptr1 and ptr2 are both uninitalized