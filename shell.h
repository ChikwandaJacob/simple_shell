#ifndef SHELL_H_INCLUDED
#define SHELL_H_INCLUDED

/* Header Files Needed*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

/* Function Prototypes */
size_t countWords(char *str);
char *readLine();
char **parseLine(char *line);
int launchShell(char **args);
void shell_loop();




#endif
