#include "main.h"

/**
<<<<<<< HEAD
 * swap_int - Swaps the values of two integers
 * @a: First integer
 * @b: Second integer
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
=======
*swap_int - swap the values of two integers
*@a: first value
*@b: second value
*Return: nothing
*/

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;

	*b = c;
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
