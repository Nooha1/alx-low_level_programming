#include "main.h"
#include <stdio.h>
#include "1-alphabet.c"

/**
 * print_alphabet_x10 - print alphabet x 10
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		print_alphabet();
	if (i != 9)
	putchar('\n');
	}
}
