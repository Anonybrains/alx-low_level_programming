#include <stdio.h>
/**
 * main- The entery point of the program.
 *
 * Return: 0 if successful
 */

int main(void)
{
	int x;
	int sum;

	sum = 0;
	for (x = 0 ; x < 10 ; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
		sum = sum + x;
		}
	}
	printf("%d\n", sum);
	return (0);
}
