/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <abestaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 06:24:10 by abestaev          #+#    #+#             */
/*   Updated: 2022/04/10 06:27:54 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_splitstack_a_small(t_data *data, int size)
{
	t_list	*tmp;
	int		count;

	count = 0;
	tmp = data->a;
	while (count < size / 2)
	{
		if (tmp->index < size / 2)
		{
			tmp = tmp->next;
			pb(data);
			data->size_a--;
			count++;
		}
		else
		{
			tmp = tmp->next;
			ra(data, 1);
		}
	}
}

void	ft_splitstack_a(t_data *data, int size)
{
	t_list	*tmp;
	int		count;
	int		count2;

	count = 0;
	count2 = 0;
	tmp = data->a;
	while (count < size / 2)
	{
		if (tmp->index_tmp < size / 2)
		{
			tmp = tmp->next;
			pb(data);
			count++;
		}
		else
		{
			tmp = tmp->next;
			ra(data, 1);
			count2++;
		}
	}
	while (count2 != 0)
		count2 = ft_splitstack_a_bis(data, count2);
}

int	ft_splitstack_a_bis(t_data *data, int count2)
{
	rra(data, 1);
	count2--;
	return (count2);
}
