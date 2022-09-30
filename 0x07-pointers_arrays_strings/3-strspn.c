#include "main.h"

/**
<<<<<<< HEAD
 * _strspn - gets the length of a prefix substring.
 * @s: the string
 * @accept: prefix
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				break;
			}
		}

		if (accept[j] == '\0')
			break;
	}

	return (length);
=======
*_strspn - get length of a prefix substring
*@s: string
*@accept: bytes being compared
*Description: finds number of bytes required to find accept in s
*Return: bytes required to find accept
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, ex;

	for (i = 0; s[i] != '\0'; i++)
	{
		ex = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				ex = 1;
			}
		}
		if (ex == 0)
		{
			return (i);
		}
	}
	return (i);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
