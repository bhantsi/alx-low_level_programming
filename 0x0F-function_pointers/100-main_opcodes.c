#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Print opcodes of the program.
 * @filename: The name of the binary file.
 * @num_bytes: Number of opcodes to print.
 */
void print_opcodes(char *filename, int num_bytes)
{
if (num_bytes <= 0)
{
printf("Error\n");
exit(2);
}

FILE *file = fopen(filename, "rb");
if (file == NULL)
{
printf("Error\n");
exit(1);
}

unsigned char opcode;
int bytes_read = 0;
while (bytes_read < num_bytes)
{
fread(&opcode, 1, 1, file);
printf("%02x", opcode);
if (bytes_read < num_bytes - 1)
{
printf(" ");
}
bytes_read++;
}
printf("\n");

fclose(file);
}

/**
* main - Entry point of the program.
* @argc: The number of command-line arguments.
* @argv: An array of strings containing the command-line arguments.
*
* Return: 0 on success, or specific error codes on failure.
*/
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Usage: %s <number_of_bytes>\n", argv[0]);
return (1);
}

int num_bytes = atoi(argv[1]);
print_opcodes(argv[0], num_bytes);

return (0);
}

