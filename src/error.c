/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <abestaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 10:19:30 by abestaev          #+#    #+#             */
/*   Updated: 2022/03/23 10:21:09 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//check si il y a que des nombres en parametres (taille infini)
int	ft_onlydigit(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '-')
		i++;
	while (i < ft_strlen(str))
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

//parcour la liste et renvoie 1 (error) si il y a un double
int	ft_check_doublons(char **tab)
{
	int	i;
	int	j;
	int tmp1;
	int tmp2;

	i = 0;
	while (tab && tab[i])
	{
		tmp1 = ft_atoi(tab[i]);
		j = 0;
		while (tab && tab[j])
		{
			tmp2 = ft_atoi(tab[j]);
			if (i != j)
			{
				if (tmp1 == tmp2)
					return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

//filtre tout les nombres trop grands
int	ft_check_size(char *str)
{
	char *newstr;
	int	len;
	int error = 0;

	newstr = ft_clean(str);
	len = ft_strlen(newstr);
	if (str[0] == '-')
	{
		if (len > 11)
			error = 1;
		else if (len == 11 && ft_memcmp(newstr, "-2147483648", 11) > 0)
			error = 1;
	}
	else
	{
		if (len > 10)
			error = 1;
		else if (len == 10 && ft_memcmp(newstr, "2147483647", 11) > 0)
			error = 1;
	}
	free(newstr);
	return (error);
}

//renvoie la taille de la str sans les 0 en trop
int	ft_size(char *str)
{
	int	i;
	int	start;
	int	count;

	start = 1;
	i = 0;
	count = 0;
	if (str[0] == '-')
		i++;
	while (i < ft_strlen(str))
	{
		if (start && str[i] == '0')
		{
			count++;
		}
		else
			start = 0;
		i++;
	}
	return (ft_strlen(str) - count);
}

//renvoie la nouvelle chaine de caractère clean (sans 0 en trop)
char	*ft_clean(char *str)
{
	char	*newstr;
	int		i;
	int		j;

	j = ft_strlen(str) - ft_size(str);
	newstr = malloc(sizeof(char) * ft_size(str) + 1);
	if (!newstr)
		return (NULL);
	i = 0;
	if (str[0] == '-')
	{
		newstr[0] = '-';
		j++;
		i++;
	}
	while (i < ft_size(str))
		newstr[i++] = str[j++];
	newstr[i] = '\0';
	return (newstr);
}
