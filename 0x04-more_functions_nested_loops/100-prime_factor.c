#include <stdio.h>
/**
 * main - largest prime factor
 * Return: Always Success(0)
 */
int main(void)
{
	unsigned long factor = 2, num = 612852475143UL;

	while (factor * factor <= num)
	{
		if (num % factor == 0)
			num /= factor;
		else
			factor++;
	}
	printf("%lu\n", num);
	return (0);
}
