#include "my_shell.h"
/**
 * custom_get_path - get variable PATH.
 * @env: enviromente
 * Return: value of the PATH.
 */

char *custom_get_path(char **env)
{
	size_t index = 0, count = 5, len = 0;
	char *path = NULL;

	for (index = 0; custom_strncmp(env[index], "PATH=", 5); index++)
		;
	if (env[index] == NULL)
		return (NULL);

	for (count = 5; env[index][len]; len++, count++)
		;
	path = malloc(sizeof(char) * (count + 1));

	if (path == NULL)
		return (NULL);

	for (len = 5, count = 0; env[index][len]; len++, count++)
		path[count] = env[index][len];

	path[count] = '\0';
	return (path);
}
