#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	char *buff;
	ssize_t nbytes;

	if (filename == NULL || letters == 0)
		return (0);

	fptr = fopen(filename, "r");
	if (fptr == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		fclose(fptr);
		return (0);
	}

	nbytes = fread(buff, sizeof(char), letters, fptr);
	if (nbytes < 0)
	{
		free(buff);
		fclose(fptr);
		return (0);
	}

	if ((size_t) fwrite(buff, sizeof(char), nbytes, stdout) != (size_t) nbytes)
	{
		free(buff);
		fclose(fptr);
		return (0);
	}

	free(buff);
	fclose(fptr);
	return (nbytes);
}
