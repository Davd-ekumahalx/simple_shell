#include "shell.h"
void read_command(char *command, size_t size) {
if (fgets(command, size, stdin) == NULL) {
if (feof(stdin)){
dave_print("\n");
exit(EXIT_SUCCESS);
} else {
dave_print("Error while reading input.\n");
exit(EXIT_FAILURE);
}
}
command[strcspn(command, "\n")] = '\0'; 
}
