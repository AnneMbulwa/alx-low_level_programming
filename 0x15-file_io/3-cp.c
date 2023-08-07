#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void close_file(int fd);
int write_err(int fd1, int fd2, char *str);
int read_err(int fd1, int fd2, char *str);
/**
 *close_file - close file descriptors
 *@fd: file descriptor
 */
void close_file(int fd)
{
	int f;

	f = close(fd);
	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 *write_err - hanndles and prints the write error
 *@fd1: first descriptor
 *@fd2: second descriptor
 *@str: file name
 *Return: 99
 */
int write_err(int fd1, int fd2, char *str)
{
	dprintf(STDERR_FILENO, "Eroor : Can't write to %s\n", str);
	close_file(fd1);
	close_file(fd2);
	exit(99);
}

/**
 *read_err - handles the read error
 *@fd1: first descriptor
 *@fd2: second descriptor
 *@str: file name
 *Return: 98
 */
int read_err(int fd1, int fd2, char *str)
{
	dprintf(STDERR_FILENO, "Error : Can't read from file %s\n", str);
	close_file(fd1);
	close_file(fd2);
	exit(98);
}

/**
 *main - copy from one file to another
 *usage : cp file_from file_to
 *@argc: number of arguments
 *@argv: array of arguments
 *
 *Return: 97 if incorrect arguments
 *98 if file_from doesn't exit
 *99 if can't write or create to file_to
 *100 if file close fails
 *0 otherwise
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	char *buffer[1024];
	int n, m;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	do {
		m = read(file_from, buffer, 1024);
		if (m == -1)
		{
			dprintf(STDERR_FILENO, "Error : Can't read from file %s\n", argv[1]);
			exit(98);
		}
		n = write(file_to, buffer, m);
		if (m == -1 || m != n)
		{
			dprintf(STDERR_FILENO, "Error : Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	while (m == 1024);
	{
		close_file(file_from);
		close_file(file_to);

		return (0);
	}
}
