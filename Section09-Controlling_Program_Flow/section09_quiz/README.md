1. What is the value of `num` after the following code executes if the user enters `10` at the keyboard?

```c++
int num;
cin >> num;

if (num > 10)
    num -= 10;
else
    num += 10;
```

- [x] 20
- [ ] 10
- [ ] 0
- [ ] -10

2. What does the following code snippet display if the user enters `70` at the keyboard?

```c++
int temperature;
cout << "Enter a temperature: ";
cin >> temperature;
// if (temperature > 50); ???
if (temperature < 50);
   cout << "It's cold!" << endl;
if (temperature > 50)
   cout << "It's hot!" << endl;
else
   cout << "Maybe it's raining?"; 
```

- [ ] Maybe it's raining
- [ ] It's cold!
- [ ] It's hot!
- [x] It's cold!
      It's hot!

*I highly believe the prompt has a typo*

3. What does the following code snippet display if the user enters `20` at the keyboard?

```c++
int favorite;
cout << "Enter your favorite number: ";
cin >> favorite;
if (favorite == 13)
   cout << "That my favorite number too!" << endl;
   cout << "That's amazing!" << endl;
   cout << "Great minds think alike!" << endl;
```

- [ ] That my favorite number too!
- [ ] Nothing is displayed
- [ ] That my favorite number too!
      That's amazing!
      Great minds think alike!
- [x] That's amazing!
      Great minds think alike!

*I got this one wrong initially... Thought Nothing is displayed but indentation and block code {}... Got the answer the second try.*

4. What will the following code snippet display?

```c++
int num = 10;
while (num >= 1)
   cout << num << " ";
   num--;
```

- [ ] 10 9 8 7 6 5 4 3 2 1
- [ ] 10 9 8 7 6 5 4 3 2 2 1 0
- [x] 10 10 10 10 10 10... infinitely
- [ ] 9 8 7 6 5 4 3 2 1

*I overlooked the block code {} again... Thought it was 10 9 8 7 6 5 4 3 2 1*

5. The while loop is an example of a(n) __________ .

- [x] pre-test loop
- [ ] post-test loop
- [ ] range-based loop
- [ ] recursive loop

6. A do-while loop is guaranteed to execute __________ .

- [ ] indefinitely
- [ ] until the programmer breaks out of it
- [ ] at least zero times
- [x] at least one time

7. The for loop has 3 expressions in the following order:

- [ ] increment, initialize, test
- [ ] test, increment, initialize
- [x] initialize, test, increment
- [ ] The order doesn't matter

8. A loop that is located inside another loop is called a(n) __________ .

- [ ] double loop
- [x] nested loop
- [ ] inside-out loop
- [ ] outside-in loop

9. In order to terminate the execution of a loop, we can use the __________ statement.

- [ ] stop
- [ ] pool 
- [ ] end
- [x] break

10. If you know ahead of time how many times you need to loop, which loop would you use?

- [x] for loop
- [ ] while loop
- [ ] do-while loop
- [ ] a range-based for loop