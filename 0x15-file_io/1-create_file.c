#include "main.h"
/**
 * create_file - Entry function
 * @filename: Pointer
 * @text_content: Pointer
 * Return: (1) SUCCESS  or (-1) FAIL
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int len = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	while (text_content && text_content[len])
		len++;
	write(file, text_content, len);
	close(file);
	return (1);
}
