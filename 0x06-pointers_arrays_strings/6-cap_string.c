#include "main.h"
<<<<<<< HEAD

/**
 * cap_string - capitalizes all words of a string.
 * @str: The string
 *
 * Return: The string
 */
char *cap_string(char *str)
{
	int i, j;
	int hasWord;
	char separators[] = ",;.!?(){}\n\t\" ";

	for (i = 0, hasWord = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			hasWord = 1;

		for (j = 0; separators[j] != '\0'; j++)
		{
			if (separators[j] == str[i])
				hasWord = 1;
		}

		if (hasWord)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= ('a' - 'A');
				hasWord = 0;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
				hasWord = 0;
			else if (str[i] >= '0' && str[i] <= '9')
				hasWord = 0;
		}
	}

=======
#include <stdio.h>
/**
 * *cap_string - function
 * @str: Pointer
 * Return: poniter return to function.
 */

char *cap_string(char *str)
{
	int symb[14] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 97 && str[0] <= 122)
	{
			str[0] = str[0] - 32;
	}
	for (j = 0; j < 14; j++)
		if (str[i] >= 97 && str[i] <= 122 && str[i - 1] == symb[j])
			str[i] = str[i] - 32;
	}
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (str);
}
