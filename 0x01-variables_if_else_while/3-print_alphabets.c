#include <stdio.h>

/**
 * main - Entry point of the program to print the alphabet
 * in lowercase and uppercase.
 *
 * Description: This program uses the 'putchar'
 * function to print the lowercase alphabet
 * from 'a' to 'z', followed by the uppercase alphabet from 'A'
 * to 'Z', and then a newline character.
 * It utilizes two separate 'while' loops to iterate
 * through both sets of characters.
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

letter = 'A';

while (letter <= 'Z')
{
putchar(letter);
letter++;
}

putchar('\n');

return (0);
}

