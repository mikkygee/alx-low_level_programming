#include "holberton.h"
#include <stdio.h>
/**
 * _isdigit(int c) - check for digit 0 - 9
 *
 * @c: variable text
 *
 * Return: 1 if number is digit else 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	return (0);
}
