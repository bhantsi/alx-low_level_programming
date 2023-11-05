#include <stdio.h>
/**
 * main - Entry point of the program to print the lowercase alphabet.
 *
 * Description: This program uses the 'putchar' function to print the
 * lowercase alphabet from 'a' to 'z', followed by a newline character.
 * It initializes a character variable 'letter' to 'a' and iterates through
 * the alphabet, incrementing 'letter' in each iteration until it reaches 'z'.
 *
 * Return: Always returns 0 to indicate successful execution.
 */

int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}

putchar('\n');

return (0);
}

