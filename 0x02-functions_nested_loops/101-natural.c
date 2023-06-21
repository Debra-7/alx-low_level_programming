#include <stdio.h>
/**
 * main - list all multiples of 3 and 5
 * from 0 to 1023
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i <= 1023; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
