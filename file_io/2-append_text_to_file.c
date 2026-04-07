#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
/**
 * append_text_to_file - Ajoute du texte à la fin d'un fichier existant.
 * @filename: Le nom du fichier.
 * @text_content: La chaîne de caractères à ajouter à la fin du fichier.
 *
 * Return: 1 en cas de succès, -1 en cas d'échec.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytesWrtitten;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	bytesWrtitten = write(fd, text_content, strlen(text_content));
	if (!bytesWrtitten || bytesWrtitten != (ssize_t)strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
