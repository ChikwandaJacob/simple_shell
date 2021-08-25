# Simple Shell

This directory contains a simple version of linux terminal made in C programming language.

## About Shell

This Shell shall give the user the ability to execute commands that can be executed on the original linux shell. However, it will not encompass every functionality that the original shell provides. These will probably be implemented in future versions.

## Development Log

This briefly shows areas that were focussed on while implementing this system. Its a step by step log that was followed while implementing this system.

### First Version Log

#### 3 important Goals for version 0.1

_1. Make System display a prompt and wait for the user to type a command. A command line should always ends with a new line._

_2. Make System Execute Command. If command fails System should handle the error by outputiing **./shell: No such file or directory**_

_3. Make System display the prompt each time a command has been executed._

#### Anticipated Challenge(s) for version 0.1

_1. Proper handling of forked processes. Since the exec family of commands replaces the parent process we will have to handle this replacle so as to accomplish the 3rd goal._

#### Possible Limitations In Version 0.1

_1. System will not support command line arguments. In other words only single line commands will be executed. E.g. **/bin/ls**_

_2. System will not make use of global environment **$PATH** variable, so commands will have to contain the path to the executable programs found in the **/bin/** directory on the linux machine._

#### Version 0.1 SUCESSFULLY DONE

On your linux machine clone the project and run **gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o shell_v01** then run it in the terminal by running **./shell_v01**

### Second Version Update

#### Improvement(s)

_1. System can handle commands with multiple options. E.g. **/bin/ls -l**_

