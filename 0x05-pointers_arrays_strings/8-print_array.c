<<<<<<< HEAD
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers,
 * followed by a new line
 * @a: The array
 * @n: The number of elements of the array to be printed
 */
=======
#include "main.h"
#include <stdio.h>

/**
*print_array - print n digits of an array
*@a: array to print
*@n: number of values to print
*Description: prints n digits of array
*Return: nothing
*/

>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
<<<<<<< HEAD
		printf("%d%s", a[i], i != n - 1 ? ", " : "");
=======
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	printf("\n");
}
