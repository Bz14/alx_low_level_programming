
/**
 * _pow_recursion - Power of a number
 * @x: an integer number
 * @y: raied to be power
 * Return: a number raised to a power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
