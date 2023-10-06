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

	while(s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
void error()
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
	int len1, len2, i, d1, d2, rem, j, a;

	if (argc != 3)
		error();
	s1 = argv[1];
	s2 = argv[2];
	if (!isDigit(s1) || !isDigit(s2))
		error();
	len1 = strlen(s1);
	len2 = strlen(s2);
	ptr = malloc(sizeof(int) * (len1 + len2 + 1));
	if (ptr == NULL)
		return (1);
	for (i = 0; i <= (len1 + len2); i++)
		ptr[i] = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
		d1 = s1[i] - '0';
		rem = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			d2 = s2[j] - '0';
			rem = ptr[i + j + 1] + (d1 + d2);
			ptr[i + j + 1] = rem % 10;
			rem /= 10;
		}
		if (rem > 0)
			ptr[i + j + 1] += rem;
	}
	for (i = 0; i < (len1 + len2); i++)
	{
		if (ptr[i])
			a = 1;
		if (a)
			_putchar(ptr[i] + '0');
	}
	if(!a)
		_putchar('0');
	_putchar('\n');
	free(ptr);
	return (0);
}
