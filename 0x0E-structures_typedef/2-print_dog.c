<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog
 * @d: pointer to struct dog
=======
#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints dog data
 * @d: dog struct
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
<<<<<<< HEAD
		printf("Name: ");
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: ");
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
=======
		printf("Name: %s\nAge: %f\nOwner: %s\n",
		(*d).name != NULL ? d->name : "(nil)",
		(*d).age,
		(*d).owner != NULL ? d->owner : "(nil)");
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	}
}
