#include <stdio.h>

/**
 * main - Entry point of the program to print the lowercase
 * alphabet excluding 'e' and 'q'.
 *
 * Description: This program uses the 'putchar' function to
 * print the lowercase alphabet
 * ('a' to 'z'), excluding the letters 'e' and 'q', followed by
 * a newline character.
 *
 * Return: Always returns 0 to indicate successful execution.
 */

int main(void)
{

char letter = 'a';

while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
letter++;
}

return (0);
}
