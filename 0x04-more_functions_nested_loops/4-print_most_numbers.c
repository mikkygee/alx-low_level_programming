#include "holberton.h"
#include <stdio.h>

/**
 * print_most_numbers - function to print numbers without 2 and 4
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	char k;
	for (k = '0'; k <= '9'; k++)
	for (k != '2' && k != '4')
	
	_putchar(k);
	_putchar('\n');
}
