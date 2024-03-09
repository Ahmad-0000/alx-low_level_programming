#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - is a function to write the conten of a text file
 *  in to the POSIX standard output
 * @filename: is the name of the file to be written from
 * @l: is the number of the letters to be written
 * Return: is to return the number of the read and written chars,
 *	or if filename is null, or read has failed, or write has failed
 *	or the file can not be opened, the return value is 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int writtenChars = 0;
	int readChars = 0;
	int fd = 0;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(*buffer) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	readChars = read(fd, buffer, letters);
	if (readChars == -1)
		return (0);
	writtenChars = write(STDIN_FILENO, buffer, readChars);
	close(fd);
	if (writtenChars == -1 || writtenChars != (int)letters)
		return (0);
	return (writtenChars);
}
