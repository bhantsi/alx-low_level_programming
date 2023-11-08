#include <stdio.h>
#include "function_pointers.h"

/**
* main - check the code
* Description: A simple program to print name to the console
* Return: Always 0
**/

int main(void)
{
print_name("Bob", print_name_as_is);
print_name("Bob Dylan", print_name_uppercase);
printf("\n");

return (0);
}

