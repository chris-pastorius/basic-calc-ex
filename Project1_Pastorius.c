/*
 * File: Project 1
 * Part B
 * Author: Chris Pastorius
 * Class: CIT-145-Z01
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int num1, num2, operator, answer;

    printf("%s", "Enter the operation you'd like to perform:  \n");
    printf("%s", "1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n5 for remainder\n");
    scanf("%d", &operator); // Reads in operator

    printf("\nEnter first number: ");
    scanf("%d", &num1); // Reads in first number

    printf("Enter second number: ");
    scanf("%d", &num2); // Reads in second number
    
    puts(""); // Puts a blank line

    if (operator == 1) { // Adds two numbers 
        answer = num1 + num2;
        printf("Sum is %d\n", answer);
    }
    if (operator == 2) { // Subtracts two numbers 
        answer = num1 - num2;
        printf("Difference is %d\n", answer);
    }
    if (operator == 3) { // Multiplies two numbers 
        answer = num1 * num2;
        printf("Product is %d\n", answer);
    }
    if (operator == 4) { // Divides two numbers 
        if (num2 == 0) { // If the user tries to divide by 0
            printf("Cannot divide by 0.");
            printf("\nProgram ending ...");
            printf("\nYou will need to restart the program to use the calculator.\n");
            return 1;
        }
        answer = num1 / num2;
        printf("Quotient is %d\n", answer);
    }
    if (operator == 5) { // Gets the remainder of two numbers 
        answer = num1 % num2;
        printf("Remainder is %d\n", answer);
    }

// --------------- If operator input is not 1-5 (INVALID) ----------------- //
    if (operator == 0) {
        printf("\nIncorrect operation input");
        printf("\nProgram ending ...");
        printf("\nYou will need to restart program to use the calculator.\n");
        return 1;
    }
    if (operator > 5) {
        printf("\nIncorrect operation input");
        printf("\nProgram ending ...");
        printf("\nYou will need to restart program to use the calculator.\n");
        return 1;
    }
// ------------------------------------------------------------------------- //

    return 0;
}
