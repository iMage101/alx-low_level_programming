<<<<<<< HEAD
#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int destLen = 0;
	int srcLen = 0;

	while (dest[destLen] != '\0')
		destLen++;

	while (src[srcLen])
	{
		dest[destLen] = src[srcLen];
		srcLen++;
		destLen++;
	}
	dest[destLen] = '\0';

=======
#include <stdio.h>
#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @dest : first string.
 * @src : second string.
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (dest);
}
