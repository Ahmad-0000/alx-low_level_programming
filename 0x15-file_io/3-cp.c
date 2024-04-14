#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

/**
 * main - the main function
 * @argc: is the number of command line arguments
 * @argv: the array of pointers to the command line arguments
 * Return: is to return 1 when success
 */

int main(int argc, char *argv[])
{
    char buffer[1024];
    int fd1, fd2;
    int char_read = 1;
    int char_written = 0;

    umask(0);
	if (argc != 3)
    {
        fprintf(stderr, "Usage: cp file_from file_to\n");
        exit(97);
    }
    fd1 = open(argv[1], O_RDONLY);
    if (fd1 == -1)
    {
        fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }
    char_read = read(fd1, buffer, 1024);
    if (char_read == -1)
    {
        fprintf(stderr, "Error: Cant't read from file %s\n", argv[1]);
        exit(98);
    }
    fd2 = open(argv[2], O_WRONLY | O_TRUNC);
    if (fd2 == -1)
    {
        if (errno == ENOENT)
        {
            fd2 = open(argv[2], O_WRONLY | O_CREAT , S_IRUSR | S_IWUSR \
                | S_IRGRP | S_IWGRP | S_IROTH);
                if (fd2 == -1)
                {
                    fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
                    exit(99);
                }
        }
        else
        {
            fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
            exit(99);
        }
    }
    while (char_read > 0)
    {
        char_written = write(fd2, buffer, char_read);
        if (char_written == -1)
        {
            fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
            exit(99);
        }
        char_read = read(fd1, buffer, 1024);
        if (char_read == -1)
        {
              fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
              exit(98);
        }
    }
    close(fd1);
    close(fd2);
    return (1);
}
