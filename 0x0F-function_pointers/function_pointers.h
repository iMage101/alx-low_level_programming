<<<<<<< HEAD
#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
=======
#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
void print_name(char *, void (*)(char *));
void array_iterator(int *, size_t, void (*)(int));
int int_index(int *, int, int (*)(int));
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e

#endif
