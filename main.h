#ifndef SIMPLE_SHELL_HEAD
#define SIMPLE_SHELL_HEAD

#include "util.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <string.h>


#define RD_BUF 1024
#define AV_BUF 10


void strtoav(char *str, char **av);
void free_av(char **av);
char *find_path(char *av0, char **env);
int built_in(char **av, char **env);


#endif /* SIMPLE_SHELL_HEAD */
