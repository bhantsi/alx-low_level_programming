#include "function_pointers.h"

/**
 * array_iterator - Execute a function on each element of an array.
 * @array: The array to operate on.
 * @size: The size of the array.
 * @action: A pointer to the function to execute on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}

