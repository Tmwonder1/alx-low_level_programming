#include <stdio.h>

/**
 * puts_half - Prints the second half of a string followed by a new line.
 * @str: A pointer to the string to be printed.
 */
void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;

	}

	if (length % 2 == 0)
	{
		i = length / 2;

	}
	else
	{
		i = (length - 1) / 2;

	}

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;

	}

	putchar('\n');

}
