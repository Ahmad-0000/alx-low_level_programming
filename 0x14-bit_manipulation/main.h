#ifndef MIAN_H
#define MAIN_H
#include <stdlib.h>

/**
 * union temp: a union used to check the endianness of a CPU
 * @data: to hold a number spans two bytes
 * @s: a structure with 2 members each spans 1 byte
 */

union temp
{	unsigned data;
	struct temp2
	{
		unsigned b :8;
		unsigned c :8;
	} s;
} u;

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int i);
int set_bit(unsigned long int *n, unsigned int i);
unsigned int powers(unsigned int theBase, unsigned int thePower);
int clear_bit(unsigned long int *n, unsigned int i);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int isNotZero(unsigned long int n, unsigned int i);
int get_endianness(void);
#endif
