#include "main.h"

<<<<<<< HEAD
int check_prime(int factor, int possible_prime);

/**
 * is_prime_number - returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: the integer
 *
 * Return: 1 if the input integer is a prime number,
 * otherwise 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);

	return (check_prime(2, n));
}

/**
 * check_prime - checks if 'possible_prime' is a prime
 * number using 'factor'
 * @factor: factor to check
 * @possible_prime: a possible prime number
 *
 * Return: 1 if 'possible_prime' is a prime number,
 * otherwise 0
 */
int check_prime(int factor, int possible_prime)
{
	if (possible_prime < 2
			|| possible_prime % factor == 0)
		return (0);
	if (factor > possible_prime / 2)
		return (1);

	return (check_prime(factor + 1, possible_prime));
=======
/**
* primeNum - determine if n is a prime
* @n: test case
* @i: recurring factors
* Description: determines if n is a prime using 2 parameters
* Return: 1 if n is a prime, 0 if not
*/

int primeNum(int n, int i)
{
	if (n % i == 0)
		return (0);
	else if (n >= (i + 1) * (i * 1))
		return (primeNum(n, i + 1));
	return (1);
}

/**
* is_prime_number - determine if n is a prime
* @n: number to check
* Description: determine if n is a prime
* Return: 1 if prime, 0 if not
*/

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (primeNum(n, 2));
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
