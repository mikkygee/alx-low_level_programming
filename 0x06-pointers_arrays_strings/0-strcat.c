#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int ctr;
	int i;

	for (ctr = 0; dest[ctr]; ctr++)
	{
	}
	for (i = 0; src[i]; i++, ctr++)
	{
		dest[ctr] = src[i];
	}
	dest[ctr] = '\0';
	return (dest);
}
