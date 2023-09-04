#include "main.h"

/**
 *append_text_to_file - function that appends text at end of file
 *@filename: name of the file
 *@text_content: terminted string to add at the end of file
 *Description: text_content is null, do not add anything to file
 *Return: 1 on success or -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int chr;
	int len = 0;
	int n;

	/*check if the file is null*/
	if (filename == NULL)
		return (-1);

	/*open the file in write mode and append its content*/
	chr = open(filename, O_WRONLY | O_APPEND);
	if (chr == -1)/*checks if any error occurred in opening file*/
		return (-1);

	/*check if text_content is null*/
	if (text_content != NULL)
	{
		/*return legth of text_content after examine its len*/
		for (len = 0; text_content[len];)
			len++;
	}

	/*writes into text_content based on its length in 'chr'*/
	n = write(chr, text_content, len);
	if (chr == -1 || n == -1)
		return (-1);
	close(chr);
	return (1);
}
