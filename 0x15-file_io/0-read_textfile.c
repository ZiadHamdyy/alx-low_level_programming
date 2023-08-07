#include "main.h"
/**
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
        int file;
        ssize_t r_bytes, w_bytes;
        char *buf;

        if (!filename)
                return (0);
        file = open(filename, O_RDONLY);
        if (file == -1)
                return (0);
	buf = malloc(sizeof(char) * letters);

        r_bytes = read(file, buf, letters);
        if (r_bytes == -1)
	{
		free(buf);
                return (0);
	}
	close(file);
        w_bytes = write(STDOUT_FILENO, buf, r_bytes);
        if (w_bytes == -1)
	{
		free(buf);
                return (0);
	}
        return (w_bytes);
}
