#include<stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int j = 0, i = 0;
while (i <= 99)
{
j = i;
while (j <= 99)
{
if (i < j)
{
putchar((i / 10) + 48);
putchar((i % 10) + 48);
putchar(' ');
putchar((j / 10) + 48);
putchar((j % 10) + 48);
if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
