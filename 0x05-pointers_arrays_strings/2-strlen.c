#include "main.h"
/**
 * _strlen- a pointer to a string, which is denoted by the char *s syntax.
 * a function that returns the length of a string.
 * @s: a parameter (a string)
 * Return: length
 */


int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
	longi++;
	s++;
	}

	return (longi);
}
