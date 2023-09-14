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
	long sum = 0;

	while (num <= 400000)
	{
		num = a + b;
		if (num % 2 == 0)
			sum += num;
		a = b;
		b = num;
	}
	return (0);
}
