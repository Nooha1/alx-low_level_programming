#include "main.h"
#include <stdio.h>
/**
 * main - cheks for digits
 *
 * Return: always 0.
 */
int main(void)
{
	int c = '0';

	printf("%d: %d\n", c, _isdigit(c));
	return (0);
}
