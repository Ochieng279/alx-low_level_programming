#include "main.h"
/**
 * append_text_to_file - function that ppends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: pointer to the string to add to the end of the file.
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions  -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	int x;
	int length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	x = write(i, text_content, length);

	if (i == -1 || x == -1)
		return (-1);

	close(i);

	return (1);
}
