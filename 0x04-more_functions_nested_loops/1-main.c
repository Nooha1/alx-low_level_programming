#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * main - checks for digits
 *
 * Return: always 0.
 */
int main(void)
{
	char c;
       
	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
