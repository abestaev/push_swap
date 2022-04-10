/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <abestaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 12:40:15 by abestaev          #+#    #+#             */
/*   Updated: 2021/10/06 02:41:45 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (!dest && !src)
		return (NULL);
	d = (char *)dest;
	s = (char *)src;
	n -= 1;
	if (s < d)
	{
		while ((int)n >= 0)
		{
			d[n] = s[n];
			n--;
		}
	}
	else
	{
		while ((int)n-- >= 0)
		{
			*d++ = *s++;
		}
	}
	return (dest);
}
