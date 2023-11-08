#include "function_pointers.h"

/**
 * int_index - Search for an integer in an array.
 * @array: The array to search in.
 * @size: The number of elements in the array.
 * @cmp: A pointer to a function used to compare values.
 *
 * Return: The index of the first element for which the cmp function
 * does not return 0. If no element matches or if size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
if (array != NULL && cmp != NULL && size > 0)
{
int i;
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
}
return (-1);
}

