/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <abestaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 19:24:31 by abestaev          #+#    #+#             */
/*   Updated: 2022/04/08 19:25:34 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sa(t_data *data, int oui)
{
	t_list	*tmp;

	if (data->a && data->a->next)
	{
		tmp = data->a->next;
		data->a->next = tmp->next;
		ft_lstadd_front(&data->a, tmp);
	}
	if (oui)
		ft_putendl_fd("sa", 1);
}

void	sb(t_data *data, int oui)
{
	t_list	*tmp;

	if (data->b && data->b->next)
	{
		tmp = data->b->next;
		data->b->next = tmp->next;
		ft_lstadd_front(&data->b, tmp);
	}
	if (oui)
		ft_putendl_fd("sb", 1);
}

void	ss(t_data *data)
{
	sb(data, 0);
	sa(data, 0);
	ft_putendl_fd("ss", 1);
}
