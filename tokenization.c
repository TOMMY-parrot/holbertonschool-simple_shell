#include "my_shell.h"
/**
 * custom_tokenize - tokenizes a stirng
 * @input: what the user inputed
 * Return: a pointer
 */

char **custom_tokenize(char *input)
{
	char **tokens = NULL;
	char *token = NULL;
	size_t r = 0;
	int size = 0;

	if (input == NULL)
		return (NULL);

	for (r = 0; input[r]; r++)
	{
		if (input[r] == ' ')
			size++;
	}
	if ((size + 1) == custom_strlen(input))
		return (NULL);
	tokens = malloc(sizeof(char *) * (size + 2));
	if (tokens == NULL)
		return (NULL);

	token = strtok(input, " \n\t\r");

	for (r = 0; token != NULL; r++)
	{
		tokens[r] = token;
		token = strtok(NULL, " \n\t\r");
	}
	tokens[r] = NULL;
	return (tokens);
}
