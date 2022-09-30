#include "main.h"
<<<<<<< HEAD

/**
 * _strcmp - Compares two strings.
 * @s1: First string
 * @s2: Second string
 *
 * Return: 0 if similar, positive number if s1 > s2, otherwise negative number
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
=======
#include <stdio.h>
/**
 *_strcmp - function comparison of strings
 *@s1:  pointer
 *@s2:  pointer
 *Return: j-integer
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	j = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
	{
		j = s1[i] - s2[i];
		break;
	}
	}
		return (j);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
