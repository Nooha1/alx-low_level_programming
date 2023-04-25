#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/*
 * description for print_alphabet function
 * declare char ch
 * using for loop to print a to z alphabet
 */

void print_alphabet(void)/*description for print_alphabet function*/

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
}

int main(void)
{
	print_alphabet();
	return (0);
}
