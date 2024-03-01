#include "main.h"
/**
 * swap_int-function to  two integer pointer
 * swap value of two integers
 * @a first entry
 * @b second entry
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
