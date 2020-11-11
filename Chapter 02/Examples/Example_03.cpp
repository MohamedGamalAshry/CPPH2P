// Name: Example_03.cpp
// Description: Third example in Chapter 02, C++ How to Program
// Printing multipile lines of text with single statement
/* --------------------------------------------------------------*/

#include<iostream>	// enable the program to output data on the screen by including the Preprocessing Directive	

// Function main begins the program excution:

int main(){
	std::cout << "Welcome\nto\n\nC++ !! \n" ;			// display first part of text message
	std::cout << " to C++ !! \n"		// display 2nd part of text message
	return 0;		// indicate that program ended successfully by returning 0
	
}	//	end of main function

/* --------------------------------------------------------------*/

// Expected output to be: 
/*
								Welcome
								to

								C++!!
*/