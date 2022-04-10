/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <abestaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:50:59 by abestaev          #+#    #+#             */
/*   Updated: 2021/10/06 02:41:17 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*tab;

	tab = s;
	while (n > 0)
	{
		if (*tab == (unsigned char)c)
			return ((void *)tab);
		tab++;
		n--;
	}
	return (NULL);
}
