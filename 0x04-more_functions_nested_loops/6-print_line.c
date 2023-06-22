#include "main.h"
/**
 * print_line - prints a straight line on the terminal
 * @n: number of times character is printed
 */
void print_line(int n)
{
	int i;

	if (n == 0)
		_putchar('\n');
	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
