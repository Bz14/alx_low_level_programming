#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print numbers
 * @separator: separator
 * @n: number of parameter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;
	va_list ls;

	va_start(ls, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ls, int);
		printf("%d", num);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(ls);
	printf("\n");
}
