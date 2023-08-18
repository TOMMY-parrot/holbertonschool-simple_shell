#include "my_shell.h"


/**
 * custom_getenv - prints env to the  output
 *
 * @env: enviroment
 *
 */

void custom_getenv(char **env)
{
	size_t s = 0;

	while (env[s])
	{
		write(STDOUT_FILENO, env[s], custom_strlen(env[s]));
		write(STDOUT_FILENO, "\n", 1);
		s++;
	}
}
