#include "main.h"

/**
<<<<<<< HEAD
 * factorial - returns the factorial of a given number.
 * @n: the number
 *
 * Return: the factorial of n
 */
=======
* factorial - find factorial n
* @n: given number
* Description: find factorial of n using recursion
* Return: factorial of n
**/

>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
<<<<<<< HEAD
		return (1);

	return (n * factorial(n - 1));
=======
	{
		return (1);
	}
	else
	{
		n = factorial(n - 1) * n;
		return (n);
	}
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
