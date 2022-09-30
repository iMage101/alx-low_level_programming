#include "main.h"
<<<<<<< HEAD
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int i, j, k, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		s = av[i];
		j = 0;

		while (s[j++])
			len++;
		len++;
	}

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac && j < len; i++)
	{
		s = av[i];
		k = 0;

		while (s[k])
		{
			str[j] = s[k];
			k++;
			j++;
		}
		str[j++] = '\n';
	}
	str[j] = '\0';

	return (str);
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
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i + 1);
}
/**
 * argstostr - concatenates all arguments of program
 * @ac: number of arguments
 * @av: arguments, pointer to strings
 * Description: concatenate all args to one string, separated by \n
 * Return: pointer to string, NULL if fails
 **/
char *argstostr(int ac, char **av)
{
	char *dest;
	unsigned int size, i, j, k;

	size = 0;
	k = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < (unsigned int)ac; i++)
	{
		size += _strlen(av[i]);
	}

	dest = (char *)malloc((size + 1) * sizeof(char));

	if (dest == NULL)
		return (NULL);

	for (i = 0; i < (unsigned int)ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			dest[k] = av[i][j];
			k++;
		}
		dest[k] = '\n';
		k++;
	}
	dest[k] = '\0';
	return (dest);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
