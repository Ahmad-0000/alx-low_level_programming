#ifndef THIS_FILE
#define THIS_FILE
#include <stdlib.h>
int _putchar(char c);
void print_name(char *theName, void (*f)(char *));
void array_iterator(int *theArray, size_t theSize, void (*action)(int));
int int_index(int *theArray, int theSize, int (*cmp)(int));
#endif
