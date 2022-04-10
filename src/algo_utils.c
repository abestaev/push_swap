/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 06:33:15 by abestaev          #+#    #+#             */
/*   Updated: 2022/04/10 06:33:17 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_reset_position(t_list *lst)
{
	t_list	*tmp;
	int		i;

	tmp = lst;
	i = 0;
	while (tmp)
	{
		tmp->position = i;
		i++;
		tmp = tmp->next;
	}
}

int	ft_find_max(t_list *lst, int len)
{
	t_list	*tmp;
	int		max;
	int		position;

	if (lst == NULL)
		exit(1);
	tmp = lst;
	max = tmp->content;
	position = tmp->position;
	while (tmp && len > 0)
	{
		if (tmp->content > max)
		{
			position = tmp->position;
			max = tmp->content;
		}
		len--;
		tmp = tmp->next;
	}
	return (position);
}
