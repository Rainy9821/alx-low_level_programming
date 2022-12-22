#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * @str: pointer value
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		 i++;
 	}

	_putchar('\n');
}
