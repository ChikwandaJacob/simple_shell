#include "shell.h"

/**
 * shell_loop - calls the all the methods necessary for the shell to run.
 *
 * Return: nothing
 */
void shell_loop(void)
{
	char *line = NULL;
	char **args = NULL;
	int status;

	do {
		printf("#cisfun$ ");

		line = readLine();
		args = parseLine(line);

		status = launchShell(args);

		free(line);
		free(args);
	} while (status);
}
