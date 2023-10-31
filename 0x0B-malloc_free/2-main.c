#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to test the str_concat function.
 *
 * Description: This program tests the str_concat function by concatenating
 * the strings "Betty " and "Holberton" and then printing the result. It also
 * checks for memory allocation errors.
 *
 * Return: 0 if successful, 1 if memory allocation fails.
 */
int main(void)
{
char *s;

s = str_concat("Betty ", "Holberton");
if (s == NULL)
{
printf("failed\n");
return (1);
}
printf("%s\n", s);
free(s);
return (0);
}

