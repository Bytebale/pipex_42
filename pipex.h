/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:09:54 by lshonta           #+#    #+#             */
/*   Updated: 2022/01/16 15:51:36 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <sys/wait.h>
# include <fcntl.h>
# include "./libft/libft.h"

typedef struct s_pipex
{
	int		argc;
	int		infile;
	int		outfile;
	int		cmd;
	int		last_cmd;
	char	**argv;
	char	**envp;
}	t_pipex;

void	init_data(int argc, char **argv, char **envp, t_pipex *data);
void	ft_childs(t_pipex *data);
void	ft_execve(t_pipex *data);
char	*look_path(char *comand, t_pipex *data);
void	ft_error(void);

#endif
