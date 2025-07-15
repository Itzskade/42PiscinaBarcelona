/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:33:45 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/14 15:25:49 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	sorted;

	sorted = 0;
	while (!sorted)
	{
		i = 0;
		sorted = 1;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				sorted = 0;
			}
			i++;
		}
	}
}
/*
int	main(int argc, char **argv)
{
	int	tab[5];
	int	i;

	if (argc !=6)
	{
		printf("Este programa solo acepta 6 parametro");
		return (-1);
	}
	i = 0;
	while (i < 5)
	{
		tab[i] = atoi(argv[i + 1]);
		i++;
	}
	ft_sort_int_tab(tab, 5);
	printf("Array ordenada\n");
	i = 0;
	while (i < 5)
	{
		printf("%i", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/
/*
int	main(void)
{
	int	tab[5] = {7, 3, 4, 1, 6};
	
	printf("Array original\n");
	printf("%i %i %i %i %i\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	
	ft_sort_int_tab(tab, 5);
	
	printf("Array invertida\n");
	printf("%i %i %i %i %i\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);		 
}
*/
