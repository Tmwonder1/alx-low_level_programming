#include <stdio.h>

/**
 * main - a program that prints alphabets lowercase.
 * Return: 0 for successful exec.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
