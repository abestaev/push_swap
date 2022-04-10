/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 06:40:56 by abestaev          #+#    #+#             */
/*   Updated: 2022/04/10 06:45:53 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_algo2(t_data *data)
{
	if (data->a->content > data->a->next->content)
		sa(data, 1);
}

void	ft_algo3(t_data *data)
{
	int	a;
	int	b;
	int	c;

	a = data->a->content;
	b = data->a->next->content;
	c = data->a->next->next->content;
	if (a < b && b > c && a < c)
	{
		rra(data, 1);
		sa(data, 1);
	}
	else if (a > b && b < c && a > c)
		ra(data, 1);
	else if (a > b && b > c)
	{
		ra(data, 1);
		sa(data, 1);
	}
	else if (a < b && b > c && a > c)
		rra(data, 1);
	else if (a > b && b < c && a < c)
		sa(data, 1);
}

void	ft_algo3_2(t_data *data)
{
	int	position_min;
	int	count;

	count = 0;
	position_min = ft_find_min(data->a, 3);
	while (data->a->position != position_min)
	{
		ra(data, 1);
		count++;
	}
	pb(data);
	while (count-- != 0)
		rra(data, 1);
	if (data->a->content > data->a->next->content)
		sa(data, 1);
	pa(data);
}

void	ft_algo4_bis_bis(t_data *data)
{
	int	position_min;
	int	count;

	count = 0;
	position_min = ft_find_min(data->a, 3);
	while (data->a->position != position_min)
	{
		ra(data, 1);
		count++;
	}
	pb(data);
	while (count-- != 0)
		rra(data, 1);
	if (data->b->content < data->b->next->content)
		sb(data, 1);
	else if (data->a->content > data->a->next->content)
		sa(data, 1);
}

void	ft_algo4_bis(t_data *data)
{
	int	position_min;
	int	count;

	count = 0;
	position_min = ft_find_min(data->a, 4);
	while (data->a->position != position_min)
	{
		ra(data, 1);
		count++;
	}
	pb(data);
	while (count-- != 0)
		rra(data, 1);
	ft_algo4_bis_bis(data);
	pa(data);
	pa(data);
}
