/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <abestaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 19:21:36 by abestaev          #+#    #+#             */
/*   Updated: 2022/04/08 19:22:04 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_free(t_data *data)
{
	t_list	*tmp;
	t_list	*tmp2;

	while (data && data->a)
	{
		tmp = data->a->next;
		free(data->a);
		data->a = tmp;
	}
	while (data && data->b)
	{
		tmp2 = data->b->next;
		free(data->b);
		data->b = tmp2;
	}
	//free(data->chunk_tab);
}
