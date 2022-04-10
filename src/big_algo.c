#include "../includes/push_swap.h"

void    ft_reverse_algo(t_data *data)
{
    int stacklen;

    stacklen = ft_lstsize(data->b);
    if (stacklen == 2)
    {
        ft_reverse_algo2(data);
        data->nombre_trie = 2;
    }
    else if (stacklen == 3)
    {
        ft_reverse_algo3(data);
        data->nombre_trie = 3;
    }
    else if (stacklen == 4)
    {
        ft_reverse_algo4(data);
        data->nombre_trie = 4;
    }
    else if (stacklen == 5)
    {
        ft_reverse_algo5(data);
        data->nombre_trie = 5;
    }
    else if (stacklen == 1)
    {
        pa(data);
        data->nombre_trie = 1;
    }
        
}