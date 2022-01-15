/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:13:32 by lshonta           #+#    #+#             */
/*   Updated: 2022/01/15 19:51:31 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_childs(t_pipex *data)
{
	
}

void	init_data(int argc, char **argv, char **envp)
{
	t_pipex	*data;

	data->argc = argc;
	data->argv = argv;
	data->envp = envp;
	data->cmd = 2;
	data->last_cmd = argc - 2;
	data->infile = open(argv[1], O_RDONLY, 0777);
	data->outfile = open(argv[argc - 1], O_WRONLY | O_CREAT | O_TRUNC, 0777);
}

int	main(int argc, char **argv, char **envp)
{
	t_pipex	*data;

	if (argc >= 5)
	{
		init_data(argc, argv, envp);
		dab2(data->infile, STDIN_FILENO);
		while (data->cmd <= data->last_cmd)
		{
			ft_childs(data);
			data->cmd++;
		}
		data->cmd = 2;
		while (data->cmd++ < data->last_cmd)
			waitpid(-1, NULL, 0);
	}
	else
	{
		ft_putstr_fd("Error\nAdd arguments!\n", 2);
		exit(EXIT_FAILURE);
	}
}
