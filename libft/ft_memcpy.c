/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <abestaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:50:16 by abestaev          #+#    #+#             */
/*   Updated: 2021/10/06 02:41:05 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*t1;
	unsigned char	*t2;

	if (!dest && !src)
		return (dest);
	t1 = (unsigned char *)dest;
	t2 = (unsigned char *)src;
	while (n > 0)
	{
		*t1++ = *t2++;
		n--;
	}
	return (dest);
}
