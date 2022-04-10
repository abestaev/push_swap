/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 04:55:23 by abestaev          #+#    #+#             */
/*   Updated: 2022/04/10 04:55:28 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_data	ft_init(int argc, char **argv)
{
	t_data	data;
	t_list	*new;
	char	**tab;
	int		i;

	tab = ft_parsing(argc, argv);
	i = 0;
	ft_bzero(&data, sizeof(data));
	while (tab[i])
	{
		new = ft_lstnew(ft_atoi(tab[i]));
		new->index = 0;
		new->index_tmp = 0;
		new->position = i;
		if (new == NULL)
			exit (1);
		ft_lstadd_back(&(data.a), new);
		i++;
	}
	free(tab);
	return (data);
}

void	ft_init_2(t_data *data)
{
	data->nombre_trie = 0;
	data->b = NULL;
	ft_index(data);
	data->size_a = ft_lstsize(data->a);
	data->size_total_a = ft_lstsize(data->a);
}
