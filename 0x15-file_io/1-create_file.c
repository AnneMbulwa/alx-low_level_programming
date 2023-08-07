#include "main.h"

/**
 *create_file - creates file
 *@filename: name of file
 *@text_content: string
 *Return: 1 on success or -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int str;
	int len = 0;
	int n;

	if (filename == NULL)
		return (-1);
	str = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	n = write(str, text_content, len);
	if (str == -1 || len != n)
		return (-1);
	close(str);

	return (1);
}
