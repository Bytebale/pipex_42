/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 03:31:28 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/05 17:30:41 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		n;
	size_t		len;

	d = dst;
	s = src;
	n = size;
	while (n-- != 0 && *d != '\0')
		d++;
	len = d - dst;
	n = size - len;
	if (n == 0)
		return (len + ft_strlen((char *) s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (len + (s - src));
}
// #include <stdio.h>
// #include <string.h>

// int	main()
// {
// 	char	dest[] = "w";
// 	const char	src[] = "make";

// 	printf ("%s\n", src);
// 	printf ("my: %zu\n",ft_strlcat(dest, src, sizeof(dest)));
// 	printf ("original: %zu\n",strlcat(dest, src, sizeof(dest)));
// 	return (0);
// }