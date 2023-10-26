#include "main.h"
#include <string.h>

int is_palindrome_recursive(char *s, int start, int end);

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 * Return: 1 if it's a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
int length = strlen(s);

if (length <= 1)
{
return (1);
}

return (is_palindrome_recursive(s, 0, length - 1));
}

/**
 * is_palindrome_recursive - Helper function to check if  string is palindrome
 * @s: The string to check
 * @start: The start index
 * @end: The end index
 * Return: 1 if it's a palindrome, 0 if not
 */
int is_palindrome_recursive(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
if (s[start] != s[end])
{
return (0);
}
return (is_palindrome_recursive(s, start + 1, end - 1));
}

