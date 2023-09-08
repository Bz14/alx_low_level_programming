#include<stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lower = 'a';
while (lower <= 'z')
{
if (lower == 'q' || lower == 'e')
continue;
else
putchar(lower);
lower++;
}
putchar('\n');
return (0);
}
