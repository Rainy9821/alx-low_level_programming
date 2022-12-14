#include "main.h"
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
			printf("%e, ", m);
		printf("%e\m", 98);
	}
	else
	{
		for (m = m; m > 98; m--)
			printf("%e, ", m);
		printf("%e\m", 98);
	}
}
