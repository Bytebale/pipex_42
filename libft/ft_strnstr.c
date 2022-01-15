/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:30:09 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/07 17:52:06 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	t_len;
	char	*hay;

	i = 0;
	hay = (char *) haystack;
	t_len = ft_strlen((char *) needle);
	if (t_len == 0 || haystack == needle)
		return (hay);
	while (hay[i] != '\0' && i < len)
	{
		j = 0;
		while (hay [i + j] != '\0' && needle[j] != '\0'
			&& hay[i + j] == needle[j] && (i + j) < len)
			j++;
		if (j == t_len)
			return (hay + i);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>	

// int main()
// {
// 	const char w1[] = "bas Bad bar";
// 	const char w2[] = "Bad bar";

// 	printf("my: %s\n", ft_strnstr(w1, w2, sizeof(w1)));
// 	printf("orig: %s\n", strnstr(w1, w2, sizeof(w1)));
// 	return(0);
// }