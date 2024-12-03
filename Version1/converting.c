// CONVERTING MODULE SOURCE
/*
* Author1: Vadeeha Vadeeha, vvadeeha@myseneca.ca, 113978241
* Author2: Michaela Ryza Cruz , mrcruz3@myseneca.ca, 110464245
* Course: Computer Principles for Programmers           Project: Group Final Project
* Purpose: The code is converting the numeric string value entered by the user
*           into integers
*/
#define _CRT_SECURE_NO_WARNINGS //Prevent unsafe warning for the function used
#define BUFFER_SIZE 80          //The size the buffer can hold from user input
#include "converting.h"         // Contains the header file for converting()
/*
* Purpose: Converting user numeric strings values into an integers and printing the
*           result until the user types "q" for quitting.
* Parameters: None (handles standard input)
* Return: void
* Modifies: intString: A buffer that will store the user's input and remove any newlines
*           intNumber: This store the converted integer values
*           stdout: Print messages
*/

void converting(void) {
    /* Version 1*/
    printf("*** Start of Converting Strings to int Demo ***\n");
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
}