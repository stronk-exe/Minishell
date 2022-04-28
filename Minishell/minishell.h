#ifndef MINISHELL_H
#define MINISHELL_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <readline/readline.h>
# include <readline/history.h>

void	ft_echo(char *s, char **env);

int	ft_exec(char **av, char **path, char **envp);

// ----------------- path ---------------------//
char	**get_path(char **envp);
char	*get_new_path(char **path, char **cmd);

// ---------------- utils --------------------//
char	**ft_split(char *s, char c);
char	*ft_strdup(const char *s1);
int		ft_strlen(const char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char	*s, int start, int len);

#endif