#include "main.h"
<<<<<<< HEAD

/**
 * leet - encodes a string into 1337.
 * @s: The string
 *
 * Return: The string
 */
char *leet(char *s)
{
	int i, j;
	char subs[] = "aAeEoOtTlL";
	char le[] = "43071";

	i = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; subs[j] != '\0'; j++)
			if (s[i] == subs[j])
				s[i] = le[j / 2];
	}

	return (s);
=======
#include <stdio.h>
/**
 *leet - a function that encodes a string into 1337.
 *@s: string to be crypted .
 *Return: pointer to s .
 *Update V 1.0 : In this new code , i changed 2 arrays with 2 pointers, that
 *are pointed to the BASS adresses of the 2 arrays.
 *in addition to that , i assigned a pointer p to s.
 */

char *leet(char *s)
{
	char *m = "aeotl";
	char *M = "AEOTL";
	int x[] = {'4', '3', '0', '7', '1'};
	int i;
	char *p = s;

	while (*s != '\0')
	{

	for (i = 0; i < 5; i++)
	{
		if (*s == *(m + i) || *s == *(M + i))

			*s = x[i];
	}
		s++;

	}
		return (p);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
