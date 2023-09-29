#include <string.h>
/**
 * is_palindrome - check whether palindrom or not
 * @s: a string
 * @i: start char
 * @j: end char
 * Return: 1 or 0
 */
int is_pal(char *s, int i, int j);
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 1)
		return (1);
	return (is_pal(s, 0, len - 1));
}
/**
 * is_pal - helper function
 * @s: a string
 * @i: start char
 * @j: end char
 * Return: 1 or 0
 */
int is_pal(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (*(s + i) != *(s + j))
		return (0);
	return (is_pal(s, i + 1, j - 1));
}
