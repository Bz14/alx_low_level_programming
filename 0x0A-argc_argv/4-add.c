#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - sum of numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: Always success(0)
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
