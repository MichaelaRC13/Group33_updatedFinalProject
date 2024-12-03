// TOKENIZING MODULE SOURCE
/*
* Author 1: Michaela Ryza Cruz , mrcruz3@myseneca.ca, 110464245
* Date: V1 - Monday, November 25, 2024
*       V2 - Friday, November 29, 2024
*       V3 - Monday, December 02, 2024
* Course: Computer Principles for Programmers           Project: Group Final Project
* Purpose: This code provides functions for processing strings by breaking them into individual words 
*          based on spaces or counting and separating phrases based on commas.
*/
#define _CRT_SECURE_NO_WARNINGS //Prevents unsafe warnings for the function used inside the code
#define BUFFER_SIZE 300         //The size the buffer can hold from the user input
#include "tokenizing.h"         // Contain the header file for the tokenizing.h
/*
* Purpose: V1 - The code is for breaking a sentence or an string written by a user into single
*               words based on the spaces
*          V2 - The code will count how many phrases the user entered in a string, which are
*			    separated by the commas and then print the answer.
*          V3 - This code splits a sentence into separate parts based on periods and prints each sentence.
* Parameters: None (handles standard input)
* Return: void
* Modifies: V1 - words: This will run from the user input and removes any newline characters
*                nextWord: This a pointer
*                wordsCounter: This will count the words
*           V2 - phrases: This is an array that will hold user's input
*			     nextPhrase: This is a pointer will be used to store the address of each token
*			     phraseCounter: This is a counter that will keep track of how many phrases are in a string
*			     strtok: This is a function that will replace the commas with the null terminatore in a phrase
*			             to separate them.
*           V3 - sentences: This variable stores the sentence input by the user.
*                nextSentence: This pointer holds the address of each sentence token.
*                sentencesCounter: This counter keeps track of how many sentences are in the string.
*/
void tokenizing(void) {
    /* Version 1*/
/*    printf("*** Start of Tokenizing Words Demo ***\n");
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


    /* Version 2 */
/*    printf("*** Start of Tokenizing Phrase Demo ***\n");
    char	phrases[BUFFER_SIZE];	//phrases will store user input with buffer limit
    char* nextPhrase = NULL;		//nextPhrase is a pointer that will hold each tokenized phrase
    int		phrasesCounter;			//phrasesCounter is a counter that will keep track of the numbers of phrases
    do {
        //This will tell the user to enter phrases that are separated by commas
        printf("Type a few phrases separated by comma (q - to quit):\n");
        fgets(phrases, BUFFER_SIZE, stdin);	//This will get the user input
        phrases[strlen(phrases) - 1] = '\0';	//This will remove any new or extra lines

        //If the user doesn't enter 'q' the code will continue
        if ((strcmp(phrases, "q") != 0)) {
            nextPhrase = strtok(phrases, ",");	//This will tokenize the string based on commas
            phrasesCounter = 1;		//This is initializing the phraseCounter to 1

            //This will loop through all the tokens and then print the result
            while (nextPhrase) {
                printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);	//This will print the first token
                nextPhrase = strtok(NULL, ",");	//This will get the next token

            }
        }
    } while (strcmp(phrases, "q") != 0); //The code will run until the user enter 'q' to quit
    printf("*** End of Tokenizing Phrases Demo ***\n\n");


    /* Version 3 */
    printf("*** Start of Tokenizing Sentences Demo ***\n");
    char sentences[BUFFER_SIZE];                   //Holds the user's input sentence
    char* nextSentence = NULL;                     //Pointer for storing the address of each sentence
    int sentencesCounter;                          //Counter for tracking the number of sentences
    do {
        printf("Type a few sentences separated by dot (q - to quit):\n");
        fgets(sentences, BUFFER_SIZE, stdin);      //Get the user's few sentences input
        sentences[strlen(sentences) - 1] = '\0';   //Removes any newline characters

        //Process the input if it's not "q"
        if (strcmp(sentences, "q") != 0) {
            nextSentence = strtok(sentences, ".");  //Tokenizes the string by periods
            sentencesCounter = 1;                   //Initializes the sentence counter

            //Loops through all the tokens (sentences) and prints each one
            while (nextSentence) {
                printf("Sentence #%d is '%s'\n", sentencesCounter++, nextSentence);  //Display each sentence
                nextSentence = strtok(NULL, ".");   //Get the next sentence token
            }
        }
    } while (strcmp(sentences, "q") != 0);          //Repeat until the user types "q"
    printf("*** End of Tokenizing Sentences Demo ***\n\n");
}