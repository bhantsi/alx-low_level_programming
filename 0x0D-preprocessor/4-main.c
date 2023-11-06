#include <stdio.h>
#include "4-sum.h"

/**
 * main - Entry point of the program
 *
 * Description: This program demonstrates the use of a function-like macro
 * SUM(x, y) to compute the sum of two numbers, x and y.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int s;

s = SUM(98, 1024);
printf("%d\n", s);
return (0);
}

