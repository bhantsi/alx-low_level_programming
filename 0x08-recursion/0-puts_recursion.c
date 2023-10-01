#include <stdio.h>

/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n'); /* Print a newline character when the end of the string is reached */
		return;
	}

	putchar(*s); /* Print the current character */
	_puts_recursion(s + 1); /* Recursively call the function with the next character */
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char str[] = "Puts with recursion!";

	_puts_recursion(str); /* Call the function to print the string recursively */

	return (0);
}

