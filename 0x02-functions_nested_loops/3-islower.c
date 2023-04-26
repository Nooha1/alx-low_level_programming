#include "main.h"
#include <stdio.h>

/**
 * _islower - islower function with c parameter.
 * @c: character to be checked
 *
 * Return: 1 if lowercase, otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
