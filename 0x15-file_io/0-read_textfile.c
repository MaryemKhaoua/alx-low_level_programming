#include "main.h"

/**
 * read_textfile - function that converts a binary number to an unsigned int
 * @filename: pointer
 * @letters: size_t
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t nbread, nbwrite;
	char *buff;

	if (!filename)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buff = malloc(letters * sizeof(char));
	if (!buff)
		return (0);
	nbread = read(file, buff, letters);
	nbwrite = write(STDOUT_FILENO, buff, nbread);

	free(buff);
	close(file);
	return (nbwrite);
}
