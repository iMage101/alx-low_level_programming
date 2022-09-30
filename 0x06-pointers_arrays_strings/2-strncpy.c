#include "main.h"
<<<<<<< HEAD

/**
 * _strncpy - Copies a string.
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes to copy
 *
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

=======
#include <stdio.h>
/**
 * _strncpy - copy string
 * @src: pointer of char
 * @dest: pointer of char
 * @n: integer
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		for (; i < n; i++)

		dest[i] = '\0';


	}
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (dest);
}
