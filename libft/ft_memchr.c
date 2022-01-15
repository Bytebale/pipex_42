/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribovvladimir <gribovvladimir@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:19:57 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/13 16:50:17 by gribovvladi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	i = 0;
	str = (const char *) s;
	if (c > 256)
		c -= 256;
	while (i < n)
	{
		if (str[i] == c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>

// int	main()
// {
// 	char	s[] = "qwerty";

// 	printf("my: %s\n", ft_memchr((void *)s, 'e', sizeof(s)));
// 	printf("orig: %s\n", memchr((void *)s, 'e', sizeof(s)));
// 	return (0);
// }