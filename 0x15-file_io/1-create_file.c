#include "main.h"

/**
<<<<<<< HEAD
 * create_file - creates a file and add content to it
 * @filename: file name
 * @text_content: content to put in the file
 *
 * Return: 1 for success or -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, retval = 1;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	while (text_content[i])
		i++;
	retval = write(fd, text_content, i);
	close(fd);
	if (retval == -1 || retval != i)
		return (-1);
=======
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rwr = write(fd, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(fd);

>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (1);
}
