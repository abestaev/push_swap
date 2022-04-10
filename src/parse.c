/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <abestaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 10:08:14 by abestaev          #+#    #+#             */
/*   Updated: 2022/04/08 19:30:58 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_check_args(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (ft_onlydigit(tab[i]))
			ft_error("Error", tab);
		if (ft_check_size(tab[i]))
			ft_error("Error", tab);
		i++;
	}
	if (ft_check_doublons(tab))
		ft_error("Error", tab);
	return (0);
}

void	ft_error(char *str, char **tab)
{
	free(tab);
	ft_putendl_fd(str, 2);
	exit(1);
}

char	**ft_parsing(int argc, char **argv)
{
	char	**tab;
	int		i;

	tab = malloc(sizeof(char *) * argc);
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < argc - 1)
	{
		tab[i] = argv[i + 1];
		i++;
	}
	tab[i] = NULL;
	ft_check_args(tab);
	return (tab);
}
