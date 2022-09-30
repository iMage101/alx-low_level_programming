#include "dog.h"
#include <stdlib.h>

/**
<<<<<<< HEAD
 * free_dog - free the dogs
 * @d: pointer to dog struct
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);

		free(d);
	}
=======
 * free_dog - free dog memory
 * @d: dog
 */


void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
