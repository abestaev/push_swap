#include "../includes/push_swap.h"

int ft_which_way(t_data *data, int size)
{
    t_list *tmp;
    int left;
    int right;
    int i;

    left = 0;
    right = 0;
    i = 0;
    tmp = data->a;
    while (tmp)
    {
        if (i < size / 2)
            left += tmp->index;
        else
            right += tmp->index;
        tmp = tmp->next;
        i++;
    }
    if (left < right)
        return (69);
    else
        return (42);
    return (0);
}