// Name: Example_05.cpp
// Comparing integers using if statements, relational operators and equality operators.
// Author: Mohamed Ashry
/* --------------------------------------------------------------*/

#include<iostream>	// enable the program to output data on the screen by including the Preprocessing Directive	

using std::cout ;		// let the program uses cout directly
using std::cin ;		// let the program uses cin directly
using std::endl ;		// let the program uses endl directly

// Function main begins the program execution:

int main(){
	
	// declaring and initializing the required variables		
	int number1{0};		// declare and initialize first integer to 0 
	int number2{0};		// declare and initialize second integer to 0 
 	
	std::cout << "Enter the two integer to be compared: ";	// ask user to enter the data
	std::cin >> number1 >> number2;					 		// read the two integer from user 
	
	if (number1 == number2){
		cout << number1 << "==" << number2 << endl;
	}
	
	if (number1 < number2){
		cout << number1 << "<" << number2 << endl;
	}

	if (number1 > number2){
		cout << number1 << ">" << number2 << endl;
	}

	if (number1 != number2){
		cout << number1 << "!=" << number2 << endl;
	}

	if (number1 <= number2){
		cout << number1 << "<=" << number2 << endl;
	}

	if (number1 >= number2){
		cout << number1 << ">=" << number2 << endl;
	}

}	//	end of main function

/* --------------------------------------------------------------*/

// Expected output to be: 
/*

	Ex1:
		Enter two integers to compare: 3 7
			3 != 7
			3 < 7
			3 <= 7

	Ex2:

		Enter two integers to compare: 22 12
			22 != 12
			22 > 12
			22 >= 12

	Ex3:

		Enter two integers to compare: 7 7
			7 == 7
			7 <= 7
			7 >= 7

*/