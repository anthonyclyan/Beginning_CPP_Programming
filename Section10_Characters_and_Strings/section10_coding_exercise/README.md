# Coding Exercise 18: Using C-style Strings

Create a program that determines the length of a first name and last name individually and then the length of the entire name through the use of the C-style string functions `strlen`, `strcpy`, `strcat`.

Begin by decalring and initializing the C-style string variable `first_name` to contain `"Bjarne"`.

Now, declare and initialize a second C-style string variable `last_name` to contain `"Stroustrup"`.

Yout must also declare a third C-style string variable `whole_name` but do not initialize it yet.

Remember that the variable `whole_name` must be large enough to contain the first and last name with no whitespaces.

Now, by using the C-style string function `strlen`, declare and initialize the variable `first_name_length` to contain the length of the `first_name` string and the variable `last_name_length` to contain the length of the `last_name` string.

Using the C-style string function `strcpy`, copy the `first_name` string into the `whole_name` string variable.

Now, by using the C-style string function `strcat`, concatenate the `last_name` string at the end of the `whole_name` string.

Finally, by using the C-style string function `strlen`, declare and initialize the variable `whole_name_length` to contain the length of the `whole_name` string.


```c++
#include <iostream>
#include <cstring>
using namespace std;

void strings_and_functions() {

    //----WRITE YOUR CODE BELOW THIS LINE----
    
    // Initialization
    char first_name[50] {"Bjarne"};
    char last_name[50] {"Stroustrup"};
    char whole_name[50];

    size_t first_name_length = strlen(first_name);
    size_t last_name_length = strlen(last_name);

    strcpy(whole_name, first_name);
    // strcat(whole_name, " ");
    strcat(whole_name, last_name);
    size_t whole_name_length = strlen(whole_name);

    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << "The length of the first name, " << first_name << ", is " << first_name_length << " letters long and the length of the last name, " << last_name << ", is " << last_name_length << " letters long. This means that the length of the whole name must be " << whole_name_length << " letters long.";
}
```

# Coding Exercise 19: Using C++ Strings - Exercise 1

Create a program that will be used to regormat a name so that it can be read more easily.

The string variable `unformatted_full_name` is comprised of two substrings
- `first_name`
- `last_name`
in that order. Each substring begins with a captial letter.

Begin by declaring and initializing the string variable `first_name` from the string variable `unformatted_full_name` remembering that when initializing from another string the first integer within the curly brackets represents the starting index of the substring you wish to copy and the second integer represents the length of the substring.

Next, declare and initialize the string variable `last_name` by using the assignment operator `=` and the string function `substr` on the string variable `unformatted_full_name`.

Next, declare and initialize the string variable `formatted_full_name`. This should be done through the use of the concatentation operator `+` by concatenating the string variables `first_name` and `last_name` in that order, and then assigning the concatenated string to `formatted_full_name` using the assignment operator `=`.

Now the string variable `formatted_full_name` contains the string `"StephenHawking"`. We see taht the string is no more formatted than the original string vairable `unformatted_full_name` and that is because the addition operator `+` does not add whitespace between strings when concatenating them.

Fortunately, we can use the string function `insert` on the string variable `formatted_full_name` to insert a whitespace between the substrings such that `formatted_full_name` will then contain the string `"Stephen Hawking"`.


```c++
#include <iostream>
#include <string>
using namespace std;

void cpp_strings() {
    
    string unformatted_full_name {"StephenHawking"};
    
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    string first_name {unformatted_full_name, 0, 7};
    string last_name = unformatted_full_name.substr(7, 7);

    string formatted_full_name = first_name + last_name;

    formatted_full_name.insert(7, " ");

    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << formatted_full_name;
}
```

# Coding Exercise 19: Using C++ Strings - Exercise 2

Create a program that will be used in a digital library to format and sort journal entries based on the authors last name. Each entry has room to store only the last name of the author.

Begin by removing the first name `"Issac"` from the string variable `journal_entry_1` by using the string function `erase`. Do not forget to also remove the whitespace so that the string variable `journal_entry_1` will then contain the string `"Newton"` with no whitespaces.

The journal entries should be sorted alphabetically based on the authors last name. For example, the last name `"Brown"` should come before `"Davis"`.

Create an `if` statement so that if the last name contained within `journal_entry_2` is alphabetically less than the last name contained within `journal_entyr_1`, then the string values are swapped using the string function `swap`.

You may use either of the comparison operators `<` `>` in the `if` statement but remember that following ASCII, `"A"` is lexicographically lower than `"B"`.

```c++
#include <iostream>
#include <string>
using namespace std;

void cpp_strings() {
    
    string journal_entry_1 {"Isaac Newton"};
    string journal_entry_2 {"Leibniz"};
    
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    journal_entry_1.erase(0, 6);

    if (journal_entry_1 > journal_entry_2) {
        journal_entry_1.swap (journal_entry_2);
    }

    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << journal_entry_1 << "\n" << journal_entry_2;
}
```
