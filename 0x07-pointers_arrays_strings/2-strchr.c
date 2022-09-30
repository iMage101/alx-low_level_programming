#include "main.h"
#include <stdio.h>
<<<<<<< HEAD

/**
 * _strchr - locates a character in a string.
 * @s: the string
 * @c: the character
 *
 * Return: a pointer to the first occurrence of the
 * character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
=======
/**
 * _strchr - locates a character in a string .
 * @s: string to check
 * @c: character to found
 * UPDATE V1.0 : Features : Pointers implementation instead of Arrays .
 * Pointer/memory incrementation instead of i .
 * Return: pointer to s or null
 */

char *_strchr(char *s, char c)
{

	while (*s)
	{
		s++;

			if (*s == c)
		{
			return (s);
		}


	}

		return (0);


>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
