/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 05:07:38 by abestaev          #+#    #+#             */
/*   Updated: 2022/04/10 05:08:01 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_data	data;

	data = ft_init(argc, argv);
	ft_init_2(&data);
	if (!ft_is_sorted(data.a))
		ft_which_algo(&data);
	ft_free(&data);
	return (0);
}
