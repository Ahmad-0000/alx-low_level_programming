#ifndef MIAN_H
#define MAIN_H
#include <stdlib.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t l);
int create_file(const char *filename, char *theContent);
int append_text_to_file(const char *filename, char *theContent);
#endif
