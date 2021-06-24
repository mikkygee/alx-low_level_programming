#include <stdio>
/**
 * main - prints largest prime factor of 612852475143
 *
 * Return: Always 0.
 */

int main(void)
{
	long k, number = 612852475143;

	for (k = 2; k <= number; k++)
	{
	if (number % k == 0)
	{
	number = number / k;
	k--;
	}
	}
	printf("%lu\n", k);
	return (0);
}
