#include "main.h"
<<<<<<< HEAD

/**
 * _strstr - locates a substring.
 * @haystack: source string
 * @needle: the substring
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	char *resultInitial;

	for (i = 0, k = 0; haystack[i] != '\0'; i++, j++)
	{
		resultInitial = &haystack[i];
		j = 0;
		while (needle[j + k] != '\0' && haystack[i + k] != '\0'
				&& needle[j + k] == haystack[i + k])
		{
			if (haystack[i + k] != needle[j + k])
				break;
			k++;
		}

		if (needle[j + k] == '\0')
			return (resultInitial);

	}

	return (0);
=======
/**
 * _strstr - locating a substring
 * @needle: occurance to find
 * @haystack: string to search
 * Return: pointer
*/
char *_strstr(char *haystack, char *needle)
{

	while (*haystack)
	{
	char *src = haystack;
	char *sub = needle;

	while (*haystack && *sub && *haystack == *sub)
	{
		haystack++;
		sub++;
	}
	if (!*sub)
	return (src);
	haystack = src + 1;
	}
return (0);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
