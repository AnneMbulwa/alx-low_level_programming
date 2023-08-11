#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int close_file(int fd);
int write_err(int fd1, int fd2, char *str);
int read_err(int fd1, int fd2, char *str);
/**
 *close_file - close file descriptors
 *@fd: file descriptor
 *Return: 0
 */
int close_file(int fd)
{
	int f;

	f = close(fd);
	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (0);
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
 *create_buffer - creates buffer that allocates 1024 bytes
 *@ptr: name of file
 *Return: buffer created
 */
char *create_buffer(char *ptr)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write into %s\n", ptr);
		exit(99);
	}
	return (buf);
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
	int file_from, file_to, f;
	char *buf;
	int n;


	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	buf = create_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	f = read(file_from, buf, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1)
		{
			free(buf);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		n = write(file_to, buf, f);
		if (file_to == -1 || n == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		f = read(file_from, buf, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (f > 0);
	free(buf);
	close_file(file_from);
	close_file(file_to);

	return (0);
}
