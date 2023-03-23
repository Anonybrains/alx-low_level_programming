#include "main.h"
/**
 * _isdigit- a function name that checks for a digit (0 through 9).
 * @c: it is parameter for a digit.
 *
 * Return: 1 if successful, 0 if unsuccessful
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
