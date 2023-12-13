#include "shell.h"
void dave_print(const char *message){
write(STDOUT_FILENO, message, strlen(message));
}
