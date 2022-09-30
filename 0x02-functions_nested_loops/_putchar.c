#include <unistd.h>
<<<<<<< HEAD

=======
#include "main.h"
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
