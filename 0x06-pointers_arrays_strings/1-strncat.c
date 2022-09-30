#include "main.h"
<<<<<<< HEAD

/**
 * _strncat - Concatenates two strings.
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes to use from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int destLen, i;

	for (destLen = 0; dest[destLen] != '\0'; destLen++)
		;

	for (i = 0; src[i] != '\0' && n > 0; i++, n--, destLen++)
	{
		dest[destLen] = src[i];
	}
=======
#include <stdio.h>

/**
 * _strncat - function
 *@dest: char
 *@src: char
 *@n: int
 *Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0' && j < n)
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e

	return (dest);
}
