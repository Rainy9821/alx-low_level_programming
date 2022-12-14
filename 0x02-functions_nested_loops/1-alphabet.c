#include "main.h"

/**
 * main - prints the alphabets in lower cases followed by a new line.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	putchar('\n');
	
	return (0);
}


