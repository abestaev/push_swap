/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <abestaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 06:28:00 by abestaev          #+#    #+#             */
/*   Updated: 2021/10/08 16:15:35 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	size_t	remmtab;

	if (s == NULL)
		return (NULL);
	remmtab = ft_strlen(s) - start;
	if (start < (unsigned int)ft_strlen(s))
	{
		if (remmtab > len)
			tab = (char *)ft_calloc(sizeof(char), len + 1);
		else
			tab = (char *)ft_calloc(sizeof(char), remmtab + 1);
		if (tab == NULL)
			return (NULL);
		ft_strlcpy(tab, &s[start], len + 1);
	}
	else
		tab = (char *)ft_calloc(1, 1);
	return (tab);
}
