#include "holberton.h"
#include <stdio.h>
/**
 * _isdigit(int c) - check for digit 0 - 9
 *
 * @c: variable text
 *
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
