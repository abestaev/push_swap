/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_reverse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 04:57:25 by abestaev          #+#    #+#             */
/*   Updated: 2022/04/10 05:07:22 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_reverse_algo2(t_data *data)
{
	if (data->b->content < data->b->next->content)
		sb(data, 1);
}

void	ft_reverse_algo3(t_data *data)
{
	int	a;
	int	b;
	int	c;

	a = data->b->content;
	b = data->b->next->content;
	c = data->b->next->next->content;
	if (a < b && b < c)
	{
		sb(data, 1);
		rrb(data, 1);
	}
	else if (a < b && b > c && c > a)
		rb(data, 1);
	else if (a > b && b < c && a < c)
		rrb(data, 1);
	else if (a < b && b > c && c < a)
		sb(data, 1);
	else if (a > b && b < c && a > c)
	{
		rrb(data, 1);
		sb(data, 1);
	}
}

void	ft_reverse_algo4(t_data *data)
{
	ft_clean_index_tmp(data);
	ft_index_tmp(data);
	while (data->b->index_tmp != 3)
		rb(data, 1);
	pa(data);
	ft_reverse_algo3(data);
	pb(data);
}

//TODO: optimiser l'algo5
void	ft_reverse_algo5(t_data *data)
{
	int	p_max;

	ft_reset_position(data->b);
	p_max = ft_find_max(data->b, 5);
	while (data->b->position != p_max)
	{
		if (p_max <= 2)
			rb(data, 1);
		else
			rrb(data, 1);
	}
	pa(data);
	p_max = ft_find_max(data->b, 5);
	while (data->b->position != p_max)
	{
		if (p_max < 2)
			rb(data, 1);
		else
			rrb(data, 1);
	}
	pa(data);
	ft_reverse_algo3(data);
	pb(data);
	pb(data);
}
