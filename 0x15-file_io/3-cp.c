#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    char buffer[1024];
    int fd1, fd2;
    int char_read = 1;
    int char_written = 0;

	if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }
    fd1 = open(argv[1], O_RDONLY);
    if (fd1 == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }
    fd2 = open(argv[2], O_WRONLY | O_APPEND | O_TRUNC);
    if (fd2 == -1)
    {
        if (errno == ENOENT)
        {
            fd2 = open(argv[2],O_WRONLY | O_CREAT | O_APPEND);
                if (fd2 == -1)
                {
                    dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
                    exit(99);
                }
        }
        else
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            exit(99);
        }
    }
    while (char_read > 0)
    {
        char_read = read(fd1, buffer, 1024);
        char_written = write(fd2, buffer, char_read);
    }
    close(fd1);
    close(fd2);
}
