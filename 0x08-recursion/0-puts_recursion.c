#include "main.h"
/**
  *_puts_recursion - prints a string followed by a new line.
  *@s: pointer to string.
  *
  *Return: void.
  */
void _puts_recursion(char *s)
{
    if (*s)
    {
        _puts_recursion(s + 1);
        write(1, s, 1);
    }
    else
    {
        write(1, "\n", 1);
    }
}
