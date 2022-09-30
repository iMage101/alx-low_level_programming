#include "main.h"
<<<<<<< HEAD

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array
 * @n: Length of array
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n / 2; i++)
	{
		j = n - i - 1;
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
=======
#include <stdio.h>
/**
* reverse_array - reverses the content of an array
* @a: array
* @n: number of elements of the array
* Return: no return.
*/

void reverse_array(int *a, int n)
{
	int i, j, k;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			k = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = k;
		}
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	}
}
