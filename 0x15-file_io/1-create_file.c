#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * create_file -  a function that creates a file.
 * @filename : pointer to a string
 * @text_content : pointer to a string
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, ww, l;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 00600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l] != '\0'; l++)
		;
		ww = write(fd, text_content, l);
		if (ww == -1)
			return (-1);
	}
	return (1);
}
