#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int num;
	int count = 2;

	printf("%d, %d, ", a, b);
	while (count <= 98)
	{
		num = a + b;
		printf("%d", num);
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
