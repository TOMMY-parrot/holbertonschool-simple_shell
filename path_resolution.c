#include "my_shell.h"
/**
 * custom_values_path - Separate the path in new strings.
 * @arg: Command of user.
 * @env: Enviroment.
 * Return: Pointer to strings.
 */
int custom_values_path(char **arg, char **env)
{
	char *token = NULL, *path_env = NULL, *path_abs = NULL;
	size_t dir_len, command_len;
	struct stat stat_file;

	if (stat(*arg, &stat_file) == 0)
		return (-1);
	path_env = custom_get_path(env);
	if (!path_env)
		return (-1);
	token = strtok(path_env, ":");
	command_len = custom_strlen(*arg);
	while (token)
	{
		dir_len = custom_strlen(token);
		path_abs = malloc(sizeof(char) * (dir_len + command_len + 2));
		if (!path_abs)
		{
			free(path_env);
			return (-1);
		}
		path_abs = strcpy(path_abs, token);
		custom_strcat(path_abs, "/");
		custom_strcat(path_abs, *arg);

		if (stat(path_abs, &stat_file) == 0)
		{
			*arg = path_abs;
			free(path_env);
			return (0);
		}
		free(path_abs);
		token = strtok(NULL, ":");
	}
	token = '\0';
	free(path_env);
	return (-1);
}
