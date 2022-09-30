#include "main.h"

/**
<<<<<<< HEAD
 * _strcpy - Copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: The destination
 * @src: The source
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src[len])
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';

=======
**_strcpy - copies string src to buffer pointed to by dest
*@dest: string pointer
*@src: buffer pointer
*Description: cpies string src to buffer
*Return: dest pointer
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (i >= 0)
	{
		dest[i] = src[i];

		if (src[i] == '\0')
			return (dest);
		i++;
	}
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (dest);
}
