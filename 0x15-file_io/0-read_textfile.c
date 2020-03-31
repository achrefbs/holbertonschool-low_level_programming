#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, wr;
	char* buff = malloc(sizeof(char) * (letters));
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	if((wr = read(fd, buff, letters)) == -1)
		return (0);
	buff[wr] = '\0';
	if(write(STDOUT_FILENO, buff, wr) == -1)
		return (0);
	
	close(fd);
	free(buff);
	return (wr + 1);
}