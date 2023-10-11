#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using a given printing function
 * @name: name to print
 * @f: pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
    if (name && f)
    {
    f(name);
    }
}

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 */
void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - print a name in uppercase
 * @name: name of the person
 */
void print_name_uppercase(char *name)
{
    printf("Hello, my uppercase name is ");
    while (*name)
    {
        if (*name >= 'a' && *name <= 'z')
        {
            putchar(*name - 'a' + 'A');
        }
        else
        {
            putchar(*name);
        }
        name++;
    }
    printf("\n");
}

