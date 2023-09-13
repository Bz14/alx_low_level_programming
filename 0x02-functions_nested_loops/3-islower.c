#include "main.h"
/**
 * _islower - check whether lowercase or not.
 *
 * @c: a single character
 *
 * Return: Always return 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
