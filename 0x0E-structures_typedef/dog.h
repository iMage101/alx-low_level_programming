#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure definition of a dog
 * @name: character string
<<<<<<< HEAD
 * @age: integer
 * @owner: character string
 */
=======
 * @age: age integer
 * @owner: character string
 */

>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
<<<<<<< HEAD
=======

>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
#endif
