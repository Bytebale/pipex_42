/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshonta <lshonta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:51:42 by lshonta           #+#    #+#             */
/*   Updated: 2021/10/19 16:29:51 by lshonta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (ft_strlen((char *) s) < start)
		len = 0;
	if (len > (ft_strlen((char *) s) - start))
		str = (char *)malloc(sizeof(char)
				* (ft_strlen((char *) s) - start + 1));
	else
		str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
// #include <string.h>
// #include <stdio.h>

// int main()
// {
// 	char const s[] = "sdfghjkl";
// 	unsigned int start = 5;

// 	printf("%s\n", ft_substr(s, start, sizeof(s)));
// 	return (0);
// }