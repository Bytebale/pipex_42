/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 19:26:28 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/21 18:34:59 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_ispace(const char *str)
{
	while (((*str == ' ') || (*str == '\t') || (*str == '\n')
			|| (*str == '\v') || (*str == '\f') || (*str == '\r')))
		str++;
	return ((char *)str);
}

int	ft_atoi(const char *str)
{
	int			sign;
	long int	n;
	long int	tmp;

	n = 0;
	sign = 1;
	str = ft_ispace(str);
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		tmp = n;
		n = n * 10 + sign * (*str - '0');
		if (sign == 1 && tmp > n)
			return (-1);
		else if (sign == -1 && tmp < n)
			return (0);
		str++;
	}
	return (n);
}
// #include <stdio.h>

// int main()
// {
// 	char str[] = "-123";
// 	printf("my: %d\n", ft_atoi(str));
// 	printf("orig: %d\n", atoi(str));
// 	return (0);
// }
