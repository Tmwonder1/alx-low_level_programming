#include <stdio.h>

/**
 * main - Print all the letters except q and e
 * Return: 0 for successful exec.
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}

		letter++;
	}

	putchar('\n');
	return (0);
}
