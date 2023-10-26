#include "main.h"
#include <stdio.h>
/**
 * main - Entry point for testing the is_prime_number function.
 *
 * This function tests the is_prime_number function with various input values
 * and prints the results to the standard output.
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

r = is_prime_number(1);
printf("%d\n", r);
r = is_prime_number(1024);
printf("%d\n", r);
r = is_prime_number(16);
printf("%d\n", r);
r = is_prime_number(17);
printf("%d\n", r);
r = is_prime_number(25);
printf("%d\n", r);
r = is_prime_number(-1);
printf("%d\n", r);
r = is_prime_number(113);
printf("%d\n", r);
r = is_prime_number(7919);
printf("%d\n", r);
return (0);
}

