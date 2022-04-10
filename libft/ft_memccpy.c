/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <abestaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 17:02:45 by abestaev          #+#    #+#             */
/*   Updated: 2021/10/06 02:48:24 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*t1;
	unsigned char const	*t2;

	t1 = (unsigned char *)dest;
	t2 = (unsigned char *)src;
	while (n > 0)
	{
		if (*t2 == (unsigned char)c)
		{
			*t1 = *t2;
			return ((void *)(t1 + 1));
		}
		*t1++ = *t2++;
		n--;
	}
	return (NULL);
}
