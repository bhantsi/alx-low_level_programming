#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>
/**
 * print_name - Print a name using a function pointer.
 * @name: The name to be printed.
 * @f: A pointer to a function that prints the name.
 */
void print_name(char *name, void (*f)(char *));

/**
 * print_name_as_is - Print a name as is.
 * @name: The name of the person.
 */
void print_name_as_is(char *name);

/**
 * print_name_uppercase - Print a name in uppercase.
 * @name: The name of the person.
 */
void print_name_uppercase(char *name);
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif /* FUNCTION_POINTERS_H */

