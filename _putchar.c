#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

file: print_%.c

#include "main.h"
/**
 * print_37 - prints the char %.
 * Return: 1.
 */
int print_37(void)
{
	_putchar(37);
	return (1);
}
