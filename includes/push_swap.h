/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <abestaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 10:22:19 by abestaev          #+#    #+#             */
/*   Updated: 2022/04/10 06:22:24 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# include "../libft/libft.h"

typedef struct s_data {
	t_list	*a;
	t_list	*b;
	int		size_a;
	int		size_total_a;
	int		nombre_trie;
}	t_data;

char	**ft_parsing(int argc, char **argv);
int		ft_onlydigit(char *str);
int		ft_size(char *str);
char	*ft_clean(char *str);
int		ft_check_size(char *str);
int		ft_check_doublons(char **tab);
void	ft_error(char *str, char **tab);
int		ft_check_args(char **tab);

t_data	ft_init(int argc, char **agrv);
void	ft_free(t_data *data);

void	sa(t_data *data, int oui);
void	sb(t_data *data, int oui);
void	ss(t_data *data);
void	pa(t_data *data);
void	pb(t_data *data);
void	ra(t_data *data, int oui);
void	rb(t_data *data, int oui);
void	rr(t_data *data);
void	rra(t_data *data, int oui);
void	rrb(t_data *data, int oui);
void	rrr(t_data *data);

void	ft_algo2(t_data *data);
void	ft_algo3(t_data *data);
void	ft_algo3_2(t_data *data);
void	ft_algo4(t_data *data);
void	ft_algo4_bis(t_data *data);
void	ft_algo4_bis_bis(t_data *data);
void	ft_algo5(t_data *data);
void	ft_algo5_2(t_data *data);
void	ft_reverse_algo2(t_data *data);
void	ft_reverse_algo3(t_data *data);
void	ft_reverse_algo4(t_data *data);
void	ft_reverse_algo5(t_data *data);

int		ft_find_min(t_list *lst, int len);
int		ft_find_max(t_list *lst, int len);
void	ft_reset_position(t_list *lst);

void	ft_index(t_data *data);
void	ft_index_tmp(t_data *data);
void	ft_clean_index_tmp(t_data *data);

int		ft_is_sorted(t_list *lst);
int		ft_which_way(t_data *data, int size);
void	ft_splitstack_a_small(t_data *data, int size);
void	ft_splitstack_a(t_data *data, int size);
void	ft_splitstack_b(t_data *data);
void	ft_splitstack_b_utils(t_data *data, int size);

void	ft_reverse_algo(t_data *data);

void	ft_which_algo(t_data *data);
void	ft_push_rotate_chunk(t_data *data);
void	ft_sort_chunk(t_data *data);
void	ft_rotate_len(t_data *data, int len);

void	ft_printflst(t_data *data);

void	ft_clean_index_a(t_data *data);
void	ft_index_tmp_2(t_data *data);
int		ft_size_to_split_5(t_data *data);
int		ft_size_to_split(t_data *data);

#endif
