<<<<<<< HEAD
#ifndef LIST_H
#define LIST_H
#include<stdio.h>
#include<string.h>
#include<limits.h>
#define MAX_COUNT (sizeof(unsigned long int) * 8)

int _putchar(char c);
=======
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
