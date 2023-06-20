#include "main.h"
/**
 * times_table - print the 9 times table
 * starting with 0
 */
void times_table(void)
{
	int m;
	int n;
	int p;

	for (m = 0; m < 9; m++)
	{
		for (n = 0; n < 9; n++)
		{
			p = m * n;
			if (n == 0)
			{
				_putchar(p + '0');
			}

			if (p < 10 && n != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
