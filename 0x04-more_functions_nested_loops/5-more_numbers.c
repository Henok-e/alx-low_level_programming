#include "main.h"
/**
*print_most_numbers - prints numbers except 2 and 4
*
*Return: returns nothing
*/
void more_numbers(void)
{
	int i, j;

	for (i = 0 ; i < 15 ; i++)
	{
		for (j = 48 ; j <= 57 ; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
