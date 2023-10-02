#include <stdio.h>
/**
 * main - print the name of the file
 * @argc: number of argument
 * @argv: array of pointers
 * Return: Always success (0)
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
