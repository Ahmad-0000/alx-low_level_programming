#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - is a function to write the conten of a text file
 *  in to the POSIX standard output
 * @filename: is the name of the file to be written from
 * @letters: is the number of the letters to be written
 * Return: is to return the number of the read and written chars.
 *	If "filename" is null, or "read" failed, or "write" failed
 *	or the file can not be opened, the return value is 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	size_t writtenChars = 0;
	size_t readChars = 0;
	long int writtenCharsInt = 0;
	long int readCharsInt = 0;
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
	readCharsInt = (int)readChars;
	if (readCharsInt == -1)
		return (0);
	writtenChars = write(STDOUT_FILENO, buffer, readChars);
	writtenCharsInt = (int)writtenChars;
	close(fd);
	free(buffer);
	if (writtenCharsInt == -1 || writtenChars != readChars)
	return (0);
	return (writtenChars);
}
