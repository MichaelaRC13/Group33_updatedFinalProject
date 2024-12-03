// FUNDAMENTALS MODULE SOURCE
/*
* Author 1: Michaela Ryza Cruz , mrcruz3@myseneca.ca, 110464245
* Date: V1 - Monday, November 25, 2024
*       V2 - Friday, November 29, 2024
*       V3 - Monday, December 02, 2024
* Course: Computer Principles for Programmers           Project: Group Final Project
* Purpose: This code enables users to interact with strings by retrieving characters at specific positions and
*          measuring string lengths. It also converts numeric string inputs to integers for position-based operations.
*/
#define _CRT_SECURE_NO_WARNINGS     //Prevents unsafe warnings for the function used inside the code
#define BUFFER_SIZE 80              //The size the buffer can hold from the user input
#define NUM_INPUT_SIZE 10           //Maximum size the input the buffer can hold
#include "fundamentals.h"           //Contain the header file for the fundamentals.h
/*
* Purpose: V1 - It allow the user to input a string values and select a character by its index.
*           It also handles the positions/index that are outside the string length.
*          V2 - This code will measure the string's length entered by the user.
*          V3 - Copies the user-entered string (`source`) into another string (`destination`) after 
*           resetting `destination` each time. 
* Parameters: None
* Return: Void
* Modifies: V1 - buffer1:  The code will run from the string value the user input and remove the newline
*                numInput: The code will run from the numeric value the user input and remove the newline
*                position: This will store the integer value of the position the user will say, after
*                          being converted from the numInput
*           V2 - buffer2: it will store user input
*           V3 - source: Stores the string entered by the user to be copied.
*                destination: Stores the copied string from `source`, with previous values reset each time.
*/
void fundamentals(void) {
    /* Version 1*/
/*  printf("*** Start of Indexing Strings Demo ***\n");
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
    } while (strcmp(buffer1, "q") != 0);        //Repeat until the user quit (types "q")

    printf("*** End of Indexing Strings Demo ***\n");


    /* Version 2 */
/*    printf("*** Start of Measuring String Demo ***\n");
    char buffer2[BUFFER_SIZE];	                //buffer2 will store the user input as a size of buffer
    do {
        printf("Type a string (q - to quit):\n");
        fgets(buffer2, BUFFER_SIZE, stdin);	    //This will ask the user to input the value
        buffer2[strlen(buffer2) - 1] = '\0';	//This will remove any new or extra lines created by user

        //This will calculate and display the length of the string entered by user
        if (strcmp(buffer2, "q") != 0)
            printf("The length of \'%s\' is %d characters\n",
                buffer2, (int)strlen(buffer2));
    } while (strcmp(buffer2, "q") != 0);	    //The code will repeat until the user quit by entring 'q'
    printf("*** End of Measuring String ***\n\n");


    /* Version 3 */
    printf("*** Start of Copying Strings Demo ***\n");
    char destination[BUFFER_SIZE];          //Holds the destination string to copy into
    char source[BUFFER_SIZE];               //Stores the source string entered by the user
    do {
        destination[0] = '\0';              //Reset the destination to be empty.
        printf("Destination string is reset to empty\n");

        //Prompt the user to enter the source string.
        printf("Type the source string (q - to quit):\n");
        fgets(source, BUFFER_SIZE, stdin);  //Get the user's input for the source string
        source[strlen(source) - 1] = '\0';  //Remove the newline character at the end

        //If the user did not type "q", proceed to copy the string to the destination.
        if (strcmp(source, "q") != 0) {
            strcpy(destination, source);    //Copy source string to destination
            printf("New destination string is '%s'\n", destination);  //Display the updated destination string
        }
    } while (strcmp(source, "q") != 0);     //Repeat until the user types "q"

    printf("*** End of Copying Strings Demo ***\n\n");
}