#include "../includes/push_swap.h"

t_data  ft_init(int argc, char **argv)
{
    t_data data;
    char    **tab;
    int i;

    data.nombre_trie = 0;
    tab = ft_parsing(argc, argv);
    i = 0;
    ft_bzero(&data, sizeof(data));
    t_list *new;
    while (tab[i])
    {
        new = ft_lstnew(ft_atoi(tab[i]));
        new->index = 0;
        new->index_tmp = 0;
        new->position = i;
        if (new == NULL)
            exit (1);
        ft_lstadd_back(&(data.a), new);
        i++;
    }
    free(tab);
    data.b = NULL;
    ft_index(&data);
    data.size_a = ft_lstsize(data.a);
    data.size_total_a = ft_lstsize(data.a);
    return data;
}