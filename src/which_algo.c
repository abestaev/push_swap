/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 05:19:59 by abestaev          #+#    #+#             */
/*   Updated: 2022/04/10 05:27:04 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_which_algo(t_data *data)
{
	if (data->size_total_a <= 5)
		ft_algo_sub_5(data);
	else if (data->size_a > 5 && data->size_a <= 10)
		ft_algo_sub_10(data);
	else
	{
		while (!ft_is_sorted(data->a))
			ft_algo_top_10(data);
	}
}

void	ft_algo_sub_5(t_data *data)
{
	if (data->size_total_a == 2)
		ft_algo2(data);
	else if (data->size_total_a == 3)
		ft_algo3(data);
	else if (data->size_total_a == 4)
		ft_algo4(data);
	else if (data->size_total_a == 5)
		ft_algo5_2(data);
}

void	ft_algo_sub_10(t_data *data)
{
	ft_splitstack_a_small(data, data->size_a);
	ft_splitstack_b(data);
	ft_sort_chunk(data);
	while (data->b)
		pa(data);
}

void	ft_algo_top_10(t_data *data)
{
	if (data->size_a <= 5)
	{
		ft_sort_chunk(data);
		while (data->b)
			pa(data);
	}
	else if (data->size_a <= 10)
	{
		ft_clean_index_a(data);
		ft_index_tmp_2(data);
		ft_splitstack_a(data, data->size_a);
		ft_splitstack_b(data);
		ft_push_rotate_chunk(data);
		ft_sort_chunk(data);
	}
	else
		ft_algo_top_10_bis(data);
}

void	ft_algo_top_10_bis(t_data *data)
{
	ft_clean_index_a(data);
	ft_index_tmp_2(data);
	ft_reset_position(data->a);
	if (ft_size_to_split_5(data) == 5)
	{
		ft_algo5(data);
		ft_rotate_len(data, 5);
	}
	else
	{
		ft_splitstack_a(data, ft_size_to_split(data));
		ft_splitstack_b(data);
		ft_push_rotate_chunk(data);
	}
}
