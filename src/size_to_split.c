/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_to_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 06:33:34 by abestaev          #+#    #+#             */
/*   Updated: 2022/04/10 06:33:36 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_size_to_split_5(t_data *data)
{
	t_list	*tmp;
	int		position;
	int		x;
	int		i;

	tmp = data->a;
	i = data->size_a;
	position = 0;
	while (i != 0)
	{
		x = tmp->index_tmp;
		if (x == 0 || x == 1 || x == 2 || x == 3 || x == 4)
		{
			if (position < tmp->position)
				position = tmp->position;
		}
		i--;
		tmp = tmp->next;
	}
	return (position + 1);
}

int	ft_size_to_split(t_data *data)
{
	t_list	*tmp;
	int		position;
	int		x;
	int		i;

	tmp = data->a;
	i = data->size_a;
	position = 0;
	while (i != 0)
	{
		x = tmp->index_tmp;
		if (x == 0 || x == 1 || x == 2 || x == 3 || x == 4
			|| x == 5 || x == 6 || x == 7 || x == 8 || x == 9)
		{
			if (position < tmp->position)
				position = tmp->position;
		}
		i--;
		tmp = tmp->next;
	}
	return (position + 1);
}

void	ft_sort_chunk(t_data *data)
{
	if (data->size_a == 2)
	{
		ft_algo2(data);
		ft_rotate_len(data, 2);
	}
	else if (data->size_a == 3)
	{
		ft_algo3_2(data);
		ft_rotate_len(data, 3);
	}
	else if (data->size_a == 4)
	{
		ft_algo4_bis(data);
		ft_rotate_len(data, 4);
	}
	else if (data->size_a == 5)
	{
		ft_algo5(data);
		ft_rotate_len(data, 5);
	}
}
