#include <stdlib.h>
#include <string.h>
/**
 * argstostr - conctenate arguments
 * @ac: number of argumnets
 * @av: argumnets
 * Return: a pointer to the string
 */
char *argstostr(int ac, char **av)
{
	int i, j, total = 0, len = 0, k = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		total += strlen(av[i]) + 1;
	}
	ptr = (char *)malloc((total * sizeof(char)) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		k = strlen(av[i]);
		for (j = 0; j < k; j++)
		{
			ptr[len] = av[i][j];
			len++;
		}
		ptr[len] = '\n';
		len++;
	}
	return (ptr);
}
