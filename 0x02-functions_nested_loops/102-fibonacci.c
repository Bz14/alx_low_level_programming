#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long a = 1;
	long b = 2;
	long num;
	int count = 2;

	printf("%d, %d, ", a, b);
	while (count <= 50)
	{
		num = a + b;
		printf("%d", num);
		a = b;
		b = num;
		if (count != 50)
		{
			printf(", ");
		}
		count++;
	}
	return (0);
}
