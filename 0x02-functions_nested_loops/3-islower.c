#include "main.h"

/**
 * _islower - function to print a lower case
 *
 *@c: parameter to print a code that checks lower case
 * Return: 1 if its a lower case the 0 if other wise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
