#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * isDigit - check whether digit or not
 * @s: a string
 * Return: 0 or 1
 */
int isDigit(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * error - displays error code
 */
void error(void)
{
	char *err = "Error\n";
	int i;

	for (i = 0; i < 6; i++)
		_putchar(err[i]);
	exit(98);
}
/**
 * main -mulltiply two positive numbers
 * @argc: number of argument
 * @argv: arguments
 * Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2, *ptr;
	int len1, len2, i, d1, d2, rem, a = 0, len;

	s1 = argv[1];
	s2 = argv[2];
	if (argc != 3 || !isDigit(s1) || !isDigit(s2))
		error();
	len1 = strlen(s1);
	len2 = strlen(s2);
	len = len1 + len2 + 1;
	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		ptr[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		d1 = s1[len1] - '0';
		rem = 0;
		for (len2 = strlen(s2) - 1; len2 >= 0; len2--)
		{
			d2 = s2[len2] - '0';
			rem += ptr[len1 + len2 + 1] + (d1 * d2);
			ptr[len1 + len2 + 1] = rem % 10;
			rem /= 10;
		}
		if (rem > 0)
			ptr[len1 + len2 + 1] += rem;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (ptr[i])
			a = 1;
		if (a)
			_putchar(ptr[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	return (0);
}
