#include <stdio.h>
#include "3-function_like_macro.h"

/**
 * main - Entry point of the program
 *
 * Description: This program demonstrates the use of a function-like macro
 * ABS(x) to compute the absolute value of a number x.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;

i = ABS(-98) * 10;
j = ABS(98) * 10;
printf("%d, %d\n", i, j);
return (0);
}

