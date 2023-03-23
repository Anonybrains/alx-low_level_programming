#include "main.h"
/**
 * _isupper- a function name that checks for uppercase character.
 * @c: it a parameter used to check the program
 *
 * Return: 1 if successful, 0 if unsuccessful
 */

int _isupper(int c)
	{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
	}
