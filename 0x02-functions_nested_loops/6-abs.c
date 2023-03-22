#include "main.h"
/**
 * _abs - function name for printing absolute value
 * @i: parameter for check
 *
 * Return: a if successful
 */

int _abs(int i)
{
	if (i < 0)
		i = -(i);
	else if (i >= 0)
		i = i;
	return (i);
}
