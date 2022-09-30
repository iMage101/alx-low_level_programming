#include "main.h"
<<<<<<< HEAD

/**
 * rot13 - encodes a string using rot13.
 * @s: The string
 *
 * Return: The string
 */
char *rot13(char *s)
{
	int i, j;
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char boolean;

	for (i = 0; s[i] != '\0'; i++)
	{
		boolean = 0;
		for (j = 0; alpha[j] != '\0' && boolean == 0; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = r[j];
				boolean = 1;
			}
		}
	}

=======
#include <stdio.h>
/**
*rot13 - encodes a string using rot13
*@s: input string.
*Return: the pointer to string.
*/

char *rot13(char *s)
{
	int count = 0, i;

	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == letters[i])
			{
				*(s + count) = rot13[i];
				break;
			}
		}
		count++;
	}
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (s);
}
