/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <abestaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 03:19:37 by abestaev          #+#    #+#             */
/*   Updated: 2021/10/10 04:43:30 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_belong(const char c, const char *set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

static unsigned int	ft_get_start(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') && (ft_belong(s1[i], set) == 1))
		i++;
	return (i);
}

static unsigned int	ft_get_end(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (i > 0)
	{
		if (ft_belong(s1[i], set) != 1)
		{
			return (i);
		}
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	char			*tab;
	size_t			len;

	start = ft_get_start(s1, set);
	end = ft_get_end(s1, set);
	if (end == start)
	{
		tab = ft_calloc(1, 1);
		return (tab);
	}
	len = end - start + 1;
	tab = ft_substr(s1, start, len);
	if (!tab)
		return (NULL);
	return (tab);
}
