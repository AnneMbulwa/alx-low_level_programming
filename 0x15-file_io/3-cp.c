#include "main.h"

int close_file(int fd);
char *create_buffer(char *str);

/**
 *close_file - close file descriptors
 *@fd: file descriptors
 *Return: 0 on success
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
 *create_buffer - creates buffer that allocates 1024 bytes
 *@str: name of file
 *Return: buffer created
 */
char *create_buffer(char *str)
{
	char *buf;

	/*allocate memory to 1024 bytes of buffer*/
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write into %s\n", str);
		exit(99);
	}
	return (buf);
}

/**
 *main - copy from one file to another
 *usage : cp file_from file_to
 *@argc: number of arguments
 *@argv: number of array of arguments
 *
 * Description: permissions are rw-rw-r--
 * FD_VALUE: value of file desscriptor
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

	/*checks if number of argument is correct*/
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	/*creating buffer for 3rd argumen*/
	buf = create_buffer(argv[2]);

	/*open file_from for 2nd argument in read mode*/
	file_from = open(argv[1], O_RDONLY);

	/*read from file_from to buff of 1024 bytes*/
	f = read(file_from, buf, 1024);

	/*create file_to and open itin write mode and we truncate it*/
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		/*checks if errors occured in reading from file_from*/
		if (file_from == -1 || f == -1)
		{
			free(buf);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		/*write into file_to based on buf and bytes read*/
		n = write(file_to, buf, f);

		/*check if errors occured in writing to file_to*/
		if (file_to == -1 || n == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		/*reads bytes from file_from based on buf*/
		f = read(file_from, buf, 1024);

		/*writes into file_to without deleting original content*/
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (f > 0);

	free(buf);
	close_file(file_from);
	close_file(file_to);

	return (0);
}
