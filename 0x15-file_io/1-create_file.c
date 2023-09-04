#include "main.h"

/**
 *create_file - create file
 *@filename: name of file
 *@text_content: terminated string to write to file
 *Description: text_content is null
 *Return: 1 on success or -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int str;
	int len = 0;
	int n;

	/*checks if file is null*/
	if (filename == NULL)
		return (-1);

	/*create file, opens it, writes then truncates*/
	str = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	/*checks if the text_content isn't null*/
	if (text_content != NULL)
	{
		/*checks through the length of text and returns its len*/
		for (len = 0; text_content[len];)
			len++;
	}

	/*write into the text based on length in str file*/
	n = write(str, text_content, len);
	if (str == -1 || len != n)
		return (-1);
	close(str);

	return (1);
}
