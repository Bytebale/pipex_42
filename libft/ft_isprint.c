/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:15:51 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/05 00:43:46 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
// #include <stdio.h>

// int	main()
// {
// 	char	c;

// 	c = ' ';
// 	printf("%d", ft_isprint(c));
// 	return (0);
// }