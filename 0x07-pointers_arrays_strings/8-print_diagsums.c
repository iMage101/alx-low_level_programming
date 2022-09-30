#include "main.h"
#include <stdio.h>

/**
<<<<<<< HEAD
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a: the array
 * @size: the size of the array
 */
void print_diagsums(int *a, int size)
{
	int i, row;
	int firstDiagonalSum = 0;
	int secondDiagonalSum = 0;
	int total = size * size;

	for (i = 0; i < total; i += size)
	{
		row = i / size;
		firstDiagonalSum += a[i + row];
		secondDiagonalSum += a[i + size - row - 1];
	}

	printf("%d, %d\n", firstDiagonalSum, secondDiagonalSum);
=======
  * print_diagsums - Print the sum of two diagonals of square matrix
  *
  * @a: the matrix
  * @size: the size
  *
  * Return: Nothing.
  */
void print_diagsums(int *a, int size)
{
	int b, sum1 = 0, sum2 = 0;

	for (b = 0; b < size; b++)
	{
		sum1 += a[(size + 1) * b];
		sum2 += a[(size - 1) * (b + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
