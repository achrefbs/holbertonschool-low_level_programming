#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
int main(int ac, char *av[])
{
	int fd ,rw, cw;
	int fd2, ww, cw2;
	char *buff = malloc(sizeof(char) * 1024);
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(av[1],O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	rw = read(fd, buff, 1024);
	if (rw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	cw = close(fd);
	if (cw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	}
	fd2 = open(av[2],O_WRONLY | O_TRUNC | O_CREAT, 00664);
	ww = write(fd2, buff, 1024);
	if (fd2 == -1 || ww == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	cw2 = close(fd2);
	if (cw2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
	}
	free(buff);
	return (0);
}