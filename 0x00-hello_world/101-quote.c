#include <unistd.h>

/**
 * main - Printing a sentence to the standard error.
 *
 * Return: 1 (Meaning unsuccessful execution)
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
