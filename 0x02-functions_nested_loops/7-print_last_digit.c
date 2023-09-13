#include "main.h"
/**
 * print_last_digit - Print the last digit of a number
 *
 * @n: an integer number
 *
 * Return: the last digit of a number
 */
int print_last_digit(int n)
{
	int lastDigit;
	lastDigit = n % 10;

	if (lastDigit < 0)
		lastDigit *= -1;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
