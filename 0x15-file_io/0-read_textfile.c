#include "main.h"

/**
 *read_textfile - reads a text file and prints its to POSIX
 *@filename: name of file
 *@letters: number of letter should be read or printed
 *Return: actual number of letters it could read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t n;
	ssize_t z;
	ssize_t ptr;

	/*open file inread mode only*/
	ptr = open(filename, O_RDONLY);
	if (ptr == -1)/*checks if errors*/
		return (0);

	/*allocates memory based letters read*/
	b = malloc(sizeof(char) * letters);

	/*read letters of character array of 'b' in 'ptr'*/
	n = read(ptr, b, letters);

	/*write into file*/
	z = write(STDOUT_FILENO, b, n);

	free(b);
	close(ptr);

	return (z);
}
