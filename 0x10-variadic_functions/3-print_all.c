#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * print_space - print space
 * @len: length of string
 * @i: current format
 */
void print_space(int len, int i)
{
	if (i != len - 1)
		printf(", ");
}
/**
 * print_all - print anything
 * @format: format of the argument
 */
void print_all(const char * const format, ...)
{
	va_list ls;
	int i = 0, num, len = strlen(format);
	char c, *s;
	float f;

	va_start(ls, format);
	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			c = (char) va_arg(ls, int);
			printf("%c", c);
			print_space(len, i);
		}
		else if (format[i] == 'i')
		{
			num = va_arg(ls, int);
			printf("%d", num);
			print_space(len, i);
		}
		else if (format[i] == 'f')
		{
			f = (float) va_arg(ls, double);
			printf("%f", f);
			print_space(len, i);
		}
		else if (format[i] == 's')
		{
			s = va_arg(ls, char *);
			if (s != NULL)
				printf("%s", s);
			else
				printf("(nil)");
			print_space(len, i);
		}
		i++;
	}
	va_end(ls);
	printf("\n");
}
