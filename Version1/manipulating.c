// MANIPULATING MODULE SOURCE
/*
* Author1: Vadeeha Vadeeha, vvadeeha@myseneca.ca, 113978241
* Author2: Michaela Ryza Cruz , mrcruz3@myseneca.ca, 110464245
* Course: Computer Principles for Programmers           Project: Group Final Project
* Purpose: Converting the string using "strcat" and takes two input from the user and * *	concatenates them.
*/
#define _CRT_SECURE_NO_WARNINGS	//Prevent unsafe warning for the function used
#define BUFFER_SIZE 80		//The size the buffer can hold from user input
#include "manipulating.h"	// Contains the header file for manipulating.h
/*
* Purpose: Converting the string using "strcat" and takes two input from the user and * *	   concatenates them.
* Parameters: None (handles standard input)
* Return: void
* Modifies: string1: The first string will run and remove any newline
*           string2:The second string will run and remove any newline and stdout
*           stdout: The function will print the message
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
}
