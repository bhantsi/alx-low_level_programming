#include "main.h"
/**
 * factorial - Calculate the factorial of a number.
 * @n: The number for which to calculate the factorial.
 *
 * This function takes an integer 'n' as input and returns the factorial of 'n'
 * If 'n' is negative, it returns -1 to indicate an error. The factorial of a
 * non-negative integer 'n' is computed using recursion.
 *
 * Return: The factorial of 'n' or -1 if 'n' is negative.
 */

int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}

