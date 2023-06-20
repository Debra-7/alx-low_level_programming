#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the number to be checked
 *
 * Return: 1 and print + if n > zero
 * 0 and print 0 if n is zero
 * -1 and print - if n < zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 1)
	{
		_putchar('-');
	}
		return (-1);
}
