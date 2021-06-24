#include "holberton.h"
/**
 * print_square - function that prints a square
 * @size: the size of the square
 * Return: Always 0
 */
void print_square(int size)
{
	int k, j;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 0; k < size; k++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
