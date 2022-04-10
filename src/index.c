#include "../includes/push_swap.h"

void    ft_index(t_data *data)
{
    t_list *tmp;
    t_list *tmp2;

    tmp = data->a;
    tmp2 = data->a;
    while (data && tmp)
    {
        data->a = tmp2;
        while (data && data->a)
        {
            if (data->a->content > tmp->content)
                data->a->index++;
            data->a = data->a->next;
        }
        tmp = tmp->next;
    }
    data->a = tmp2;
}

void    ft_clean_index_a(t_data *data)
{
    t_list *tmp;
    int i;

    i = data->size_a;
    tmp = data->a;
    while (tmp && i != 0)
    {
        tmp->index_tmp = 0;
        tmp = tmp->next;
        i--;
    }
}

void    ft_index_tmp_2(t_data *data)
{
    t_list *tmp;
    t_list *tmp2;
    int i;

    i = data->size_a;
    tmp = data->a;
    tmp2 = data->a;
    while (data && tmp && i != 0)
    {
        data->a = tmp2;
        while (data && data->a)
        {
            if (data->a->content > tmp->content)
                data->a->index_tmp++;
            data->a = data->a->next;
        }
        tmp = tmp->next;
        i--;
    }
    data->a = tmp2;
}

void    ft_clean_index_tmp(t_data *data)
{
    t_list *tmp;

    tmp = data->b;
    while (tmp)
    {
        tmp->index_tmp = 0;
        tmp = tmp->next;
    }
}

void    ft_index_tmp(t_data *data)
{
    t_list *tmp;
    t_list *tmp2;

    tmp = data->b;
    tmp2 = data->b;
    while (data && tmp)
    {
        data->b = tmp2;
        while (data && data->b)
        {
            if (data->b->content > tmp->content)
                data->b->index_tmp++;
            data->b = data->b->next;
        }
        tmp = tmp->next;
    }
    data->b = tmp2;
}

