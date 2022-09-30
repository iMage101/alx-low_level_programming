<<<<<<< HEAD
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The number to check
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	printf("\n");
=======
#include "main.h"
#include <stdio.h>
/**
*print_to_98 - print all natural numbers from input to 98
*@n: starting point
*Return: void returns nothing
*/
void print_to_98(int n)
{
	if (n <= 98)
		for (n = n; n <= 97; n++)
			printf("%d, ", n);
	else
		for (n = n; n > 98; n--)
			printf("%d, ", n);
	printf("98\n");
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
