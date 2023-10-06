#include <stdio.h>

/**
 * main - Using only putchar to print digits in base 10.
 * Return: 0 for successful exec.
 */

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar(number + '0');
		number++;
	}

	putchar('\n');

	return (0);
}
