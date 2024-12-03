// TOKENIZING MODULE SOURCE
/*
* Author 1: Vadeeha Vadeeha, vvadeeha@myseneca.ca, 113978241
* Author2: Michaela Ryza Cruz , mrcruz3@myseneca.ca, 110464245
* Date: Monday, November 25, 2024
* Course: Computer Principles for Programmers           Project: Group Final Project
* Purpose: The code is for breaking a sentence or an string written by a user into single
*         words based on the spaces
*/
#define _CRT_SECURE_NO_WARNINGS //Prevents unsafe warnings for the function used inside the code
#define BUFFER_SIZE 300         //The size the buffer can hold from the user input
#include "tokenizing.h"         // Contain the header file for the tokenizing.h
/*
* Purpose: The code is for breaking a sentence or an string written by a user into single
*          words based on the spaces
* Parameters: None (handles standard input)
* Return: void
* Modifies: words: This will run from the user input and removes any newline characters
*           nextWord: This a pointer
*           wordsCounter: This will count the words
*/
void tokenizing(void) {
    /* Version 1*/
    printf("*** Start of Tokenizing Words Demo ***\n");
    char words[BUFFER_SIZE];    //The word variable will store the user's input
    char* nextWord = NULL;      //nextWord is a pointer is used here to store each word address
    int wordsCounter;           //wordsCounter will counter to track the numbers of words

    do {
        printf("Type a few words separated by space (q - to quit):\n");
        fgets(words, BUFFER_SIZE, stdin);   //Reading what the user have inputted 
        words[strlen(words) - 1] = '\0';    //Remove any extra lines from the code

        //Creating a loop to see if the user when the user type "q" to quit
        if (strcmp(words, "q") != 0) {
            nextWord = strtok(words, " ");  //It determines the first string
            wordsCounter = 1;               //Initializing the counter to count the word

            //Loop for going through all of the stored words
            while (nextWord) {
                printf("Word #%d is '%s'\n", wordsCounter++, nextWord); //Display all of the words
                nextWord = strtok(NULL, " ");   //Determine the next words
            }
        }
    } while (strcmp(words, "q") != 0);  //repeat everything until the user input "q" to quit 

    printf("*** End of Tokenizing Words Demo ***\n\n");
}