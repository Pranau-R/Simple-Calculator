/*

Module: add.c

Function:
    To add user entered two numbers and store the value in result.

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
|   Function.
|
\****************************************************************************/

/*

Name: add()

Function:
    To add user entered two numbers and store the value in result.

Definition:
    float add (float num1, float num2);
    
Parameter and Arguments:
    float num1 and float num2 are two arguments used to pass float value inside this function.

Description:
    It is a float function and returns integer of float type.

Returns:
    Functions returning type float: integers.

*/

float add (float num1, float num2)
    {
    float result;

    printf("---You Selected Addition---\n");

    printf("Enter a Number: ");
    scanf("%f", &num1);

    printf("Enter another Number: ");
    scanf("%f", &num2);

    result = num1 + num2;

    printf("The addition of two numbers is: %.2f\n", result);
    }