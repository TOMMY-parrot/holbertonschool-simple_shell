#include "my_shell.h"

/**
 * custom_strcat - ncatenates two strings
 *
 * @dest: Destination string
 *
 * @src: Origin string
 * Return: Always 0
 */



char *custom_strcat(char *dest, char *src)
{
	int m, s = 0;

	for (m = 0; dest[m] != '\0'; m++)
	{
	}
	for (s = 0; src[s] != '\0'; s++)
	{
		dest[s] = src[s];
		m++;

	}
	dest[m] = '\0';
return (dest);
}



/**
 * custom_strcmp - Compares two strings
 *
 * @s1:  string
 * @s2: other string
 *
 * Return: multiple returns
 *
 */

int custom_strcmp(char *s1, char *s2)
{
	int k = 0;
	int num;

	while (s1[k] != 0 && s2[k] != 0 && s1[k] == s2[k])
		k++;
num = s1[k] - s2[k];
return (num);

}

/**
 * custom_strlen - gets the size of a string
 * @s: the string for mesuring
 * Return: the length of the string
 */

int custom_strlen(char *s)
{
	int d;

	for (d = 0; s[d] != 0; d++)
		;

	return (d);
}

/**
 *custom_strncmp -  function that compares two strings.
 *@s1: string one
 *@s2: string two
 *@n: character number
 * Return: difference
 */

size_t custom_strncmp(char *s1, char *s2, size_t n)
{
	size_t m, j;

	for (j = 0; s1[j] != '\0' && j < n; j++)
	{
		m = s1[j] - s2[j];

		if (m != 0)
		{
			return (m);
		}
	}
	return (0);
}

/**
 * custom_strcpy - copies the string pointed to by src into dest
 * @dest: destination of the copy
 * @src: source of the copy
 *
 * Return: char pointer to dest
 */

char *custom_strcpy(char *dest, char *src)
{
	int l = 0;

	for (l = 0; src[l] != '\0'; l++)
	{
		dest[l] = src[l];
	}
	dest[l + 1] = 0;
	return (dest);
}
