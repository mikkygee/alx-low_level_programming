#include "holberton.h"
/**
 * _isalpha - a function that checks for a letter, lowercase or uppercase
 * @c: single letter input
 * Return: 1 if int c is a letter, 0 if otherwise
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) ||  ((c >= 'A') && (c <= 'Z')))
	return (1);

	else
	return (0);
}
