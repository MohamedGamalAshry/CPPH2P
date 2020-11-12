// Name: Example_04.cpp
// Description: Fourth example in Chapter 02, C++ How to Program
// Adding program that displays the sum of two integers.
// Author: Mohamed Ashry

/* --------------------------------------------------------------*/

#include <iostream>	// enable the program to output data on the screen by including the Preprocessing Directive	

// Function main begins the program execution:

int main(){
	
	// declaring and initializing the required variables		---		int number1{0}, number2{0}, sum{0};
	int number1 = 0;	// declare and initialize first integer to 0 --  int number1{0};
	int number2 = 0;	// declare and initialize second integer to 0 -- int number2{0};
	int sum = 0 ;		// sum of two integers initialized to 0
	
	std::cout << "Enter the first number: ";	// ask user to enter the data
	std::cin >> number1;						// read the first integer and save it into number1 variable
	
	std::cout >> "Enter the second number: ";	// ask user to enter the data
	std::cin >> number2;						// read the second integer and save it into number2 variable
	
	sum = number1 + number2 ;					// add the two numbers and store them in sum
	
	std::cout << "Sum is: " << sum << std:endl ;	// display sum	

	return 0;		// indicate that program ended successfully by returning 0
	
}	//	end of main function

/* --------------------------------------------------------------*/

// Expected output to be: 
/*

					Enter the first number: 45
					Enter the second number: 72
					Sum is 117

*/