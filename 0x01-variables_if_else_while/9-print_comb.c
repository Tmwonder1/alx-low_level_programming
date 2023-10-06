#include <stdio.h>

/**
 * main - Program that prints all possible combinations of
 * single-digit numbers.
 * Return: 0 for a successful exec.
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
