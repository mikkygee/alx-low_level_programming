#include <stdio.h>
/**
 * main - prints numbers 1 to 100
 *
 * Return: Always 0.
 */

int main(void)
{
	int k;
	for (k = 1; k < 100; k++)
		if (k % 3 == 0)
		{
			printf("Fizz" );
		}
		else if (k % 5 == 0)
		{
			printf("Buzz" );
		}
		else if (k % 15 == 0)
		{
			printf("FizzBuzz" );
		}
		else
		{
			prinf("%d ", k);
		}
	printf("Buzz");
	printf("\n");
	return (0);
}	
