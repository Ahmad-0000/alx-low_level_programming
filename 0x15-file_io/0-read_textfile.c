#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - is a function to write the conten of a text file
 *	in the standard output
 * @filename: is the name of the file to be written from
 * @l: is the number of the letters to be written
 * Return: is to return the number of the read and written chars,
 *	or if filename is null, or read has failed, or write has failed
 *	or the file can not be opened, the return value is 0
 */

ssize_t read_textfile(const char *filename, size_t l)
{
	char *a;
	int WrittenChars = 0;
	int ReadChars = 0;
	int fd = 0;

	if (filename == NULL)
		return (0);
	a = malloc(sizeof(*a) * l);
	if (a == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	ReadChars = read(fd, a, l);
	if (ReadChars == -1)
		return (0);
	WrittenChars = write(STDIN_FILENO, a, ReadChars);
	close(fd);
	if (WrittenChars == -1)
		return (0);
	return (WrittenChars);
}
