#include "main.h"

/**
 * append_text_to_file - At the end of a file append text.
 * @filename: File name should have a pointer.
 * @text_content: End of the file should contain string.
 *
 * Return: Filename is NULL - -1 or if the function fails.
 *         User lacks write permissions - -1 if file name fails.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
