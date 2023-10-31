#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @ac: The argument count.
 * @av: An array of strings (the arguments).
 *
 * Description: This program takes commandline arguments & uses the argstostr
 * function to concatenate them into single string then print the concatenated
 * string to the standard output and frees the allocated memory.
 *
 * Return: 0 if successful, 1 if there was an error.
 */
int main(int ac, char *av[])
{
char *s;

s = argstostr(ac, av);
if (s == NULL)
{
return (1);
}
printf("%s", s);
free(s);
return (0);
}

