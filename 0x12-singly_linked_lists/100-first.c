#include <stdio.h>
<<<<<<< HEAD
#include <unistd.h>

void start(void) __attribute__((constructor));

/**
 * start - executes before main
 */

void start(void)
=======

void tortoiseAndHare(void) __attribute__ ((constructor));

/**
 * tortoiseAndHare - print line before main
 * Return: nothing
 **/
void tortoiseAndHare(void)
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
