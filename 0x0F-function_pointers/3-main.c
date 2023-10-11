#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - check function pointers
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, res = 0;
	char *c;

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	c = argv[2];
	if (*c != '+' && *c != '-' && *c != '*' && *c != '/' && *c != '%')
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((*c == '/' || *c == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = get_op_func(c)(num1, num2);
	printf("%d\n", res);
	return (0);
}
