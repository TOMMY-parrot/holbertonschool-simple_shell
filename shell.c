#include "my_shell.h"
/**
 * main - Main arguments functions
 * @argc: Count of argumnents
 * @argv: Arguments
 * @env: Environment
 * Return: custom_exit = 0.
 */
int main(int argc, char **argv, char **env)
{
	int pathValue = 0, exitstatus = 0, is_path = 0;
	char *inputline = NULL, /**ptr to inpt*/ **commandtokens = NULL; /**tokenized commands*/
	(void)argc;
	while (1)
	{
		errno = 0;
		inputline = custom_getline_command();/** reads user input*/
		if (inputline == NULL && errno == 0)
			return (0);
		if (inputline)
		{
			pathValue++;
			commandtokens = tokenize(inputline);/** tokenizes or parse user input*/
			if (!commandtokens)
				free(inputline);
			if (!custom_strcmp(commandtokens[0], "env"))/**checks if user wrote env"*/
				custom_getenv(env);
			else
			{
				is_path = custom_values_path(&commandtokens[0], env);/** tokenizes PATH*/
				status = custom_fork_fun(commandtokens, argv, env, inputline, pathValue, is_path);
					if (exitstatus == 200)
					{
						free(inputline);
						return (0);
					}
				if (is_path == 0)
					free(commandtokens[0]);
			}
			free(commandtokens); /*free up memory*/
		}
		else
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);/** Writes to standard output*/
			exit(exitstatus);
		}
		free(inputline);
	}
	return (exitstatus);
}
