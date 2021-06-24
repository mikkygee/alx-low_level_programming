#include "holberton.h"
#include <stdio.h>

/**
 * print_line - function that prints a straight line
 *
 * @n; variable
 *
 * Return; Always 0.
 */

void print_line(int n);
{
	char k;

	for (k = 0; k < n; k++)
	_putchar('_');
	_putchar('\n');
}
