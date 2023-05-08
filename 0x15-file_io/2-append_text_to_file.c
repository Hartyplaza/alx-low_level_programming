#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to be added to the name of the file.
 * @text_content: string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fild = 0, chk = 0, h = 0;

	if (!filename)
		return (-1);

	fild = open(filename, O_WRONLY | O_APPEND);
	if (fild < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[h])
			h++;

		chk = write(fild, text_content, h);
		if (chk < 0)
		return (-1);
	}
	close(fild);
	return (1);
}

