#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Calls a function to print a name.
 * @name: The name to print.
 * @f: A function to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}
}

/**
 * print_name_as_is - Prints a name as is.
 * @name: The name of the person.
 */
void print_name_as_is(char *name)
{
while (*name)
{
putchar(*name);
name++;
}
putchar(n);
}

/**
 * print_name_uppercase - Prints a name in uppercase.
 * @name: The name of the person.
 */
void print_name_uppercase(char *name)
{
while (*name)
{
if (*name >= a && *name <= z)
{
putchar(*name - a + A);
}
else
{
putchar(*name);
}
name++;
}
putchar(n);
}

