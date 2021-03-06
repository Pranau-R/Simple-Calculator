/*

Module: main.c

Function:
    To display an user interactive Menu for simple calculator using switch cases.

Copyright notice:
    This file copyright (C) 2022 by

    MCCI Corporation
    3520 Krums Corners Road
    Ithaca, NY 14850

    An unpublished work. All rights reserved.

    This file is proprietary information, and may not be disclosed or
    copied without the prior permission of MCCI Corporation.

Author:
    Pranau R, MCCI Corporation   March 2022

*/

#include <stdio.h>
#include "arith.h"

/****************************************************************************\
|
|   Global Variables.
|
\****************************************************************************/

float num1, num2, result;

/****************************************************************************\
|
|   Main Function.
|
\****************************************************************************/

/*

Name: main()

Function:
    To display an user interactive Menu for simple calculator using switch cases.

Definition:
    void main (void);

Returns:
    Functions returning type void: nothing.

*/

void main()
    {
    int ch;

    printf("\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("This is simpleCalculator.exe v1.1.0\n");
    printf("It can perform basic arithmetic operations for any two given numbers.\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("\n");

    printf("\nEnter Number a: \n");
    scanf("%f", &num1);

    printf("\nEnter Number b: \n");
    scanf("%f", &num2);
 
    printf("======== MENU ======== \n");
    printf("1. Addition: \n");
    printf("2. Subtraction: \n");
    printf("3. Multiplication: \n");
    printf("4. Division: \n");
    printf("5. Modify Input: \n");
    printf("6. Exit: \n");
    printf("\n");

    while(1)
        {
        printf("\nEnter the Choice: \n");
        scanf("%d", &ch);

        switch(ch)
            {
            case 1:
                {
                printf("---You selected Addition---\n");
                add();
                printf("The addition of two numbers is: %.2f\n", result);
                break;
                }
            case 2:
                {
                printf("---You selected Subtraction---\n");
                sub();
                printf("The subtraction of two numbers is: %.2f\n", result);
                break;
                }
            case 3:
                {
                printf("---You selected Multiplication---\n");
                mul();
                printf("The Multiplication of two numbers is: %.2f\n", result);
                break;
                }
            case 4:
                {
                printf("---You selected Division---\n");
                division();
                printf("The Division of two numbers is: %.2f\n", result);
                break;
                }
            case 5:
                {
                printf("---You selected modification---\n\n");
                printf("\nEnter Number a: \n");
                scanf("%f", &num1);

                printf("\nEnter Number b: \n");
                scanf("%f", &num2);
                break;
                }
            case 6:
                return;

            default:
                printf("Invalid Entry!!!\n\n");
            }
        }
    }