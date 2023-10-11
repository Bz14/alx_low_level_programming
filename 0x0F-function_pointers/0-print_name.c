#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: a string
 * @f: a pointer function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
