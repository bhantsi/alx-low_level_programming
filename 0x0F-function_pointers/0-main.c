#include <stdio.h>
#include "function_pointers.h"
/**
 * main - Entry point of the program
 *
 * This program demonstrates the use of function pointers to print names
 * using two different printing functions.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
print_name("Bob", print_name_as_is);
print_name("Bob Dylan", print_name_uppercase);
return (0);
}

