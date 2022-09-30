#include "main.h"

/**
<<<<<<< HEAD
 * _memcpy -  copies n bytes from memory area src
 * to memory area dest
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 *
 * Return: a pointer to dest
=======
 * _memcpy - fnct to copy memory content source to a char destination .
 * @dest: memory allocation of the destination
 * @src: memory content to copy from the src
 * @n: content in byte to copy
 *
 * Return: pointer to dest
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
<<<<<<< HEAD
		dest[i] = src[i];

=======
	{
		*(dest + i) = *(src + i);
	}
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (dest);
}
