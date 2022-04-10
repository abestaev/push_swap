#include "../includes/push_swap.h"

void    ft_algo2(t_data *data)
{
    if (data->a->content > data->a->next->content)
        sa(data, 1);
}

void    ft_algo3(t_data *data)
{
    int a;
    int b;
    int c;

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

void ft_algo3_2(t_data *data)
{
    int position_min;
    int count;

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

void    ft_algo4_bis_bis(t_data *data)
{
    int position_min;
    int count;

    count = 0;
    position_min = ft_find_min(data->a, 3);
    while (data->a->position != position_min)
    {
        ra(data, 1);
        count++;
    }
    pb(data);
    while (count-- != 0)
    {
        rra(data, 1);
    }
    if (data->b->content < data->b->next->content && data->a->content > data->a->next->content)
    {
        ss(data);
        return ;
    }
    else if (data->b->content < data->b->next->content)
        sb(data, 1);
    else if (data->a->content > data->a->next->content)
        sa(data, 1);
}

void    ft_algo4_bis(t_data *data)
{
    int position_min;
    int count;

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

int ft_find_min(t_list *lst, int len)
{
    t_list *tmp;
    int     min;
    int     position;

    if (lst == NULL)
        exit(1);
    tmp = lst;
    min = tmp->content;
    position = tmp->position;
    while (tmp && len > 0)
    {
        if (tmp->content < min)
        {
            position = tmp->position;
            min = tmp->content;
        }
        len--;
        tmp = tmp->next;
    }
    return (position);
}

void    ft_algo4(t_data *data)
{
    int position_min;

    position_min = ft_find_min(data->a, 4);
    while (data->a->position != position_min)
        ra(data, 1);
    pb(data);
    ft_algo3(data);
    pa(data);
}

void    ft_algo5(t_data *data)
{
    int position_min;
    int count;

    count = 0;
    position_min = ft_find_min(data->a, 5);
    while (data->a->position != position_min)
    {
        ra(data, 1);
        count++;
    }
    pb(data);
    while (count != 0)
    {
        rra(data, 1);
        count--;
    }
    //printf("COUNT:%d\n", count);
    //ft_printflst(data);
    position_min = ft_find_min(data->a, 4);
    while (data->a->position != position_min)
    {
        ra(data, 1);
        count++;
    }
    pb(data);
    //printf("COUNT:%d\n", count);
    while (count != 0)
    {
        rra(data, 1);
        count--;
    }
    //ft_printflst(data);
    if (data->b->content < data->b->next->content)
        sb(data, 1);
    //printf("COUNT:%d\n", count);
    //ft_printflst(data);
    position_min = ft_find_min(data->a, 3);
    while (data->a->position != position_min)
    {
        ra(data, 1);
        count++;
    }
    pb(data);
    while (count != 0)
    {
        rra(data, 1);
        count--;
    }
    if (data->a->content > data->a->next->content)
        sa(data, 1);
    pa(data);
    pa(data);
    pa(data);
}

void    ft_algo5_2(t_data *data)
{
    ft_splitstack_a_small(data, 5);
    if (data->b->content < data->b->next->content)
        sb(data, 1);
    ft_algo3(data);
    pa(data);
    pa(data);
}