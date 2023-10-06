#include <stdio.h>

/**
 * main - a program that prints all possible different
 * combinations of three digits.
 * Return: 0 successful exec.
 */

int main(void)
{
	int t;

	for (t = 0; t <= 7; t++)
	{
		int f;

		for (f = t + 1; f <= 8; f++)
		{
			int l;

			for (l = f + 1; l <= 9; l++)
			{
				putchar(t + '0');
				putchar(f + '0');
				putchar(l + '0');

				if (!(t == 7 && f == 8 && l == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
