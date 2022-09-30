#include "main.h"
<<<<<<< HEAD

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: The string
 *
 * Return: The string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= ('a' - 'A');
		i++;
	}

	return (str);
=======
#include <stdio.h>
/**
* string_toupper - changes all lowercase letters to uppercase
* @s: input string.
* Return: the pointer to dest.
*/

char *string_toupper(char *s)
{
	int count;

	count = 0;

	while (*(s + count) != '\0')
	{
		if ((*(s + count) >= 97) && (*(s + count) <= 122))
			*(s + count) = *(s + count) - 32;
		count++;
	}
	return (s);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
