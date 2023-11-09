#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Print anything.
 * @format: A list of types of arguments passed to the function.
 * c: char
 * i: integer
 * f: float
 * s: char* (if the string is NULL, print (nil) instead)
 * Any other char should be ignored.
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str;
int num;
double flo;

va_start(args, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
num = va_arg(args, int);
printf("%d", num);
break;
case 'f':
flo = va_arg(args, double);
printf("%f", flo);
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
break;
default:
i++;
continue;
}
if (format[i + 1] != '\0')
printf(", ");
i++;
}
va_end(args);
printf("\n");
}

