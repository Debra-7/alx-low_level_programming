#include "main.h"
#include <unistd.h>
/**
 * main - a program that writes the character
 * c to print out
 *
 * Return: 1 (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
