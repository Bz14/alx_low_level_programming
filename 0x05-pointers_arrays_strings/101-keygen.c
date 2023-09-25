#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generate random valid password
 * Return: Always success (0)
 */
int main(void)
{
	int i;
	char pass[8] = {0};

	srand(time(NULL));
	for (i = 0; i < 8; i++)
	{
		pass[i] = rand() % 26 + 'A';
		printf("%c", pass[i]);
	}
	pass[i] = '\0';
	return (0);
}
