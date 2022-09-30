#include "main.h"

/**
<<<<<<< HEAD
 * _memset - fills memory with a constant byte.
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes to fill
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

=======
*_memset - fills memory with a constant byte.
*@s: pointer to memory.
*@b: constant byte used to replace.
*@n: number of  bytes to replace.
*Description: fills memory s with byte b for n bytes
*Return: pointer to memory
*/

char *_memset(char *s, char b, unsigned int n)
{
	for (; n > 0; n--)
	{
		s[n - 1] = b;
	}
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (s);
}
