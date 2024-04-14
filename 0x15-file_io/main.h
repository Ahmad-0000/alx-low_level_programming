#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <sys/types.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *theContent);
int append_text_to_file(const char *filename, char *theContent);
#endif
