/*
* Author 1: Vadeeha Vadeeha, vvadeeha@myseneca.ca, 113978241
* Author2: Michaela Ryza Cruz , mrcruz3@myseneca.ca, 110464245
* Date: Monday, November 25, 2024
* Course: Computer Principles for Programmers           Project: Group Final Project
* Purpose: The purpose of the main is to allow the user to run all the modules that have been made
*/

#define _CRT_SECURE_NO_WARNINGS //Prevents unsafe warnings for the function used inside the code
#include <stdio.h>              
#include "fundamentals.h"       //Contain the header file for the fundamentals.h
#include "manipulating.h"       //Contain the header file for the manipulating.h
#include "converting.h"         //Contain the header file for the converting.h
#include "tokenizing.h"         //Contain the header file for the tokenizing.h

/*
* Purpose: The purpose of the main is to allow the user to run all the modules that
*           have been made in the header
* Parameters: None (handles standard input)
* Return: int-returns 0, means it run successfully
* Modifies: buff: An array to store user input
*           switch: It read the input form the buff and present the selected option
*           fundamentals(): The code is converting the numeric string value entered by the user into integer
*           manipulating(): Converting the string using "strcat" and takes two input from the user and concatenates them.
*           converting(): Converting user numeric strings values into an integers and printing the result until the user types "q" for quitting.
*           tokenizing(): The code is for breaking a sentence or an string written by a user into single
*/

//Main function that will play all of the modules 
int main(void) {
    char buff[10];  //Buffer that will store users input for selecting from the modules

    //Main loops that will run until the user enters '0' to exit
    do {
        //Displaying the option to the user to select it from
        printf("1 - Fundamentals\n");
        printf("2 - Manipulating\n");
        printf("3 - Converting\n");
        printf("4 - Tokenizing\n");
        printf("0 - Exit\n");
        printf("Which module to run? \n");

        fgets(buff, 10, stdin); //Getting user's input, with a limit of 9 charters

        //It will determ which module to present based on what number user inputs
        switch (buff[0]) {
        case '1':           // This is a Fundamentals module
            fundamentals();
            break;
        case '2':           // This is a Manipulating module
            manipulating();
            break;
        case '3':           // This is a Converting module
            converting();
            break;
        case '4':           // This is a Tokenizing module
            tokenizing();
            break;
        case '0':           // If the user input '0', then it will exit the loop
            printf("Exiting the program.\n");
            break;
        default:            // This is handle the invalid charters if user inputs those
            printf("Invalid option, please try again.\n");
            break;
        }
    } while (buff[0] != '0');   // This code will run until the user exit by entering '0'
    return 0;
}