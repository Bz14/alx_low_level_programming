
/**
 * _sqrt_recursion - find square root of a number
 * @n: a number
 * Return: an integer value of square root of a number
 *
 * square - helper function
 * @n: an integer
 * @first: start
 * @last: end
 */
int square(int n, int first, int last)
{
	int mid = (first + last) / 2;

	if (mid * mid == n)
		return (mid);
	if (first >= last)
		return (-1);
	if (mid * mid > n)
		return (square(n, first, mid - 1));
	return (square(n, mid + 1, last));
}
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (square(n, 1, n));
}
