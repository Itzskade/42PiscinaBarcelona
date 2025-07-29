/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 12:31:14 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/28 12:54:54 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
		ptr++;
	return (ptr - str);
}

char	*ft_strdup(char *str)
{
	int		len;
	char	*dup;
	char	*ptr;

	len = ft_strlen(str);
	dup = malloc(sizeof(*ptr) * (len + 1));
	if (!dup)
		return (NULL);
	ptr = dup;
	while (*str)
		*ptr++ = *str++;
	*ptr = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stocks;
	int			i;

	stocks = malloc(sizeof(*stocks) * (ac + 1));
	if (!stocks)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		if (!av[i])
			return (NULL);
		stocks[i].size = ft_strlen(av[i]);
		stocks[i].str = ft_strdup(av[i]);
		stocks[i].copy = ft_strdup(av[i]);
		if (!stocks[i].str || !stocks[i].copy)
			return (NULL);
		i++;
	}
	stocks[i].str = 0;
	return (stocks);
}
/*
#include <stdio.h>

void	ft_print_array(t_stock_str *str)
{
	int	i;

	i = 0;
	while (str[i].str)
	{
		printf("- Size: %d - String: %s  - Copy %s\n", 
			str[i].size, str[i].str, str[i].copy);
		i++;
	}
	free(str);
}

int	main(int argc, char **argv)
{
	ft_print_array(ft_strs_to_tab(argc, argv));
	return 0;
}
*/
