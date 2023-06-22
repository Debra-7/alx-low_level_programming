#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character to print
 * @c: character to print
 *
 * Return: 1 (success)
 * If an error occurs, -1 is returned and error set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
