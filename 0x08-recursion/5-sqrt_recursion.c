#include "main.h"

<<<<<<< HEAD
int get_sqrt(int n, int possible_root);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number
 *
 * Return: returns the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	return (get_sqrt(n, 1));
}

/**
 * get_sqrt - tries to get the square root of n by continously
 * comparing the square of 'possible_root' to n
 * @n: the number
 * @possible_root: a possible root of n
 *
 * Return: square root of n, -1 otherwise
 */
int get_sqrt(int n, int possible_root)
{
	int square = possible_root * possible_root;

	if (square == n)
		return (possible_root);
	if (square < n)
		return (get_sqrt(n, ++possible_root));

	return (-1);
=======
/**
* sqr - finds square root of n
* @n: number to square
* @i: test case for root
* Description: find square root of n using recursion and two variables
* Return: square root of n or -1 if none.
*/

int sqr(int n, int i)
{
	if (n == i * i)
		return (i);
	else if (n < i * i)
		return (-1);
	return (sqr(n, i + 1));
}

/**
* _sqrt_recursion - find natural square root of n
* @n: number to square
* Description: find square root of n using recursion
* Return: square root of n or -1 if none
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqr(n, 0));
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
