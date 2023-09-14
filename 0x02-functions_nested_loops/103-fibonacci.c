#include <stdio.h>
/**
 * main -Entry Point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	long a = 1;
	long b = 2;
	long num = 0;
	long sum = b;

	while (num <= 4000000)
	{
		num = a + b;
		if (num % 2 == 0)
			sum += num;
		a = b;
		b = num;
	}
	printf("%ld", sum);
	return (0);
}
