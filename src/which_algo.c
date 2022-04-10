#include "../includes/push_swap.h"

void    ft_which_algo(t_data *data)
{
    if (data->size_total_a <= 5)
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
    else if (data->size_a > 5 && data->size_a <= 10)
    {
        ft_splitstack_a_small(data, data->size_a);
        ft_splitstack_b(data);
        ft_sort_chunk(data);
        while (data->b)
            pa(data);
    }
    else 
    {
        while (!ft_is_sorted(data->a))
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
        }
    }
}

int     ft_size_to_split_5(t_data *data)
{
    t_list  *tmp;
    int     position;
    int     x;
    int     i;

    tmp = data->a;
    i = data->size_a;
    position = 0;
    while (i != 0)
    {
        x = tmp->index_tmp;
        if (x == 0 || x == 1 || x == 2 || x == 3 || x == 4)
        {
            if (position < tmp->position)
                position = tmp->position;
        }
        i--;
        tmp = tmp->next;
    }
    return (position + 1);
}

int     ft_size_to_split(t_data *data)
{
    t_list  *tmp;
    int     position;
    int     x;
    int     i;

    tmp = data->a;
    i = data->size_a;
    position = 0;
    while (i != 0)
    {
        x = tmp->index_tmp;
        if (x == 0 || x == 1 || x == 2 || x == 3 || x == 4 || x == 5 || x == 6 || x == 7|| x == 8 || x == 9)
        {
            if (position < tmp->position)
                position = tmp->position;
        }
        i--;
        tmp = tmp->next;
    }
    return (position + 1);
}

void    ft_sort_chunk(t_data *data)
{
    if (data->size_a == 2)
    {
        ft_algo2(data);
        ft_rotate_len(data, 2);
    }
    else if (data->size_a == 3)
    {
        ft_algo3_2(data);
        ft_rotate_len(data, 3);
    }
    else if (data->size_a == 4)
    {
        ft_algo4_bis(data);
        ft_rotate_len(data, 4);
    }
    else if (data->size_a == 5)
    {
        ft_algo5(data);
        ft_rotate_len(data, 5);
    }
}