/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <abestaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:36:57 by abestaev          #+#    #+#             */
/*   Updated: 2021/10/07 02:03:38 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*tab;
	void	*p;
	size_t	l;

	l = (n * size);
	tab = (char *)malloc(l);
	if (tab == NULL)
		return (NULL);
	p = (void *)tab;
	while (l > 0)
	{
		*tab++ = 0;
		l--;
	}
	return (p);
}
