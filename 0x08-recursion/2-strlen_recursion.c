#include "main.h"

/**
<<<<<<< HEAD
 * _strlen_recursion - returns the length of a string.
 * @s: the string
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen_recursion(++s) + 1);
=======
* _strlen_recursion - return string length
* @s: string
* Description: find string length using recursion
* Return: string length
*/

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);

	if (s[1] == '\0')
	{
		return (1);
	}
	else
	{
		return (_strlen_recursion(&s[1]) + 1);
	}
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
