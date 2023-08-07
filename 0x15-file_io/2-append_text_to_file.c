#include "main.h"
/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename:file name.
 * @text_content:the content.
 * Return:1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t wb;

	if (!filename)
		return (-1);
	if (text_content == NULL || text_content[0] == '\0')
		return (1);
	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);
	wb = write(file, text_content, strlen(text_content));
	if (wb == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
