#ifndef PUTCHAR_FUNCTION
#define PUTCHAR_FUNCTION
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
typedef int size_t;
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
