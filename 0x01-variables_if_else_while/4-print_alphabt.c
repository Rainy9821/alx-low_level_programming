#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns lower case alphabets except q and e
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}

	putchar('\n');
	return (0);
}
