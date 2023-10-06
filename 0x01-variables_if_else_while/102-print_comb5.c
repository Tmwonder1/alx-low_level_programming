#include <stdio.h>

/**
 * main - prints all possible combos
 * Return: 0 successful exec.
 */
int main(void)
{
	int l;
	int k;

	for (l = 0; l < 100; l++)
	{
		for (k = 0; k < 100; k++)
		{
			if (l < k)
			{
				putchar((l / 10) + 48);
				putchar((l % 10) + 48);
				putchar(' ');
				putchar((k / 10) + 48);
				putchar((k % 10) + 48);

				if (l != 98 || k != 99)
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
