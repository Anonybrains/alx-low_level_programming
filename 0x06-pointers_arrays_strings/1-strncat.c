#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: parameter to be concatenated to.
 * @src: parameter to concatenate from.
 * @n: number of bytes
 *
 * Return: dest if successful.
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destlen++;
	for (i = 0 ; src[i] != '\0' ; i++)
		srclen++;
	for (i = 0 ; i < n ; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
