#include <stdio.h>
#include <limits.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  unsigned long a = 0, b = 1, num;
  unsigned long a_half1, a_half2, b_half1, b_half2;
  unsigned long firsthalf, secondhalf;
  int count;

  for (count = 0; count < 92; count++)
    {
      num = a + b;
      printf("%lu", num);
      a = b;
      b = num;
    }
  a_half1 = a / 10000000000;
  b_half1 = b / 10000000000;
  a_half2 = a % 10000000000;
  b_half2 = b % 10000000000;
  for (count = 93; count < 99; count++)
    {
      firsthalf = a_half1 + b_half1;
      secondhalf = a_half1 + b_half2;
      if (a_half2 + b_half2 > 9999999999)
	{ firsthalf += 1;
	  secondhalf %= 10000000000;
	}
      printf("%lu%lu", firsthalf, secondhalf);
      if (count != 98)
	printf(", ");
      a_half1 = b_half1;
      a_half2 = b_half2;
      b_half1 = firsthalf;
      b_half2 = secondhalf;
    }
  putchar('\n');
  return (0);
}
