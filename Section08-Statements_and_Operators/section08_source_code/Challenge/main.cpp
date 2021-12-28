// Section 8 Challenge
/*
	For this program I will be using US dollars and cents.
	
    Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
	
	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!

*/
#include <iostream>

using namespace std;

int main() {

	// Declare changes in unit of cents
	const int dollar {100};
	const int quarter {25};
	const int dime {10};
	const int nickel {5};
	const int penny {1};
	
	// Declare output variables
	int change {};
	int num_dollar {};
	int num_quarter {};
	int num_dime {};
	int num_nickel {};
	int num_penny {};
	

	cout << "Enter an amount in cents: ";
	cin >> change;

	if (change == 0) {

		cout << "\nYou can provide this change as follows: " << endl;
		cout << "dollars:\t0" << endl;
		cout << "quarters:\t0" << endl;
		cout << "dimes:\t\t0" << endl;
		cout << "nickels:\t0" << endl;
		cout << "pennies:\t0" << endl;

	} else if (change < 0) {

		cout << "Somthing is wrong... We can't have negative change." << endl;

	} else {

		// 1. Dollar
		num_dollar = change / dollar;
		// if (num_dollar < 1){				// didn't need these if-statements because int of decimal number is 0
		// 	num_dollar = 0;
		// }
		change -= num_dollar * dollar;		// update change

		// 2. Quarter
		num_quarter = change / quarter;
		// if (num_quarter < 1){
		// 	num_quarter = 0;
		// }
		change -= num_quarter * quarter;	// update change

		// 3. Dime
		num_dime = change / dime;
		// if (num_dime < 1){
		// 	num_dime = 0;
		// }
		change -= num_dime * dime;			// update change

		// 4. Nickel
		num_nickel = change / nickel;
		// if (num_nickel < 1){
		// 	num_nickel = 0;
		// }
		change -= num_nickel * nickel;		// update change

		// 5. Penny
		num_penny = change / penny;
		// if (num_penny < 1){
		// 	num_penny = 0;
		// }
		change -= num_penny * penny;		// update change

		// cout << change << endl;		// debug to see if change equal to zero after all calculations
		cout << "\nYou can provide this change as follows: " << endl;
		cout << "dollars:\t" << num_dollar << endl;
		cout << "quarters:\t" << num_quarter << endl;
		cout << "dimes:\t\t" << num_dime << endl;
		cout << "nickels:\t" << num_nickel << endl;
		cout << "pennies:\t" << num_penny << endl;
	}

    cout << endl;
    return 0;
}



