#include "main.h"

/**
 * is_prime_recursive - Helper function to check if a number is prime.
 * @n: The number to check for primality.
 * @i: The current divisor being tested.
 *
 * Return: 1 if prime, 0 if not.
 */
int is_prime_recursive(int n, int i)
{
if (n <= 1)
return (0);
if (i * i > n)
return (1);
if (n % i == 0)
return (0);
return (is_prime_recursive(n, i + 1));
}

/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to check for primality.
 *
 * Return: 1 if prime, 0 if not.
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_prime_recursive(n, 2));
}

