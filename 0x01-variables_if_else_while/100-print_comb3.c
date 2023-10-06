#include <stdio.h>

/**
 * main - A program that prints all possible diff combinations
 * of two digits.
 * Return: 0 for a successful exec.
 */

int main(void)
{
	int t;
	int j;

	for (t = 0; t < 9; t++)
	{
		for (j = t + 1; j < 10; j++)
		{
			putchar(t + '0');
			putchar(j + '0');

			if (t < 8 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
