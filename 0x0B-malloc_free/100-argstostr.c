#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: An array of strings (the arguments).
 *
 * Return: A pointer to the concatenated string or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
char *concatenated;
int i, len, total_len = 0;
int k = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
len = 0;
while (av[i][len] != '\0')
{
len++;
}
total_len += len + 1;
}

concatenated = (char *)malloc(sizeof(char) * total_len + 1);

if (concatenated == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
len = 0;
while (av[i][len] != '\0')
{
concatenated[k] = av[i][len];
len++;
k++;
}
concatenated[k] = '\n';
k++;
}

concatenated[k] = '\0';

return (concatenated);
}

