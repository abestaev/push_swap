#include "../includes/push_swap.h"

int main(int argc, char **argv)
{
    t_data data;

    data = ft_init(argc, argv);
    if (!ft_is_sorted(data.a))
        ft_which_algo(&data);
    ft_free(&data);
    return (0);
}
