// CONVERTING MODULE SOURCE
/*
* Author 1: Michaela Ryza Cruz , mrcruz3@myseneca.ca, 110464245
* Date: V1 - Monday, November 25, 2024
*       V2 - Friday, November 29, 2024
*       V3 - Monday, December 02, 2024
* Course: Computer Principles for Programmers           Project: Group Final Project
* Purpose: This module provides functionality to convert numeric string values entered by the user 
*          into their corresponding integer and double numeric values, and displays the results.
*/
#define _CRT_SECURE_NO_WARNINGS //Prevent unsafe warning for the function used
#define BUFFER_SIZE 80          //The size the buffer can hold from user input
#include "converting.h"         // Contains the header file for converting()
/*
* Purpose: V1 - Converting user numeric strings values into an integers and printing the
*               result until the user types "q" for quitting.
*          V2 - It converts a string into a double numeric values to its double values and
			    display the results. It also repeat until the user quit.
		   V3 - Converts a numeric string to a long value and displays the result until the user exits.
* Parameters: None (handles standard input)
* Return: void
* Modifies: V1 - intString: A buffer that will store the user's input and remove any newlines
*                intNumber: This store the converted integer values
*                stdout: Print messages
*           V2 - doubleString: Replace the newline with the null terminator
*			     doubleNumber: Value of doubleString is converted to a doubles value and stores it
*           V3 - longString: Stores the user input string for conversion to a long integer.
*                longNumber: Stores the converted long integer value.
*/

void converting(void) {
    /* Version 1*/
/*    printf("*** Start of Converting Strings to int Demo ***\n");
    char intString[BUFFER_SIZE];    //intString will holding all the user's input values
    int intNumber;                  //intNumber will stores the converted integer values

    do {
        printf("Type an int numeric string (q - to quit):\n");
        fgets(intString, BUFFER_SIZE, stdin);       //fgets is getting the input from the user
        intString[strlen(intString) - 1] = '\0';    //Removes all the newline from the input

        if (strcmp(intString, "q") != 0) {          //Checks if the user input the "q" for quiting
            intNumber = atoi(intString);            //Code for converting string to integers
            printf("Converted number is %d\n", intNumber);  //Printing the values that had been converted
        }
    } while (strcmp(intString, "q") != 0);          //Loop until user types "q"

    printf("*** End of Converting Strings to int Demo ***\n\n");


	/* Version 2 */
/*	printf("*** Start of Converting Strings to double Demo ***\n");
	char	doubleString[BUFFER_SIZE];	//doubleString will store the value of user input as a size of buffer
	double	doubleNumber;				//doubleNumber will store the converted double value
	do {
		printf("Type the double numeric string (q - to quit):\n");
		fgets(doubleString, BUFFER_SIZE, stdin);	//It will read the user input
		doubleString[strlen(doubleString) - 1] = '\0';	// This will remove any newline character

		//It will alway check if the user want to quit by using 'q'
		if ((strcmp(doubleString, "q") != 0)) {
			doubleNumber = atof(doubleString);	//This will convert the string to double value
			printf("Converted number is %f\n", doubleNumber);	//This will diaplay the converted value
		}
	} while (strcmp(doubleString, "q") != 0);	//The code repeat until the user quit by enting 'q'
	printf("*** End of Conerting String to double Demo ***\n\n");


    /* Version 3 */
    printf("*** Start of Converting Strings to long Demo ***\n");
    char longString[BUFFER_SIZE];                   //Stores the input string for conversion to long
    long longNumber;                                //Stores the converted long value
    do {
        printf("Type the long numeric string (q - to quit):\n");
        fgets(longString, BUFFER_SIZE, stdin);      //Get the user's long numeric string input
        longString[strlen(longString) - 1] = '\0';  //Removes the newline character

        if (strcmp(longString, "q") != 0) {
            longNumber = atol(longString);          //Converts the string to a long integer
            printf("Converted number is %ld\n", longNumber);  //Displays the converted long
        }
    } while (strcmp(longString, "q") != 0);         //Repeat until the user types "q"

    printf("*** End of Converting Strings to long Demo ***\n\n");
}