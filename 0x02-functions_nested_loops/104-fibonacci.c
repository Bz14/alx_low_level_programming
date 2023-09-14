#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long a = 1;
	long b = 2;
	long num;
	int count = 2;

	printf("%ld, %ld, ", a, b);
	while (count <= 98)
	{
		num = a + b;
		printf("%ld", num);
		a = b;
		b = num;
		if (count != 98)
		{
			printf(", ");
		}
		count++;
	}
	return (0);
}
