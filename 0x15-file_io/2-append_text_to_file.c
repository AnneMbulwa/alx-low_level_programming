#include "main.h"

/**
 *append_text_to_file - function that appends text at end of file
 *@filename: name of file
 *@text_content: string
 *Return: 1 on success or -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ch;
	int len = 0;
	int n;

	if (filename == NULL)
		return (-1);

	ch = open(filename, O_WRONLY | O_APPEND);
	if (ch == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	n = write(ch, text_content, len);
	if (ch == -1 || n == -1)
		return (-1);
	close (ch);
	return (1);
}
