#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - is a function to append a text to a file
 * @filename: is the name of the file to be appended to
 * @theContent: is the text to be appended
 * Return: is to return 1 when success, or -1 when faliure
 */

int append_text_to_file(const char *filename, char *theContent)
{
	int fd = 0, theWriteState, theLength;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND);
	if (fd == -1)
		return (-1);
	if (theContent == NULL)
		return (1);
	for (theLength = 0; theContent[theLength] != '\0'; theLength++)
		;
	theWriteState = write(fd, theContent, theLength);
	if (theWriteState == -1)
		return (-1);
	return (1);
}
