#include "main.h"
#include <stdio.h>


/**
 * print_last_digit - prints tha last digit of a number
 * @r: character used
 *
 * Return: Always 0.
 */
int print_last_digit(int r)
{
	int n = print_last_digit(r);
	int l = n % 10;

	putchar(l);
	putchar('\n');
	return (0);
}
