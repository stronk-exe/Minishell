#ifndef MINISHELL_H
#define MINISHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>

void	ft_echo(char *s);

int	ft_exec(char **av, char **path, char **envp);

#endif