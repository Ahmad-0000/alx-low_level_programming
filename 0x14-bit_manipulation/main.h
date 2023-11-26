#ifndef MIAN_H
#define MAIN_H 1
#include <stdlib.h>
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int i);
int set_bit(unsigned long int *n, unsigned int i);
unsigned int powers(unsigned int theBase, unsigned int thePower);
int clear_bit(unsigned long int *n, unsigned int i);
#endif
