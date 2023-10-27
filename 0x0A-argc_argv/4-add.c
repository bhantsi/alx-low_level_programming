#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_positive_integer - Check if a string is a positive integer.
 * @str: The string to check.
 *
 * Return: true if it's a positive integer, false otherwise.
 */
bool is_positive_integer(const char *str)
{
if (str == NULL || str[0] == '\0')
return (false);

int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] < '0' || str[i] > '9')
return (false);
}

return (true);
}

/**
 * main - Adds positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 for success, 1 for error.
 */
int main(int argc, char *argv[])
{
int sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

int i;
for (i = 1; i < argc; i++)
{
if (is_positive_integer(argv[i]))
{
int number = atoi(argv[i]);
sum += number;
}
else
{
printf("Error\n");
return (1);
}
}

printf("%d\n", sum);
return (0);
}

