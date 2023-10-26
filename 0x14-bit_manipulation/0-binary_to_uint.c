#include "main.h"
/**
 * binary_to_uint - convert binary to unsigned int
 * @b: a string
 * Return: unsigned int number
 */
unsigned int binary_to_uint(const char *b)
{
	int exp = 0, i = 0, len = strlen(b);
	unsigned int res = 0;

	if (b == NULL)
		return (0);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			res += (b[i] - '0') * pow(2, exp);
			exp += 1;
		}
		else
			return (0);
	}
	return (res);
}
