#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * read_textfile -  reads a text file and prints it to the stdo.
 * @filename : pointer to a string
 * @letters : byte count
 * Return: bytes printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, wr, ww;
	char *buff = malloc(sizeof(char) * (letters));

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	wr = read(fd, buff, letters);
	if (wr == -1)
		return (0);
	ww = write(STDOUT_FILENO, buff, wr);
	if (ww == -1)
		return (0);
	close(fd);
	free(buff);
	return (ww);
}
