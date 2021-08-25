#include "shell.h"
#include <string.h>

#define LSH_TOK_BUFSIZE 64
#define LSH_TOK_DELIM " \t\r\n\a"

/**
 * parseLine - splits the line or the command into an array of stringstream.
 * @line: line containing the string to be split.
 *
 * Return: array of the split line.
 */
char **parseLine(char *line)
{
	int index = 0;
	char **tokens = malloc(LSH_TOK_BUFSIZE * sizeof(char *));
	char *token;

	if (!tokens)
		exit(EXIT_FAILURE);

	token = strtok(line, LSH_TOK_DELIM);

	while (token)
	{
		tokens[index] = token;
		index++;
		token = strtok(NULL, LSH_TOK_DELIM);
	}

	tokens[index] = NULL;

	return (tokens);
}
