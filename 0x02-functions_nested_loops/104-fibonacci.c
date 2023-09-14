#include <stdio.h>
/**
 * main - Entry point
 *
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int num = a + b;
	int count = 0;

	printf("%d, %d,  ", a, b);
	while (count <= 98)
	{
		printf("%d", num);
		a = b;
		b = num;
		num = a + b;
		if (count != 98)
		{
			printf(", ");
		}
		count++;
	}
}
