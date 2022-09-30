#include "main.h"

<<<<<<< HEAD
int _strlen(char *s);
int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: the string
 *
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len == 0)
		return (1);

	return (check_palindrome(s, 0, len - 1));
}

/**
 * _strlen - gets the length of a string
 * @s: the string
 *
 * Return: the string length
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen(++s) + 1);
}

/**
 * check_palindrome - checks if a substring is a palindrome
 * @s: the string
 * @start: the starting index of substring
 * @end: the stopping index of substring
 *
 * Return: 1 if substring is a palindrome, otherwise 0
 */
int check_palindrome(char *s, int start, int end)
{
	if (start == end)
		return (1);

	if (s[start] != s[end])
		return (0);

	if (start < end + 1)
		return (check_palindrome(s, start + 1, end - 1));

	return (1);
=======
/**
*_strlen_recursion - return string length
*@s: string point
*Return: recursion
*/

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(++s));
}

/**
*pal - palindrome
*@s: pointer to string
*@l: position
*Return: boolena
*/

int pal(char *s, int l)
{
	if (l < 1)
		return (1);
	if (*s == *(s + l))
		return (pal(s + 1, l - 2));
	return (0);
}

/**
* is_palindrome - palindrome
* @s: pointer to string
* Return: recursion
*/

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (pal(s, len - 1));
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
