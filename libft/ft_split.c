/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <abestaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:20:55 by abestaev          #+#    #+#             */
/*   Updated: 2021/10/09 06:08:38 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *s, char c)
{
	int			word;
	char const	*str;

	word = 0;
	str = s;
	while (*str)
	{
		if (*str != c)
		{
			word++;
			while (*str != c && *(str + 1) != '\0')
				str++;
		}
		str++;
	}
	return (word);
}

static int	ft_letter_count(char const *s, char c)
{
	int			letter;
	char const	*str;

	letter = 0;
	str = s;
	while (*str == c && *str)
		str++;
	while (*str != c && *str++)
		letter++;
	return (letter);
}

static char	*ft_clean(char **tab, int i)
{
	while (i > 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**t;
	char	*tab;
	int		i;

	i = 0;
	t = (char **)malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!s || t == NULL)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			tab = (char *)malloc(sizeof(char) * ft_letter_count(s, c) + 1);
			if (tab == NULL)
				return ((char **)ft_clean(t, i));
			ft_strlcpy(tab, s, ft_letter_count(s, c) + 1);
			*t++ = tab;
			i++;
			while (*s != c && *(s + 1) != '\0')
				s++;
		}
		s++;
	}
	*t = 0;
	return (t - i);
}
