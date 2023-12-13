#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

void display_prompt(void);
void dave_print(const char *message);
void read_command(char *command, size_t size);
void execute_command(const char *command);

#endif
