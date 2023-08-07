#include "main.h"
#include <stdlib.h>

/**
 *read_textfile - reads a text file and prints its to POSIX
 *@filename: name of file
 *@letters: number of letter should be read or print
 *Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n;
	ssize_t m;
	char *buffer;
	ssize_t ptr;

	if (filename == NULL || letters == 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	ptr = open(filename, O_RDONLY);
	if (ptr == -1)
	{
		free(buffer);
		return (0);
	}
	n = read(ptr, buffer, letters);
	if (n < 0)
	{
		free(buffer);
		close(ptr);
		return (0);
	}
	m = write(STDERR_FILENO, buffer, n);
	free(buffer);
	close(ptr);
	if (m != n)
		return (0);
	return (n);
}
