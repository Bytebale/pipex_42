/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:36:30 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/06 18:27:10 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *) s1;
	str2 = (const unsigned char *) s2;
	while (n-- > 0)
	{
		while (*str1++ != *str2++)
		{
			if (str1[-1] < str2[-1])
				return (str1[-1] - str2[-1]);
			else if (str1[-1] > str2[-1])
				return (str1[-1] - str2[-1]);
		}	
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	unsigned char s1[] = "qwrtyu";
// 	unsigned char s2[] = "qwer";
// 	printf("my: %d\n", ft_memcmp(s1, s2, 7));
// 	printf("orig: %d\n", memcmp(s1, s2, 7));
// 	return (0);
// }