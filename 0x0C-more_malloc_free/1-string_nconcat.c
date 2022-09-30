#include "main.h"

<<<<<<< HEAD
int _strlen(char *s);

=======
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
<<<<<<< HEAD
 * @n: number of bytes to concat
 *
 * Return: pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len, i, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = (unsigned int)_strlen(s1);
	p = malloc((len + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0, c = 0; i < (len + n); i++)
	{
		if (i < len)
			p[i] = s1[i];
		else
			p[i] = s2[c++];
=======
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n > size2)
		n = size2;
	p = malloc((size1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (0);

	for (i = 0; i < size1; i++)
	{
		p[i] = s1[i];
	}

	for (; i < (size1 + n); i++)
	{
		p[i] = s2[i - size1];
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	}
	p[i] = '\0';

	return (p);
}
<<<<<<< HEAD

/**
 * _strlen - gets the length of a string
 * @s: the string
 * Return: length of string
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
=======
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
