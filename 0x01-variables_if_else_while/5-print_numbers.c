#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10.
 * Return: 0 for a successful exec.
 */

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}

	printf("\n");

	return (0);
}
