/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Description: This function swaps  two integers pointed to by 'a' and 'b'.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
