<<<<<<< HEAD
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

void print_str(char *s);

/**
 * print_all - prints anything.
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, hasprint = 0;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", (int)va_arg(args, int));
				hasprint = 1;
				break;
			case 'c':
				printf("%c", (char)va_arg(args, int));
				hasprint = 1;
				break;
			case 'f':
				printf("%f", (float)va_arg(args, double));
				hasprint = 1;
				break;
			case 's':
				print_str((char *)va_arg(args, char *));
				hasprint = 1;
				break;
			default:
				hasprint = 0;
				break;
		}
		i++;
		if (format[i] && hasprint)
			printf(", ");
	}
	printf("\n");
	va_end(args);
}

/**
 * print_str - prints a str
 * @s: pointer to str
 */
void print_str(char *s)
{
	if (s)
	{
		printf("%s", s);
		return;
	}
	printf("(nil)");
=======
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_c - print a char
 * @c: char to print
 *
 * Return: void
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_s - prints a string
 * @s: string to print
 *
 * Return: void
 */
void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_i - prints an int
 * @i: int to print
 *
 * Return: void
 */
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_f - prints a float
 * @f: float to print
 *
 * Return: void
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_all - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};
	va_list valist;
	char *separator = "";

	va_start(valist, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (p[j].t != NULL)
		{
			if (*(p[j].t) == format[i])
			{
				printf("%s", separator);
				p[j].f(valist);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
