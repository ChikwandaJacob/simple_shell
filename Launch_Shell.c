#include "shell.h"

/**
 * launchShell - Function launches the SHELL_H_INCLUDED
 * @args: the arguments that the user submitted
 *
 * Return: 1 on success
 */
int launchShell(char **args)
{
	pid_t pid;
	int status;

	pid = fork();

	if (args[0] == NULL)
		return (1);

	if (pid == 0)
	{
		if (execve(args[0], args, NULL) == -1)
		{
			perror("./shell");
		}
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		perror("./shell");
	}
	else
	{
		do {
			waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}

	return (1);
}
