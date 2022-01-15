/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 01:58:41 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/18 16:23:35 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	const char	*s;
	const char	*lasts;
	char		*d;
	char		*lastd;

	d = dest;
	s = src;
	if (!dest && !src)
		return (0);
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		lasts = s + (len - 1);
		lastd = d + (len - 1);
		while (len--)
			*lastd-- = *lasts--;
	}
	return (dest);
}
// #include <stdio.h>
// #include <string.h>

// int	main()
// {
// 	char	dest[] = "go hard";
// 	const char	src[] = "make it easy";

// 	printf ("%s\n", dest);
// 	printf ("%s\n", src);
// 	printf ("%s\n",ft_memmove(dest, src, sizeof(dest)));
// 	printf ("%s\n",memmove(dest, src, sizeof(dest)));
// 	return (0);
// }