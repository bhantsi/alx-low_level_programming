#include "main.h"
#include <stdio.h>
/**
 * main - Entry point for testing the factorial function.
 *
 * This function serves as the entry point for testing the 'factorial' function
 * which calculates the factorial of a number. It test the 'factorial' function
 * with various input values and prints the results to the standard output.
 *
 * Return: Always returns 0 to indicate successful program execution.
 */

int main(void)
{
int r;

r = factorial(1);
printf("%d\n", r);
r = factorial(5);
printf("%d\n", r);
r = factorial(10);
printf("%d\n", r);
r = factorial(-1024);
printf("%d\n", r);

return (0);
}

