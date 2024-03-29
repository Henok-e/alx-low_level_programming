#include <stdio.h>
/**
 * add - addition of two intger
 * @a: first int
 * @b: second int
 * Return: result
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - subtraction of two intger
 * @a: first int
 * @b: second int
 * Return: result
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - multiply  two intger
 * @a: first int
 * @b: second int
 * Return: result
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - division of two intger
 * @a: first int
 * @b: second int
 * Return: result
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}
/**
 * mod - mod of two intger
 * @a: first int
 * @b: second int
 * Return: result
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a % b);
}
