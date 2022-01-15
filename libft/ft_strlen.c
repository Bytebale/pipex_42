/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:31:38 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/22 18:38:09 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
// #include <stdio.h>
// #include <string.h>

// int	main()
// {
// 	char	str[] = {"aasd"};
// 	printf("my: %zu\n", ft_strlen(str));
// 	printf("orig: %zu\n", strlen(str));
// 	return (0);
// }