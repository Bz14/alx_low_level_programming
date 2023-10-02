#include <stdio.h>
/**
 * main - print number of argument
 * @argc: numeber of argument
 * @argv: the arguments
 * Return: Always success(0)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
