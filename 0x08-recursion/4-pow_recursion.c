#include "main.h"

/**
<<<<<<< HEAD
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: the number
 * @y: the power
 *
 * Return: the value of x raised to the power of y
 */
=======
* _pow_recursion - find x^y
* @x: base number
* @y: power of the base
* Description: find x^y using factorial
* Return: x^y, -1 if y is negative
*/

>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
<<<<<<< HEAD
	if (y == 1)
		return (x);

	return (x * _pow_recursion(x, --y));
=======
	return (x * _pow_recursion(x, y - 1));
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
