#include "function_pointers.h"

/**
<<<<<<< HEAD
 * print_name - prints a name.
 * @name: the name
 * @f: the function to print with
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
=======
 * print_name - print a name using function call back
 * @name: pointer to the name to be printed
 * @f: function pointer to call back a function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
