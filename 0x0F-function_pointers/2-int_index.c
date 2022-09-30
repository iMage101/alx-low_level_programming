#include "function_pointers.h"

/**
<<<<<<< HEAD
 * int_index - Function that searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer
 * Return: index of first element that matches with `cmp`, or -1 if none found
 */
=======
 * int_index - search for an integer in an array
 * @array: array to be searched
 * @size: size of the array
 * @cmp: flag to compare with different entry
 *
 * Return: index of the first element found,
 *			-1 if no element found or no element in the array
 */

>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

<<<<<<< HEAD
	if (size < 1 || array == NULL || cmp == NULL)
=======
	if (array == NULL || cmp == NULL || size < 1)
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
