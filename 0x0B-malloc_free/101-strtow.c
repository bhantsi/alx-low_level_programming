#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int is_separator(char c, char *separators);
int count_words(char *str, char *separators);
char **split_string(char *str, char *separators, int words);
void free_memory(char **tab, int count);

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words).
 * The last element of the returned array should be NULL.
 * Returns NULL if str == NULL or str == "" or if it fails.
 */
char **strtow(char *str)
{
char *separators = " \t\n";
int words, i;
char **tab;

if (str == NULL || *str == '\0')
return (NULL);

words = count_words(str, separators);
if (words == 0)
return (NULL);

tab = split_string(str, separators, words);
if (tab == NULL)
return (NULL);

for (i = 0; i < words; i++)
{
if (tab[i] == NULL)
{
free_memory(tab, i);
return (NULL);
}
}

tab[i] = NULL;
return (tab);
}

/**
 * is_separator - Checks if a character is a separator.
 * @c: The character to check.
 * @separators: The list of separators.
 *
 * Return: 1 if the character is a separator, 0 otherwise.
 */
int is_separator(char c, char *separators)
{
while (*separators)
{
if (*separators == c)
return (1);
separators++;
}
return (0);
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words in.
 * @separators: The list of separators.
 *
 * Return: The number of words.
 */
int count_words(char *str, char *separators)
{
int words = 0, in_word = 0;

while (*str)
{
if (!is_separator(*str, separators))
{
if (!in_word)
{
in_word = 1;
words++;
}
}
else
{
in_word = 0;
}
str++;
}
return (words);
}

/**
 * split_string - Splits a string into words.
 * @str: The string to split.
 * @separators: The list of separators.
 * @words: The number of words in the string.
 *
 * Return: An array of strings (words).
 */
char **split_string(char *str, char *separators, int words)
{
char **tab, *word;
int i = 0, in_word = 0;

tab = malloc((words + 1) * sizeof(char *));
if (tab == NULL)
return (NULL);

while (*str)
{
if (!is_separator(*str, separators))
{
if (!in_word)
{
in_word = 1;
word = str;
i++;
}
}
else
{
if (in_word)
{
in_word = 0;
tab[i - 1] = malloc((str - word + 1) * sizeof(char));
if (tab[i - 1] == NULL)
{
free_memory(tab, i - 1);
return (NULL);
}
while (word < str)
{
tab[i - 1][word - str - 1] = *word;
word++;
}
tab[i - 1][word - str - 1] = '\0';
}
}
str++;
}
return (tab);
}

/**
 * free_memory - Frees memory allocated for the array of strings.
 * @tab: The array of strings.
 * @count: The number of strings.
 *
 * Return: Nothing.
 */
void free_memory(char **tab, int count)
{
int i;

for (i = 0; i < count; i++)
free(tab[i]);
free(tab);
}

