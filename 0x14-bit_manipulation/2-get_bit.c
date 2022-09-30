#include "main.h"

/**
<<<<<<< HEAD
 * get_bit - get the bit at a given index
 * @n: number to check
 * @index: index to check
 * Return: bit value or -1;
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1, len = 0;

	while (len++ < index)
	{
		if (len >= MAX_COUNT)
			return (-1);
		i = i << 1;
	}
	return (n & i ? 1 : 0);
=======
 * get_bit - get bit at nth index
 * @n: binary number
 * @index: nth position
 *
 * Return: bit at that position
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
