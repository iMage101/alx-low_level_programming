#include "main.h"

/**
<<<<<<< HEAD
 * clear_bit - clear the bit at a given index
 * @n: number to check
 * @index: index to clear
 * Return: bit value or -1;
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1, len = 0;

	if (!n)
		return (-1);
	while (len++ < index)
	{
		if (len >= MAX_COUNT)
			return (-1);
		i = i << 1;
	}
	if (*n & i)
		*n ^= i;
=======
 * clear_bit - Sets the value of a bit at a given index to 0.
 * @n: A pointer to the bit.
 * @index: The index to set the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (1);
}
