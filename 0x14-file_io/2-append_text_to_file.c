#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - counts the length of a given string
 * @s: pointer to a string , characters in string are counted
 * Description: counts the length of string pointed to by *s
 *
 * Return: count of charachters in a string
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != 0)
	{
		count++;
		s++;
	}
	return (count);
}

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: name of file
 * @text_content: text to put in file
 * @Return: 1 for success, -1 for fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL && filename != NULL)
	{
		return (1);
	}
	else if (text_content == NULL && filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_APPEND | O_WRONLY, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	len = _strlen(text_content);
	if (write(fd, text_content, len) != len)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
