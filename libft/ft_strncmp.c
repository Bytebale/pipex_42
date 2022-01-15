/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:44:17 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/18 16:25:25 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// #include <stdio.h>
// #include <string.h>	

// int main()
// {
// 	const char w1[] = "asd";
// 	const char w2[] = "asefg";

// 	printf("my: %d\n", ft_strncmp(w1, w2, sizeof(w2)));
// 	printf("orig: %d\n", strncmp(w1, w2, sizeof(w2)));
// 	return(0);
// }