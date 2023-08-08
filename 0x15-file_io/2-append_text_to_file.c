#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @text_content: string added to end of file.
 * @filename: pointer to the file name.
 *
 * *Return: 1 on success and -1 on failure
 *          Return 1 if the file exists and -1
 *          if the file does not exist or if you
 *          do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, p, ln = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ln = 0; text_content[ln];)
			ln++;
	}

		o = open(filename, O_WRONLY | O_APPEND);
		if (o == -1)
			return (-1);

		p = write(o, text_content, ln);
		if (p == -1)
			close(o);
		return (-1);

		close(o);
		return (1);
	}
