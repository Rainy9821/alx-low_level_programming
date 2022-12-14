#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - prints all natural numbers
 *
 * @m: number selected
 */

void print_to_98(int m)

{
	if (m < 98)
	{
		for (m = m; m < 98; m++)
			printf("%d, ", m);
		printf("%d\m", 98);
	}
	else
	{
		for (m = m; m > 98; m--)
			printf("%d, ", m);
		printf("%d\m", 98);
	}
}
