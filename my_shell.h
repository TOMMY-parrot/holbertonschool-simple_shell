#ifndef MY_SHELL_H
#define MY_SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>


int shell_ctrld(char **args);
int shell_cd(char **args);
int shell_help(char **args);
extern char **environ;
int shell_exit(char **args);
int custom_strcmp(char *s1, char *s2);
size_t custom_strncmp(char *s1, char *s2, size_t m);
int custom_strlen(char *s);
char *custom_strcpy(char *dest, char *src);
char *custom_strcat(char *dest, char *src);
int custom_putchar(char c);

char *custom_get_path(char **env);
int custom_values_path(char **arg, char **env);
char *custom_getline_command(void);
void custom_getenv(char **env);
char **custom_tokenize(char *input);
void custom_exit_command(char **args, char *input, int _exit);
int custom_fork_fun(char **arg, char **av, char **env,
char *input, int num_process, int count);


#endif /* MY_SHELL_H */
