/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <abestaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 14:34:28 by abestaev          #+#    #+#             */
/*   Updated: 2021/10/10 04:37:25 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = NULL;
	if (c == '\0')
		return ((char *)(s + ft_strlen(s)));
	while (*s != '\0')
	{
		if ((unsigned char)*s == (unsigned char)c)
			p = (char *)s;
		s++;
	}
	if (p != NULL)
		return (p);
	return (NULL);
}
