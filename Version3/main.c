// MAIN
/*
* Author 1: Michaela Ryza Cruz , mrcruz3@myseneca.ca, 110464245
* Date: Monday, November 25, 2024
* Course: Computer Principles for Programmers           Project: Group Final Project
* Purpose: The main function allows the user to run all the modules made in the project
*/

#define _CRT_SECURE_NO_WARNINGS //Prevents unsafe warnings for the function used inside the code
#include <stdio.h>              
#include "fundamentals.h"       //Contain the header file for the fundamentals.h
#include "manipulating.h"       //Contain the header file for the manipulating.h
#include "converting.h"         //Contain the header file for the converting.h
#include "tokenizing.h"         //Contain the header file for the tokenizing.h

/*
* Purpose: The main function provides a menu interface to allow users to run different modules.
* Parameters: None (handles standard input)
* Return: int - returns 0, indicate successful execution
* Modifies: buff: An array to store user input
*           switch: Determines which module to execute based on user input
*           fundamentals(): Runs the Fundamentals module
*           manipulating(): Runs the Manipulating module
*           converting(): Runs the Converting module
*           tokenizing(): Runs the Tokenizing module
*/

int main(void) {
    char buff[10];              //Store user's input for module selection

    //Main loops that runs until the user enters '0' to exit
    do {
        //Display all available options
        printf("1 - Fundamentals\n");
        printf("2 - Manipulating\n");
        printf("3 - Converting\n");
        printf("4 - Tokenizing\n");
        printf("0 - Exit\n");
        printf("Which module to run? \n");

        fgets(buff, 10, stdin); //Get user's input (limit to 9 characters)

        //Determine which module to run based on user input
        switch (buff[0]) {
        case '1':               //Run Fundamentals module
            fundamentals();
            break;
        case '2':               //Run Manipulating module
            manipulating();
            break;
        case '3':               //Run Converting module
            converting();
            break;
        case '4':               //Run Tokenizing module
            tokenizing();
            break;
        case '0':               //Exit the program
            printf("Exiting the program.\n");
            break;
        default:                //Handle invalid inputs
            printf("Invalid option, please try again.\n");
            break;
        }
    } while (buff[0] != '0');   //Repeat until the user selects '0' to exit
    return 0;
}