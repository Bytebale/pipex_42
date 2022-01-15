/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 02:19:12 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/16 15:42:54 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	size_t			s;
	size_t			tmp;

	s = ft_strlen((char *) src);
	i = 0;
	if (dstsize == 0)
		return (s);
	if (s > dstsize)
	{
		tmp = s - dstsize;
		s -= tmp;
	}
	while (i < dstsize - 1 && s)
	{
		dst[i] = src[i];
		s--;
		i++;
	}
	s = ft_strlen((char *) src);
	dst[i] = 0;
	return (s);
}
// #include <stdio.h>
// #include <string.h>
// int	main()
// {
// 	char	dest[15] = "";

// 	memset (dest, 0, 15);
// 	memset (dest, 'r', 6);
// 	//const char	src[] = "lorem";	
// 	printf ("my: %zu\n",ft_strlcpy(dest, "lorem ipsum dolor sit amet", 15));
// 	printf ("%s\n", dest);
// 	printf ("orig: %zu\n", strlcpy (dest, "lorem ipsum dolor sit amet", 15));
// 	printf ("%s\n", dest);
// 	// printf ("%s\n", src);
// 	return (0);
// }