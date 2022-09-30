#include "main.h"
#include <stdio.h>

/**
<<<<<<< HEAD
 * main - check the code
=======
 * main - check the code for Alx School students.
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
<<<<<<< HEAD
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
=======
    char *p;

    printf("%s\n", s1);
    printf("%s", s2);
    p = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", p);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
    return (0);
}
