#include "my_shell.h"
int shell_cd(char **args);
int shell_help(char **args);
int shell_exit(char **args);
int shell_ctrld(char **args);

/*
 * List of builtin commands, followed by their corresponding functions.
 */
char *builtin_str[] = {"cd", "help", "exit", "^D"};

int (*builtin_func[]) (char **) = {&shell_cd, &shell_help, &shell_exit, &shell_ctrld};

/**
 * shell_num_builtins - size
 * Return: size
 */

int shell_num_builtins(void)
{
	return (sizeof(builtin_str) / sizeof(char *));
}

/*
 * Builtin function implementations.
*/

/**
 * shell_cd - builtin to change dirs
 * @args: List of args
 * Return: 1 on success
 */
int shell_cd(char **args)
{
	if (args[1] == NULL)
	{
		fprintf(stderr, "my_shell: expected argument to \"cd\"\n");
	}
	else
	{
		if (chdir(args[1]) != 0)
		{
			perror("my_shell");
		}
	}
	return (1);
}

/**
 * shell_help - prints the help for the shell
 * @args: List of args
 * Return: Always returns 1, to continue executing.
 */
int shell_help(char **args)
{
	int k;

	printf("call 911\n");
	(void)args;
	for (k = 0; k < lsh_num_builtins(); k++)
	{
		printf("  %s\n", builtin_str[k]);
	}

	return (1);
}

/**
 * shell_exit - builtin to exit the shell
 * @args: List of args
 * Return: Always returns 0
 */
int shell_exit(char **args)
{
	(void)args;
	free(args);
	return (200);
}

/**
 * shell_ctrld - builtin to handle "^D" call
 * @args: List of args
 * Return: Always returns 0
 */
int shell_ctrld(char **args)
{
	(void)args;
	free(args);
	return (200);
}

/**
 *custom_fork_fun - foo that create a fork.
 *@arg: Command and values path.
 *@av: Has the name of our program.
 *@env: Environment
 *@input: Command line for the user.
 *@num_process: ID of proces.
 *@count: Checker add new test
 *Return: 0 success
 */

int custom_fork_fun(char **arg, char **av, char **env, char *input, int num_process, int count)
{

	pid_t child;
	int stats, m = 0;
	char *format = "%s: %d: %s: not found\n";

	if (arg[0] == NULL)
		return (1);
	for (m = 0; m < lsh_num_builtins(); m++)
	{
		if (custom_strcmp(arg[0], builtin_str[m]) == 0)
			return (builtin_func[m](arg));
	}
	child = fork();
	if (child == 0)
	{
		if (execve(arg[0], arg, env) == -1)
		{
			fprintf(stderr, format, av[0], num_process, arg[0]);
			if (!count)
				free(arg[0]);
			free(arg);
			free(input);
			exit(errno);
		}
	}
	else
	{
		wait(&stats);
		return (stats);
	}
	return (0);
}
