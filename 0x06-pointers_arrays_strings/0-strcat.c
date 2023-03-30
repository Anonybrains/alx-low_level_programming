#include "main.h"
/**
 * _stracat -  a function that concatenates two strings.
 * @dest: parameter to be concatenated into
 * @src: parameter to concatenate from
 *
 * Return: dest if successful
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int x;

	for (x = 0 ; dest[x] != '\0' ; x++)
		destlen++;
	for (x = 0 ; src[x] != '\0' ; x++)
		srclen++;
	for (x = 0 ; x <= srclen ; x++)
		dest[destlen + x] = src[x];
	return (dest);
}
