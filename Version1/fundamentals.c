// FUNDAMENTALS MODULE SOURCE
/*
* Author1: Vadeeha Vadeeha, vvadeeha@myseneca.ca, 113978241
* Author2: Michaela Ryza Cruz , mrcruz3@myseneca.ca, 110464245
* Course: Computer Principles for Programmers           Project: Group Final Project
* Purpose: The code is converting the numeric string value entered by the user
*           into integers
*/
#define _CRT_SECURE_NO_WARNINGS     //Prevents unsafe warnings for the function used inside the code
#define BUFFER_SIZE 80              //The size the buffer can hold from the user input
#define NUM_INPUT_SIZE 10           // Maximum size the input the buffer can hold
#include "fundamentals.h"           // Contain the header file for the fundamentals.h
/*
* Purpose: It allow the user to input a string values and select a character by its index.
*           It also handles the positions/index that are outside the string length.
* Parameters: None
* Return: Void
* Modifies: buffer1:  The code will run from the string value the user input and remove the newline
*           numInput: The code will run from the numeric value the user input and remove the newline
*           position: This will store the integer value of the position the user will say, after
*                       being converted from the numInput
*/
void fundamentals(void) {
    /* Version 1*/
    printf("*** Start of Indexing Strings Demo ***\n");
    char buffer1[BUFFER_SIZE];      //buffer1 hold the user's input         
    char numInput[NUM_INPUT_SIZE];  //numInput holds the user's numeric values of the string
    size_t position;                //position stores the converted position 

    do {
        printf("Type not empty string (q - to quit):\n");
        fgets(buffer1, BUFFER_SIZE, stdin);     //feget getting the value from the user
        buffer1[strlen(buffer1) - 1] = '\0';    //Removes any new or extra lines       

        //Checks if the user wants to quit by inputting "q"
        if (strcmp(buffer1, "q") != 0) {
            printf("Type the character position within the string:\n");
            fgets(numInput, NUM_INPUT_SIZE, stdin);     //Get the numeric value
            numInput[strlen(numInput) - 1] = '\0';      //Remove any extra lines
            position = atoi(numInput);                  //Converting string to integers

            //Handleing the positions outside the string length
            if (position >= strlen(buffer1)) {
                position = strlen(buffer1) - 1; //Adjusting  to the last character index
                printf("Too big... Position reduced to max available\n");
            }

            //Display the character at the given position 
            printf("The character found at %d position is '%c'\n",
                (int)position, buffer1[position]);
        }
    } while (strcmp(buffer1, "q") != 0);    //Repeat until the user quit (types "q")

    printf("*** End of Indexing Strings Demo ***\n");
}