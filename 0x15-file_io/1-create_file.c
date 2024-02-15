#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - is a function to create a file
 * @filename: is the filename
 * @theContent: is the content to be written inside the file
 * Return: is to return 1 when success, or -1 when faliure
 */

int create_file(const char *filename, char *theContent)
{
	int fd, i, theWriteState;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		fd = creat(filename, 0600);
	}
	else
	{
		theWriteState = ftruncate(fd, 0);
		if (theWriteState == 0)
			return (1);
		return (-1);
	}
	if (fd == -1)
		return (-1);
	if (theContent == NULL)
		return (1);
	for (i = 0; theContent[i] != '\0'; i++)
		;
	theWriteState = write(fd, theContent, i);
	if (theWriteState != i)
		return (-1);
	return (1);
}
