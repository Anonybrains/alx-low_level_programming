#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * @dest: parameter(string) copied to
 * @src: parameter (string) copied from
 * @n: number of byte(s)
 *
 * Return: dest if successful
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
