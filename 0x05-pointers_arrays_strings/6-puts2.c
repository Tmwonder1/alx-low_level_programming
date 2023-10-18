#include <stdio.h>

/**
 * puts2 - Prints character of a string, starting with the first character.
 * @str: A pointer to the string to be printed.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;

	}

	putchar('\n');

}
