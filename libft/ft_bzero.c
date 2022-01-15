/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 01:24:11 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/07 15:26:10 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
	return (s);
}
// #include <stdio.h>
// #include <string.h>

// int	main()
// {
// 	char	dest[] = "go hard";
// 	//const char	src[] = "make easily ";

// 	printf ("%s\n", dest);
// 	//printf ("%s\n", src);
// 	printf ("my: %s\n",ft_bzero(dest, 3));
// 	printf ("original: %s\n",bzero(dest, 5));
// 	return (0);
// }