/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <abestaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 16:04:01 by abestaev          #+#    #+#             */
/*   Updated: 2021/10/06 02:42:16 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*t1;
	unsigned const char	*t2;

	t1 = (unsigned const char *)s1;
	t2 = (unsigned const char *)s2;
	while (n > 0)
	{
		if (*t1 != *t2)
			return (*t1 - *t2);
		n--;
		t1++;
		t2++;
	}
	return (0);
}
