/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gribovvladimir <gribovvladimir@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:02:44 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/13 16:51:47 by gribovvladi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = 0;
	if (c > 256)
		c -= 256;
	while (s[i])
	{
		if (s[i] == c)
			str = (char *)(s + i);
		i++;
	}
	if (s[i] == c)
		str = (char *)(s + i);
	return (str);
}
// #include <stdio.h>
// #include<string.h>
// int main()
// {
// char str[] = "saymer";
// char chr = 'y';
// printf("orig: %s\n",strrchr(str, chr));
// printf("my: %s\n",ft_strrchr(str, chr));
// return 0;
// }