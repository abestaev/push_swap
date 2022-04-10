/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <abestaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 09:50:21 by abestaev          #+#    #+#             */
/*   Updated: 2021/10/05 18:49:49 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (*dst != '\0' && i < size)
	{
		dst++;
		i++;
	}
	if (i == size)
		return (i + ft_strlen(src));
	while (*src)
	{
		if (i < size - 1)
			*dst++ = *src;
		src++;
		i++;
	}
	*dst = '\0';
	return (i + ft_strlen(src));
}
