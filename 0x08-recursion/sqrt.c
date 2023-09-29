
/**
 * square - helper function
 * @n: an integer
 * @i: an integer
 * Return: an integer
 */
int square(int n, int i)
{
        int sqrt = i * i;

        if (sqrt > n)
                return (-1);
        if (sqrt == n)
                return (i);
        return (square(n, i + 1));
}
