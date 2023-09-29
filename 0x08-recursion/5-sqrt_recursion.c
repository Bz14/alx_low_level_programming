#include "main.h"
/**
 * _sqrt_recursion - find square root of a number
 * @n: a number
 * @i: a number
 * Return: an integer value of square root of a number
 */
int square(int n, int i);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - helper function
 * @n: a number
 * @i: an integer
 * Return: an integer
 */
int square(int n, int i)
{
	int num = i * i;

	if (num > n)
		return (-1);
	if (num == n)
		return (i);
	return (square(n, i + 1));
}
