#include <stdio.h>

/*
Jared Weiss 
August 22, 2020 @ 9:01 P.M..
CSCI 112 Lab1 
*/


int main(void) {
	// Input Variables 
	int input_gallons; 
	int input_efficiency; 

	// Prompt the User to Input Variables
	printf("Enter Gallons of Oil: "); 
	scanf("%d", &input_gallons); // tell the program to take the next number entered
				     // into the terminal and store it in the input_gallons variable
	printf("Enter the Efficiency of the furnace: ");
	scanf("%d", &input_efficiency); // same thing as above
	double to_barrels = input_gallons / 42.0; // use 42.0 instead of 42 to avoid integer division
	double btu = to_barrels*5.8*(input_efficiency/100.0); // expression to calculate BTUs based on what the user entered. note 100.0 instead of 100

	// Output
	printf("BTUs delivered to house through furnace is: %.2f million.\n", btu);  // print what we got out to the user with some formating (2 decimal places)

	return 0; 
}
