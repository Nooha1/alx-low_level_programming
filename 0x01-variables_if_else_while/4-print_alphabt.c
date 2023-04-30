#include <stdio.h>

/**
 * main- print alphabets except q and e
 *
 * Return: 0
 */
int main(void)
{
	char c;

	while (c <= 'z')
	{
		if (c >= 'a' && c <= 'z' && c != 'e' && c != 'q')
		{
		putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
