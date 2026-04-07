#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * copy_content - Copie le contenu d'un descripteur de fichier vers un autre.
 * @file_from: Le descripteur du fichier source.
 * @file_to: Le descripteur du fichier destination.
 * @av: Le tableau des arguments (pour les messages d'erreur).
 *
 * Return: void.
 */
void copy_content(int file_from, int file_to, char **av)
{
	char buffer[1024];
	ssize_t byteRead;
	ssize_t byteWrite;

	while ((byteRead = read(file_from, buffer, 1024)) > 0)
	{
		byteWrite = write(file_to, buffer, byteRead);
		if (byteWrite == -1)
		{
			close(file_from);
			close(file_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
}

/**
 * main - copies content of a file to another
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int file_from, file_to;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	copy_content(file_from, file_to, av);
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
