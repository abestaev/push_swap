/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <abestaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 02:41:12 by abestaev          #+#    #+#             */
/*   Updated: 2021/10/07 03:31:15 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digit(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	ft_strrev(char *str)
{
	char	temp;
	int		i;
	int		end;

	i = 0;
	end = ft_strlen(str) - 1;
	if (str[i] == '-')
		i++;
	while (str[i] && i < end)
	{
		temp = str[i];
		str[i] = str[end];
		str[end] = temp;
		i++;
		end--;
	}
}

char	*ft_itoa(int n)
{
	char	*tab;
	int		i;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	tab = (char *)malloc(sizeof(char) * (ft_count_digit(n) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		n = -n;
		tab[i++] = '-';
	}
	while (n)
	{
		tab[i++] = (n % 10) + '0';
		n = n / 10;
	}
	tab[i] = '\0';
	ft_strrev(tab);
	return (tab);
}
