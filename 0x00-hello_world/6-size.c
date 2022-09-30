#include <stdio.h>
<<<<<<< HEAD

=======
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
<<<<<<< HEAD
	printf("%s%lu%s\n", "Size of a char: ", sizeof(char), " byte(s)");
	printf("%s%lu%s\n", "Size of an int: ", sizeof(int), " byte(s)");
	printf("%s%lu%s\n", "Size of a long int: ", sizeof(long), " byte(s)");
	printf("%s%lu%s\n", "Size of a long long int: ",
			sizeof(long long), " byte(s)");
	printf("%s%lu%s\n", "Size of a float: ", sizeof(float), " byte(s)");
=======
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (0);
}
