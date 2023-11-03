#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two positive numbers
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, 98 on failure
 */

int is_valid_digit(char *str);
int str_len(char *str);
int *initialize_result_array(int len);
void multiply_numbers(char *num1, char *num2, int len1, int len2, int *result);
void print_result(int *result, int len);

int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (98);
}

if (!is_valid_digit(argv[1]) || !is_valid_digit(argv[2]))
{
printf("Error\n");
return (98);
}

char *num1 = argv[1];
char *num2 = argv[2];

int len1 = str_len(num1);
int len2 = str_len(num2);

int total_len = len1 + len2;
int *result = initialize_result_array(total_len);

multiply_numbers(num1, num2, len1, len2, result);

print_result(result, total_len);

free(result);

return (0);
}

int *initialize_result_array(int len)
{
int *arr = malloc(sizeof(int) * len);

if (arr == NULL)
{
return (NULL);
}

int i;

for (i = 0; i < len; i++)
{
arr[i] = 0;
}

return (arr);
}

void multiply_numbers(char *num1, char *num2, int len1, int len2, int *result)
{
int i, j, carry;

for (i = len1 - 1; i >= 0; i--)
{
carry = 0;

for (j = len2 - 1; j >= 0; j--)
{
int n1 = num1[i] - '0';
int n2 = num2[j] - '0';

int sum = (n1 * n2) + result[i + j + 1] + carry;

result[i + j + 1] = sum % 10;
carry = sum / 10;
}

result[i + j + 1] += carry;
}
}

void print_result(int *result, int len)
{
int i;
int start = 0;

for (i = 0; i < len; i++)
{
if (result[i] != 0)
{
start = 1;
}

if (start)
{
_putchar(result[i] + '0');
}
}

if (!start)
{
_putchar('0');
}

_putchar('\n');
}

int str_len(char *str)
{
int len = 0;

while (str[len] != '\0')
{
len++;
}

return (len);
}

int is_valid_digit(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (str[i] < '0' || str[i] > '9')
{
return (0);
}
i++;
}

return (1);
}

