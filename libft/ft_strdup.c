/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:28:15 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/11 16:34:58 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*tmp;
	size_t	len;

	len = ft_strlen((char *) s1) + 1;
	tmp = malloc(sizeof(char) * len);
	if (!tmp)
		return (NULL);
	tmp = ft_memcpy(tmp, s1, len);
	return (tmp);
}
