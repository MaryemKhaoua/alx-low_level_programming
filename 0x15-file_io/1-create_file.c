#include "main.h"
/**
 * create_file - Entry function
 * @filename: Pointer
 * @text_content: Pointer
 * Return: (1) SUCCESS  or (-1) FAIL
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len, nbr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		nbr = write(fd, text_content, len);
		if (nbr == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
