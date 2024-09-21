#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * create_file - is a function to create a file
 * @filename: is the filename
 * @text_content: is the content to be written inside the file
 * Return: is to return 1 when success, or -1 when faliure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, written_chars, length;

	fd = open(filename, O_WRONLY | O_TRUNC);
	umask(0);
	if (errno == ENOENT)
		fd = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	length = 0;
	while (text_content[length] != '\0')
		length++;
	written_chars = write(fd, text_content, length);
	close(fd);
	if (written_chars != length)
		return (-1);
	return (1);
}

