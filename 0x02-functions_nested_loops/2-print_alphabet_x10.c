#include "main.h"
/**
 * print_alphabet_x10 - function that prints alphabet
 * ten times
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	char c;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
