#include "main.h"
/**
  *_print_rev_recursion - prints a string in reverse.
  *@s: pointer to string.
  *
  *Return: void.
  */
void _print_rev_recursion(char *s)
{
if (*s)
{
if (s[-1] == ' ')
{
_putchar(*s);
}
_print_rev_recursion(s + 1);
}
else
{
_putchar('\n');
}
}
