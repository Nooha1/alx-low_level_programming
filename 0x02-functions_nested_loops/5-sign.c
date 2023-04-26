#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints the sign of a number.
 * @n: character to be checked
 *
 * Return: 1 if greather than zero, 0 if zero, otherwise -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
