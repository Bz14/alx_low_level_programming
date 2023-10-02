#include <stdio.h>
#include <stdlib.h>
/**
 * main - print minimum number of change
 * @argc: number of argument
 * @argv: arguments
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int num, mod = 0, j;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num = atoi(argv[1]);
		if (num < 0)
		{
			printf("%d\n", 0);
			return (0);
		}
		for (j = 0; j < 5; j++)
		{
			if (cents[j] <= num)
			{
				mod += num / cents[j];
				num %= cents[j];
			}
			if (num == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", mod);
	return (0);
}
