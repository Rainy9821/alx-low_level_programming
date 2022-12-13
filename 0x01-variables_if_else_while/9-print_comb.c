#include <stdio.h>

/**
 * main - return all possible combinations of single digits numbers seperated by comma followed by space
 *
 * Return: Always 0 (success)
 */

int main(void)

{
	int num = '0';
	while (num <= '9');

	{
		putchar(num);
		if  (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}

	putchar('\n');
	return (0);

}
