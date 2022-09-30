#include "main.h"

/**
<<<<<<< HEAD
 * malloc_checked - allocates memory using malloc.
 * @b: the memory size
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);
	if (memory == NULL)
		exit(98);

	return (memory);
=======
 * malloc_checked - allocates memory using malloc
 * @b: bytes allocate
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
