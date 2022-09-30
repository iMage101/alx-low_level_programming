#include "function_pointers.h"

/**
<<<<<<< HEAD
 * array_iterator - execute a function pointer on each element of an array
 * @array: array of integers
 * @size: size of array
 * @action: function pointer
 */
=======
 * array_iterator - function to act on an array of element
 * @array: an array of element of type int
 * @size: size of the array
 * @action: callback function pointing to another function
 */

>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

<<<<<<< HEAD
	if (!array || !action)
=======
	if (array == NULL || action == NULL)
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
