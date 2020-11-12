// Name: Exercise_2-5.cpp
// a program that calculates and displays the product of three integers
// Author: Mohamed Ashry
// Date: 12.11.2020
/* --------------------------------------------------------------*/

#include <iostream>			// enables program to perform input and output

using namespace std ;		// program uses names from the std namespace

// Function main begins the program execution
int main(){
	
	// declaring and initializing the required variables		
	int number1{0};		// declare and initialize first variable to 0 
	int number2{0};		// declare and initialize second variable to 0 
	int number3{0};		// declare and initialize the third variable to 0
 	int result{0} ;		// declare and initialize the result of multiplication

	cout << "Enter the three variables: ";				// ask user to enter the data
	cin >> number1 >> number2 >> number3;		 		// read the integers from user 
	result = number1 * number2 * number3 ;				// calculate the product of three integers

	cout << "The product is: " << result << endl ;		// display the product

}	//	end of main function

/* --------------------------------------------------------------*/

// Expected output to be: 
/*

if numbers are : 1 , 2, 3 then the output is:

	The product is: 6

*/