#ifndef VAFUNCTIONS
#define VAFUNCTIONS
#include <stdarg.h>
/**
 * struct options - is to struct a structure that holds
 *	a flag and a pointer to the associated function
 * @c: is the flag
 * @ptr: is a pointer to the associated function
 */
struct options
{
	char c;
	void (*ptr)(va_list);
};
typedef struct options opt;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const theFormat, ...);
#endif
