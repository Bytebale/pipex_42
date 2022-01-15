/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:48:01 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/05 17:50:53 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
// #include <stdio.h>
// #include <ctype.h>

// int main ()
// {
// 	int c = (int) '1';
// 	printf("my: %c\n", (char) ft_tolower(c));
// 	printf("orig: %c\n", (char) tolower(c));
// 	return (0);
// }