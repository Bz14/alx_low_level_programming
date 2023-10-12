#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print strings
 * @separator: separtor
 * @n: numer of parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *c;
	va_list ls;

	va_start(ls, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(ls, char*);
		if (c == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", c);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(ls);
	printf("\n");
}
