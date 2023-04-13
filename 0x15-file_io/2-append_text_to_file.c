#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: if the filename is NULL - -1 function fails.
 *         If the file does not exist the user lacks  write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int u, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	u = open(filename, O_WRONLY | O_APPEND);
	w = write(u, text_content, len);

	if (u == -1 || w == -1)
		return (-1);

	close(u);

	return (1);
}

