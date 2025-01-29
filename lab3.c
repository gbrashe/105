// Grant Brasher
// CPSC 1011, Lab Section 002, Spring 2025
// 01/30/25
// Lab 3
// Demonstrate user input by displaying to output window
// Import C functions
#include <stdio.h>
#include <math.h>

int main(void) {
	// Establish variables
    	char inputOne;
    	double sqrtValue;
    	int decPlaces;
    // prompt user to enter character
    	fprintf(stderr, "Enter Any Character: ");
    	scanf("%c", &inputOne);
    	int decValue = (char) inputOne;
    // Print dec value
    	printf("The decimal value of %d is: %d\n", inputOne,decValue);
    // Determine sqrt
    	sqrtValue = sqrt(decValue);
    // determine amount of decimal places
    	decPlaces = (int) sqrtValue;
    // print sqrt
    	printf("The square root of %d is: %.1f\n", decValue, sqrtValue);
    // print pi
    	printf("PI printed to %d decimal places is: %.*f\n", decPlaces, decPlaces, M_PI);

    	return 0;
}
