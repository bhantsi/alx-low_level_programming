#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Print a name using a function pointer.
 * @name: The name to be printed.
 * @f: A pointer to a function that prints the name.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}

/**
 * print_name_as_is - Print a name as is.
 * @name: The name of the person.
 */
void print_name_as_is(char *name)
{
printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - Print a name in uppercase.
 * @name: The name of the person.
 */
void print_name_uppercase(char *name)
{
unsigned int i;

printf("Hello, my uppercase name is ");
i = 0;
while (name[i])
{
if (name[i] >= 'a' && name[i] <= 'z')
{
putchar(name[i] + 'A' - 'a');
}
else
{
putchar(name[i]);
}
i++;
}
}

