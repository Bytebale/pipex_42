/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 04:20:00 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/05 17:45:48 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
// #include <stdio.h>
// #include <ctype.h>

// int main ()
// {
// 	int c = (int) 'd';
// 	printf("my: %c\n", (char) ft_toupper(c));
// 	printf("orig: %c\n", (char) toupper(c));
// 	return (0);
// }