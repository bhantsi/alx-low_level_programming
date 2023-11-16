#include <stdio.h>

/**
 * before_main - Prints a message before main is executed.
 * This function is automatically executed before main.
 */
void __attribute__((constructor)) before_main(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

