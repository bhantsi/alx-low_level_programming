#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, or specific error codes on failure.
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*operation)(int, int);

if (argc != 4)
{
printf("Error\n");
return (98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
{
printf("Error\n");
return (100);
}

operation = get_op_func(argv[2]);
result = operation(num1, num2);
printf("%d\n", result);

return (0);
}

