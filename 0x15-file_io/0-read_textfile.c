#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t l)
{
	char *a;
	unsigned WrittenChars = 0;
	int fd = 0;

	if (filename == NULL)
		return (0);
	a = malloc(l);
	if (a == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	WrittenChars = read(fd, a, l);
	if (WrittenChars != l)
		return (0);
	WrittenChars = write(STDIN_FILENO, a, l);
	close(fd);
	if (WrittenChars == l)
		return (WrittenChars);
	return (0);

}
