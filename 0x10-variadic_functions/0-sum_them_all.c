#include <stdarg.h>
/**
 * sum_them_all - sum all parameters
 * @n: last argument
 * Return: an integer sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ls;
	unsigned int i, sum = 0, num;

	if (n == 0)
		return (0);
	va_start(ls, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ls, int);
		sum += num;
	}
	va_end(ls);
	return (sum);
}
