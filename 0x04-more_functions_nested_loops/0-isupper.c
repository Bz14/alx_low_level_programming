# include "main.h"
/**
 * _isupper - Check for uppercase
 *
 * @c: an integer
 *
 * Return: Always 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
