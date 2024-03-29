#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Calculate the sum of its parameters.
 * @n: Number of parameters.
 * @...: Variable arguments.
 *
 * Return: Sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;

if (n == 0)
return (0);

va_list args;
va_start(args, n);

for (i = 0; i < n; ++i)
sum += va_arg(args, int);

va_end(args);

return (sum);
}

