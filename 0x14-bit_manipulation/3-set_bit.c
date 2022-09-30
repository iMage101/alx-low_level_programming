#include "main.h"

/**
<<<<<<< HEAD
 * set_bit - set the bit at a given index
 * @n: number to check
 * @index: index to check
 * Return: bit value or -1;
 */
int set_bit(unsigned long int *n, unsigned int index)
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
	*n |= i;
=======
 * set_bit - gets bit on index `index`
 * @n: decimal number
 * @index: index of the bit
 * Return: 1 (success) or -1(faillure)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (1);
}
