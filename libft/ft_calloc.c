/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:17:23 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/19 16:39:06 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;

	tmp = malloc(size * count);
	if (tmp == 0)
		return (NULL);
	ft_bzero(tmp, count * size);
	return (tmp);
}
// #include <stdio.h>
// #include <string.h>

// int	main()
// {
// 	char	count[] = "go hard";
// 	char	size[] = "make easily ";

// 	//printf ("%s\n", dest);
// 	//printf ("%s\n", src);
// 	printf ("my: %s\n",ft_calloc(sizeof count, sizeof size));
// 	printf ("original: %s\n",calloc(sizeof count, sizeof size));
// 	return (0);
// }
