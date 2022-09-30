#include "main.h"
<<<<<<< HEAD

/**
 * _abs - Computes the absolute value of an integer
 * @i: The integer to compute with
 *
 * Return: The absolute value of i
 */
int _abs(int i)
{
	return (i < 0 ? i * -1 : i);
=======
/**
*_abs - computes absolute value
*@n: int to compute as absolute
*Return: absolute value
*/
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
