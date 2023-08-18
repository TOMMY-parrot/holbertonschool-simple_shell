#include "my_shell.h"
/**
 * custom_getline_command -  gets inputs
 * Return: input.
 */

char *custom_getline_command(void)
{
	char *input = NULL;
	size_t character_count = 0;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2);

	if (getline(&input, &character_count, stdin) == -1)
	{
		free(input);
		return (NULL);
	}

	return (input);
}
