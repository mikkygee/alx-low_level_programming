#include "holberton.h"
#include <stdio.h>

/**
 * print_numbers - function that prints numbers 1 to 9
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	char k;

	for (k = 0; k <= 9; k++)
	_putchar (k);
	_putchar ('\n');
}
