#include "shell.h"
/**
 *
 *
 *
 *
 */
int main(void)
{
	char *prompt = "myshell> ";

	while (1)
	{
		printf("%s", prompt);
		char *command = read_command();
		char **argv = parse_command(command);

		execute_command(argv);
		free(command);
		free(argv);
	}
	return (0);
}
