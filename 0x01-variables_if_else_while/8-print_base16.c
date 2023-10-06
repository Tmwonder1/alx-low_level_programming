#include <stdio.h>

/**
 * main - A program that prints all number of base 16 in
 * lowercase.
 * Return: 0 for a successful exec.
 */

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}
