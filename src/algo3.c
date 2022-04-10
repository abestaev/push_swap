/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 06:41:05 by abestaev          #+#    #+#             */
/*   Updated: 2022/04/10 06:41:06 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_find_min(t_list *lst, int len)
{
	t_list	*tmp;
	int		min;
	int		position;

	if (lst == NULL)
		exit(1);
	tmp = lst;
	min = tmp->content;
	position = tmp->position;
	while (tmp && len > 0)
	{
		if (tmp->content < min)
		{
			position = tmp->position;
			min = tmp->content;
		}
		len--;
		tmp = tmp->next;
	}
	return (position);
}

void	ft_algo4(t_data *data)
{
	int	position_min;

	position_min = ft_find_min(data->a, 4);
	while (data->a->position != position_min)
		ra(data, 1);
	pb(data);
	ft_algo3(data);
	pa(data);
}

void	ft_algo5_2(t_data *data)
{
	ft_splitstack_a_small(data, 5);
	if (data->b->content < data->b->next->content)
		sb(data, 1);
	ft_algo3(data);
	pa(data);
	pa(data);
}
