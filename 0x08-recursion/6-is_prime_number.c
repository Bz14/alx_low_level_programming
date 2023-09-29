
/**
 * is_prime_number - Checks whether prime or not
 * @n: an integer
 * @i: an integer
 * Return: 0 or 1
 */
int is_prime(int n, int i);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
/**
 * is_prime - helper function
 * @n: an integer
 * @i: an integer
 * Return: an integer
 */
int is_prime(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime(n, i + 1));
}
