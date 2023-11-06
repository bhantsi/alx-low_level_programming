#include "0-object_like_macro.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program demonstrates the use of a macro
 * named SIZE, which is an abbreviation for the token 1024.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int s;

s = 98 + SIZE;
printf("%d\n", s);
return (0);
}

