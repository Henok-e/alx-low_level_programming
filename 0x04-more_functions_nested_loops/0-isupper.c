#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
    char c;

   if ( c >= 'A'&& c<'Z')
   {
	   return (0);
}
if (c>='a' && c<='z')
{
	return (1);
}
}
