#include "main.h"
/** _isupper- function that checks for uppercase character.
 *@c: parameter for check
 * Return: 1 successful, 0 if unsuccess
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
