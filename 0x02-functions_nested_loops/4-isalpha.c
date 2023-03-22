#include "main.h"

/**
 * _isalpha - this function prints alphabets only
 *
 * @c: This ia parameter for the function to be executed
 * Return: 1 if its an aplhabet and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);

}
