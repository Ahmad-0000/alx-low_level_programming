#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - is a function to append a text to a file
 * @filename: is the name of the file to be appended to
 * @text_content: is the text to be appended
 * Return: is to return 1 when success, or -1 when faliure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int length;
	int written_chars;

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	length = 0;
	while (text_content[length] != '\0')
		length++;
	written_chars = write(fd, text_content, length);
	close(fd);
	if (written_chars != length)
		return (-1);
	return (1);
}
