#include "main.h"
/**
 * create_file -  creates a file.
 * @filename:file name.
 * @text_content:the content.
 * Return:1 on success, -1.
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t wb;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (file == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	wb = write(file, text_content, strlen(text_content));
	if (wb == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);

}
