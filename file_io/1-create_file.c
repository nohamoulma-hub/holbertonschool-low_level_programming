#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_file - Crée un fichier et y écrit du contenu textuel.
 * @filename: Le nom du fichier à créer.
 * @text_content: Une chaîne de caractères terminée par un caractère nul
 * à écrire dans le fichier.
 *
 * Return: 1 en cas de succès, -1 en cas d'échec.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytesWrtitten;

	if (filename == NULL)
		return (-1);

	 fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
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
