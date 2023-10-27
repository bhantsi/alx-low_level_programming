#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 (Always)
 */
int main(int argc, char *argv[])
{
if (argc > 0 && argv[0] != NULL)
{
printf("%s\n", argv[0]);
}
return (0);
}

