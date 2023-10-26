#include "main.h"

int sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of n, or -1 if it doesn't have one.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (0);

return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - Recursive helper function to find the square root.
 * @n: The number to calculate the square root of.
 * @i: The current candidate square root.
 *
 * Return: The square root of n, or -1 if it's not a natural square.
 */
int sqrt_helper(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);

return (sqrt_helper(n, i + 1));
}

