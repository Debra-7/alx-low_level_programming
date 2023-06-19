#include <stdio.h>

/**
 * main - where the program to print the alphabet
 * in lowercase.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int a;

	for (a = 0; a < 26; a++)
	{
		putchar(alphabet[a]);
	}
	putchar('\n');
	return (0);
}
