<<<<<<< HEAD
#include<unistd.h>

/**
* _putchar - pribts a character
* @c: the chracter to print
*
* Return: 0 on success
*/

=======
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
int _putchar(char c)
{
	return (write(1, &c, 1));
}
