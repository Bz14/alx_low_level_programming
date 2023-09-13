#include "main.h"
/**
 *_isalpha - Determine whether alphabet or not
 *
 * @c: a single character
 *
 * Return: Always 0 or 1
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
