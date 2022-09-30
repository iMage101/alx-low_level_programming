#include "main.h"
<<<<<<< HEAD
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string
 * @accept: a set of bytes
 *
 * Return: a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}

	return (NULL);
=======
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: char to check
 * @accept: char to look for
 * Return: char
*/
char *_strpbrk(char *s, char *accept)
{
	int i, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
				return (s + i);
		}
	}
	return (0);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
