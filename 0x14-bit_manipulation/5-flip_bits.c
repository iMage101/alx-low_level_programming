#include "main.h"

/**
<<<<<<< HEAD
 * flip_bits - returns no of bits to flip for two numbers to match
 * @n: first number
 * @m: second number
 * Return: number of bits to flip;
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tmp, i = 1, count = 0;

	/* find the different bits */
	tmp = n ^ m;
	/* count ones in tmp */
	while (tmp >= i)
	{
		if (i & tmp)
			count++;
		if (count >= MAX_COUNT)
			return (count);
		i = i << 1;
	}
	return (count);
=======
 * flip_bits - returns hamming distance of two bit words
 * which is the number of bits you would need to flip to get
 * from one number to another
 * @n: the first bit word
 * @m: the second bit word
 *
 * Return: the hamming distance
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int shift = (sizeof(n) * 8);
	int dist = 0;

	while (shift--)
		dist += (n >> shift & 1) != (m >> shift & 1);
	return (dist);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
