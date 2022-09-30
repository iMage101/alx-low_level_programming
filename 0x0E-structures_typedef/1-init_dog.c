#include "dog.h"
#include <stdlib.h>

/**
<<<<<<< HEAD
 * init_dog - initialize a variable of type `struct dog`
 * @d: struct dog
 * @name: string for name
 * @age: integer for age
 * @owner: string for owners name
 */
=======
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to dog name vaariable
 * @name: pointer to the name variable
 * @age: age of the dog
 * @owner: pointer to the name variable of the onwer of the dog
 */

>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
