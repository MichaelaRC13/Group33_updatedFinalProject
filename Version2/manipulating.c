// MANIPULATING MODULE SOURCE
/*
* Author1: Vadeeha Vadeeha, vvadeeha@myseneca.ca, 113978241
* Author2: Michaela Ryza Cruz , mrcruz3@myseneca.ca, 110464245
* Date: V1 - Monday, November 25, 2024
*       V2 - Friday, November 29, 2024
* Course: Computer Principles for Programmers           Project: Group Final Project
* Purpose: This code provides functions for manipulating strings by concatenating two strings entered 
*          by the user and comparing two strings to determine their relative order.
*/
#define _CRT_SECURE_NO_WARNINGS	//Prevent unsafe warning for the function used
#define BUFFER_SIZE 80		    //The size the buffer can hold from user input
#include "manipulating.h"	    //Contains the header file for manipulating.h
/*
* Purpose: V1 - Converting the string using "strcat" and takes two input from the user and * *	   concatenates them.
*          V2 - This code will compare two strings that user will enter and it will tell its relative order.
* Parameters: None (handles standard input)
* Return: void
* Modifies: V1 - string1: The first string will run and remove any newline
*                string2:The second string will run and remove any newline and stdout
*                stdout: The function will print the message
*           V2 - compare1: will store the first value of user
*			     compare2: will store the second value of user
*/
void manipulating(void) {
    /* Version 1*/
    printf("*** Start of Concatenating Strings Demo ***\n");
    char string1[BUFFER_SIZE];  //Buffer that will store the first string from the user
    char string2[BUFFER_SIZE];  // Buffer that will store the second string from the user

    //This loop will allow the user to input unit they type "q" for quitting
    do {
        printf("Type the 1st string (q - to quit):\n");
        fgets(string1, BUFFER_SIZE, stdin);     //Getting the user's first value 
        string1[strlen(string1) - 1] = '\0';    //This will remove any new or extra lines

        //If the user input is not "q" then continue with the second string value
        if (strcmp(string1, "q") != 0) {
            printf("Type the 2nd string:\n");   //Getting the second value form the user
            fgets(string2, BUFFER_SIZE, stdin); //Removing any extra or new lines
            string2[strlen(string2) - 1] = '\0';

            strcat(string1, string2); //Concatenate the first string to second string
            printf("Concatenated string is '%s'\n", string1); //Displaying the results
        }
    } while (strcmp(string1, "q") != 0);    //Continue until user types "q" to quit

    printf("*** End of Concatenating Strings Demo ***\n\n");


	/* Version 2 */
	printf("*** Start of Comparing String Demo ***\n");
	char compare1[BUFFER_SIZE];	//compare1 will store the first string entered by user with the limit of buffer
	char compare2[BUFFER_SIZE]; //compare2 will store the second value of string with buffer limit
	int result;	// It will store the compared results
	do {
		printf("Type the 1st string to compare (q - to quit):\n");
		fgets(compare1, BUFFER_SIZE, stdin);	//This will get user's first value
		compare1[strlen(compare1) - 1] = '\0';	//This will remove any newline
		if (strcmp(compare1, "q") != 0) {			//A statement to check if user want to quit
			printf("Type the 2nd String to compare:\n");
			fgets(compare2, BUFFER_SIZE, stdin);	//It will get user's second string value
			compare2[strlen(compare2) - 1] = '\0';	//This will remove any new or extra lines
			result = strcmp(compare1, compare2);	//This will compare the two strings entered by user

			//This will print the compared result
			if (result < 0)
				printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);
			else if (result == 0)
				printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);
			else
				printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);
		}
	} while (strcmp(compare1, "q") != 0); //This code will repeat until the user enter 'q' to quit
	printf("*** End of Comparing String Demo ***\n\n");
}