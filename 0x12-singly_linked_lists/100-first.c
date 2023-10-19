#include <stdio.h>
/**
 * print_string - prints a string
 */
void print_string(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
/**
 * pre_main -execute before main
 */
void __attribute__((constructor)) pre_main()
{
	print_string();
}

