#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, ww, l;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
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
	close(fd);
	return (1);
}