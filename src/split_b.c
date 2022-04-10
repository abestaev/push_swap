#include "../includes/push_swap.h"

void    ft_splitstack_b_utils(t_data *data, int size)
{
    t_list  *tmp;
    int count;
    int way;

    way = ft_which_way(data, size);
    count = 0;
    tmp = data->b;
    size = ft_lstsize(data->b);
    if (size <= 10)
        size = size - 5;
    else
        size = size / 2;
    while (count < 5)
    {
        if (tmp->index_tmp >= size)
        {
            tmp = tmp->next;
            pa(data);
            count++;
        }
        else
        {
            if (way == 42)
            {
                tmp = ft_lstlast(data->b);
                rrb(data, 1);
            }
            else
            {
                tmp = tmp->next;
                rb(data, 1);
            }
        }
    }
}

void    ft_splitstack_b(t_data *data)
{
    int stacklen;

    stacklen = ft_lstsize(data->b);
    while (stacklen > 5)
    {
        ft_clean_index_tmp(data);
        ft_index_tmp(data);
        ft_splitstack_b_utils(data, stacklen);
        stacklen = ft_lstsize(data->b);
    }
    ft_reverse_algo(data);
}