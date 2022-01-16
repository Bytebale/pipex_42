/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:13:51 by lshonta           #+#    #+#             */
/*   Updated: 2022/01/16 15:54:12 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_error(void)
{
	perror("\033[31mError");
	exit(EXIT_FAILURE);
}

char	*look_path(char *comand, t_pipex *data)
{
	int		i;
	char	**all_path;
	char	*part_path;
	char	*path;

	i = 0;
	while (ft_strnstr(data->envp[i], "PATH", 4) == 0)
		i++;
	all_path = ft_split(data->envp[i] + 5, ':');
	i = 0;
	while (all_path[i])
	{
		part_path = ft_strjoin(all_path[i], "/");
		path = ft_strjoin(part_path, comand);
		free(part_path);
		if (access(path, F_OK) == 0)
			return (path);
		i++;
	}
	return (0);
}

void	ft_execve(t_pipex *data)
{
	char	**comand;
	char	*path;

	comand = ft_split(data->argv[data->cmd], ' ');
	path = look_path(comand[0], data);
	if (execve(path, comand, data->envp) == -1)
		ft_error();
}
