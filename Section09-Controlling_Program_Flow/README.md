# Controlling Program Flow

- Sequence
    - Ordering statements sequentially
- Selection
    - Making decisions
- Iteration
    - Looping or repeating

We can implement any algorithm.

## Selection - Decision Making

- `if` statement
- `if-else` statement
- Nested `if` statements
- `switch` statement
- Conditional operator `?:`

## Iteration - Looping

- `for` loop
- `while` loop
- `do-while` loop
- Range-based `for` loop
- `continue` and `break`
- Infinite `loops`
- Nedted `loops`

### `if` statement 

- `if` statement followed by a boolean true/false value 
- If the value of the expression is true then execute the statment
- If the expression is false then skip the statement
- Indentation is helpful

```c++
if (expr)
    statement;
```

#### Block statement

- Block statement is a sequence of statements inside a block which is made up of `{}`

```c++
if (num > 10) {
    ++num;
    cout << "this too";
}
```

- Block statement comes in when more than 1 statement is executed if the statement is true
- Create a block of code by inclding more than one statement in code block `{}`
- Blocks can also contain variable declarations
- These variables are visible only within the block - local scope

### `if-else` statement

```c++
if (expr)
    statement 1;
else 
    statement 2;
```

- If the expression is **true** then execute **statement 1**
- If the expression is **false** then execute **statement 2**
- Block statements still works

### `if-else-if` construct

```c++
if (score > 90)
    cout << "A";
else if (score > 80)
    cout << "B";
else if (score > 70)
    cout << "C";
else if (score > 60)
    cout << "D";
else                    // all others must be F
    cout << "F";

cout << "Done";
```

### Nested `if` statement

```c++
if (expr1)
    if (expr2)
        statement1;
    else
        statement2;
```

- `if` statement is nested within another
- Allows testing of multiple conditions
- `else` belongs to closest `if`
- We have a **dangaling else problem** since we have 2 `if` but only 1 `else`

### `Switch` statement

- The control expression must evaluate to an integer type
- The case expression must be constant expressions that evaluate to integer or intergers literals
- Once a match occurs all following case sections are executes UNTIL a `break` is reached the switch complete
- Best practice: provide break statement for each case
- Best practice: `default` is optional, but should be handled

```c++
switch (integer_control_expr) {
    case expression_1: statement_1; break;
    case expression_2: statement_2; break;
    case expression_3: statement_3; break;
    ...
    case expression_n: statement_n; break;
    default: statement_default;
}
```

- `integer_control_expr` is a control expression must evaluate to an `int` type or an `enumeration` type
- then the series of `case` statements enclosed in `{}`
- the value of the control expression, `integer_control_expr`, is compared with the values following the `case` keyword
- then the code after the `:` under the case will be executed until it hits a `break` statement
- best practice to include `break` statement after all cases
- `default` case is optional and is catch-all if none case matches
- `break` is not needed in the default case

```c++
// fall-through example
switch (selection) {
    case '1': cout << "1 selected";
              break;
    case '2': cout << "2 selected";
              break;
    case '3':
    case '4': cout << "3 or 4 selected";
              break;
    default:  cout << "1,2,3,4 NOT selected";
}

// with an enumeration
switch (screen_color) {
    case red:   cout << "red"; break;
    case green: cout << "green"; break;
    case blue:  cout << "blue"; break;
    default:    cout << "should never execute";
}
```

### Conditional Operator

```c++
(cond_expr) ? expr1 : expr2
```

- cond_expr evaluates to a boolean expression
    - if cond_expr is true then the value of expr1 is returned
    - if cond_expr is false then the value of expe2 is returned
- Similar to `if-else` statement
- Ternary operator
- Very useful when used inline
- Very easy to abuse

```c++
int a{10}, b{20};
int score{92};
int result {};


result = (a > b) ? a : b;
// if a is greater than b , then the result = a
// otherwise, result = b

result = (a < b) ? (b - a) : (a - b);
// if b is greater than a, then the result = (b - a)
// otherwise, result = (a - b)

result = (b != 0) ? (a/b) : 0;
// if b is not equal to zero, then the result = (a/b)
// otherwise, result = 0

cout << ((score > 90)) ? "Excellent" : "Good");
// if score is greater than 90, then output "Excellent"
// otherwise, output "Good"
```

### Looping 

- The third basic building block of programming 
    - sequence, selection, iteration
- Iteration or repetition
- Allows the execution of a statement or block of statements repeatedly
- Loops are made up a loop condition and the body which contains the statements to repeat

#### Use-cases

- A specific number of times
- For each element in a collection
- While a specific condition remains true
- Until a specific condition becomes false
- Until we reach the end of some input stream
- Forever 
- Many, many more

#### C++ Looping Constructs

- `for` loop
    - iterate a specific number of times
- `range-based for` loop
    - one iteration for each element in a range or collection
- `while` loop
    - iterate while a condition remains true
    - stop wen the codition becomes false
    - check the condition at the beginning of every iteration
- `do-while` loop
    - iterate while a condition remains true
    - stop when the condition becomes false
    - check the condition at the end of every iteration

### `for` Loop

```c++
for (initialization; condition; increment)
    statement;

for (initialization; condition; increment) {
    statement(s);
}
```

#### Example
```c++
int i {0};

for (i = 1; i <=5; ++i)
    cout << i << endl;
```

#### Comma operator

```c++
for (int i{1}, j{5}; i <= 5; ++i, ++j){
    cout << i << " * " << j << " : " << (i * j) << endl;
}
// 1 * 5 : 5
// 2 * 6 : 12
// 3 * 7 : 21
// 4 * 8 : 32
// 5 * 9 : 45
```

- The basic for loop is very clear and concise
- Since the for loop's expressions are all optional, it is possible to have
    - no initialization
    - no test
    - no increment

```c++
for (;;)
    cout << "Endless loop" << endl;
```