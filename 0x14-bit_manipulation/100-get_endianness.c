#include "main.h"
/**
 * get_endianness - checks endiness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int val = 1;
	char *ptr = (char *)&val;

	if (*ptr == 1)
		return (1);
	else
		return (0);
}
