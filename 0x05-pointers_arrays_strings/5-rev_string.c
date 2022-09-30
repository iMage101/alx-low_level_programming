#include "main.h"

/**
<<<<<<< HEAD
 * rev_string - Reverses a string
 * @s: The string
 */
void rev_string(char *s)
{
	int len = 0;
	int i, j;
	char temp;

	/* Get the length */
	while (s[len])
		len++;

	/* Swap each character */
	i = len;
	while (--i >= len / 2)
	{
		j = len - i - 1;
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;

=======
*rev_string - reverse a string
*@s: string to reverse
*Description: reverses the string
*Return: nothing
*/

void rev_string(char *s)
{
	int i = 0;

	int j = 0;

	char temp[1000];

	while (s[i] != '\0')
	{
		i++;
	}

	for (; i > 0; i--)
	{
		temp[j] = s[i - 1];
		j++;
	}

	while (i < j)
	{
		s[i] = temp[i];
		i++;
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	}
}
