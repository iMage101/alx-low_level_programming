#include "main.h"

/**
<<<<<<< HEAD
 * _strlen - Returns the length of a string
 * @s: The string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
=======
*_strlen - returns the length of the string
*@s: input string to count
*Description: returns the length of a given string
*Return: length of string as int
*/

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
