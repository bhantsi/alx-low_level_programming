#include <stdlib.h>

/**
 * create_array - Allocate array of characters & initialize with a character
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: return NULL if malloc fails Otherwise, return pointer ot
 * allocated array
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
return (NULL);

array = (char *) malloc(size * sizeof(char));

if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
array[i] = c;

return (array);
}

