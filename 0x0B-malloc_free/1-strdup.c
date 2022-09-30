#include "main.h"
<<<<<<< HEAD
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *copy;
	int i, len = 0;
=======
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns the length of the string
 * @s: input string to count
 * Description: returns the length of a given string
 * Return: length of string as int
 **/
int _strlen(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i + 1);
}
/**
 * _strdup - duplicate string
 * @str: source string
 * Description: duplicate string
 * Return: pointer to string, NULL if fail
 **/
char *_strdup(char *str)
{
	char *dest;
	unsigned int i;
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e

	if (str == NULL)
		return (NULL);

<<<<<<< HEAD
	while (str[len] != '\0')
		len++;

	copy = (char *)malloc((sizeof(char) * len) + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[len] = '\0';

	return (copy);
=======
	dest = (char *)malloc((_strlen(str)) * sizeof(char));

	if (dest == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		dest[i] = str[i];
	dest[i] = str[i];

	return (dest);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
