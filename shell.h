#ifndef SHELL_H
#define SHELL_H


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


#define MAX_COMMAND_LENGTH 1024
#define MAX_ARGUMENTS 10

int main();
char **parse_command();
int execute_command();
void print_prompt();
char *read_command();
void handle_signal();

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1
#endif
