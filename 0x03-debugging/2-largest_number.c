#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
<<<<<<< HEAD
{
	int largest;

	if (a > b)
	{
		if (a > c)
		{
			largest = a;
		}
		else
		{
			largest = c;
		}
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
=======
{int largest;

if (a > b && a > c)
{
largest = a;
}
else if (b > c)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
}

>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
