/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <abestaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 02:13:20 by abestaev          #+#    #+#             */
/*   Updated: 2021/10/07 02:18:29 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	char	*p;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	tab = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (tab == NULL)
		return (NULL);
	p = tab;
	while (*s1 != '\0')
		*tab++ = *s1++;
	while (*s2 != '\0')
		*tab++ = *s2++;
	*tab = '\0';
	return (p);
}
