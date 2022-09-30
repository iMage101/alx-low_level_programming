<<<<<<< HEAD
#include <stdlib.h>
#include <stdio.h>
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void *_calloc(unsigned int nmemb, unsigned int size);
=======
#ifndef MAIN_FILE
#define MAIN_FILE

#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void errors(void);
int _strlen(char *s);
int is_digit(char *s);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
