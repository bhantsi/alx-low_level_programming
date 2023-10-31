#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to test the _strdup function.
 *
 * Description: This program tests the _strdup function by creating a
 * duplicate of the string "ALX SE" and then prints it. It also checks for
 * memory allocation errors.
 *
 * Return: 0 if successful, 1 if memory allocation fails.
 */
int main(void)
{
char *s;

s = _strdup("ALX SE");
if (s == NULL)
{
printf("failed to allocate memory\n");
return (1);
}
printf("%s\n", s);
free(s);
return (0);
}

