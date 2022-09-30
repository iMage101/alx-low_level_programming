#include "main.h"
<<<<<<< HEAD

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: elements count
 * @size: size
 *
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i = 0;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(nmemb * size);
	while (i < nmemb * size && ptr)
		((char *)ptr)[i++] = 0;
	return (ptr);
=======
/**
 *  _calloc - Entry point
 *  @nmemb: size of the array
 *  @size: size of the type
 *  Return: a pointer to an array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array = NULL;
	unsigned int i;
	unsigned int t;
	char *f;

	if (size == 0 || nmemb == 0)
		return (NULL);
	t = nmemb * size;
	array = malloc(t);
	f = (char *)array;
	if (f != NULL)
	{
		for (i = 0; i < t; i++)
			f[i] = 0;
		return (f);
	}
	return (NULL);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
