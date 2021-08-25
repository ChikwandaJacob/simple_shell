#include "shell.h"

/**
 * readLine - gets users input
 *
 * Return: String containing submitted lines of code
 */
char *readLine()
{

	char *line = NULL;
	size_t line_buffer = 0;

	if (getline(&line, &line_buffer, stdin) == -1)
	{
		if (feof(stdin))
		{
			exit(EXIT_SUCCESS);
		}
		else
		{
			printf("Error\n");
			perror("readline");
			exit(EXIT_FAILURE);
		}
	}

	return (line);
}
