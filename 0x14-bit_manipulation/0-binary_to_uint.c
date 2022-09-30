<<<<<<< HEAD
#include "main.h"

/**
 * binary_to_uint - converts a binary to int
 * @s: pointer to binary chars
 * Return: int value or zero
 */
unsigned int binary_to_uint(const char *s)
{
	unsigned int res = 0, i = 0;

	if (!s)
		return (0);
	for (; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '1')
			return (0);
		res = res << 1;
		res |= (s[i] - '0');
	}

=======
#include <stdio.h>
#include <string.h>
#include "main.h"
#include <math.h>

/**
 * binary_to_uint - converts binary to uint
 * @b: pointer to the character array in binary to be converted
 *
 * Return: converted number if successful, 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	int i, base = 1, len = 0;
	unsigned int res = 0;

	if (!b)
		return (0);

	len = strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		if (b[i] == '1')
			res += base;
		base *= 2;
	}
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (res);
}
