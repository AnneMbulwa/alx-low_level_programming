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
	ssize_t z;
	char *b;
	ssize_t ptr;

	ptr = open(filename, O_RDONLY);
	if (ptr == -1)
		return (0);

	b = malloc(sizeof(char) * (letters));
	n = read(ptr, b, letters);
	z = write(STDERR_FILENO, b, n);

	free(b);
	close(ptr);

	return (z);
}
