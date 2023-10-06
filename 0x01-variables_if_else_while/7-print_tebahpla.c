#include <stdio.h>

/**
 * main - Print letters in reverse using only putchar.
 * Return: 0 for successful exec.
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
