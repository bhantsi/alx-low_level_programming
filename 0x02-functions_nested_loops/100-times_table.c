#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number up to which the times table should be printed.
 *
 * Description: If n is greater than 15 or less than 0, nothing is printed.
 * main - check the code.
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;  /* Do not print anything if n is out of range. */

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			int result = i * j;

			if (j == 0)

				printf("%d", result);
			else
				printf(", %3d", result);
		}
		printf("\n");
	}
}

int main(void)
/**
* main - Entry point
*
* Description: This is the Entry point of the program, it calls the
* print_times_table table function with values of 'n' to print
*
*/
{
	print_times_table(3);
	printf("\n");
	print_times_table(5);
	printf("\n");
	print_times_table(98);
	printf("\n");
	print_times_table(12);
	return (0);
}

