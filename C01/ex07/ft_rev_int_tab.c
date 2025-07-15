/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:43:30 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/14 16:15:32 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;

	if (size < 2)
		return ;
	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}

/*
int	main(int argc, char **argv)
{
	int	tab[5];
	int	i;
	
	if (argc != 6)
	{
		printf("Solo se aceptar 6 argumentos");
		return (-1);
		}
	i = 0;
	while (i < 5)
	{
		tab[i] = atoi(argv[i + 1]);
		i++;
	}
	ft_rev_int_tab(tab, 5);
	printf("Array ordenada\n");
	i = 0;
	while(i < 5)
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
	int array[5] = {0, 1, 2, 3, 4};

	printf("Array original:\n");
	printf("%d %d %d %d %d\n", array[0], array[1], array[2], array[3], array[4]);

	ft_rev_int_tab(array, 5);
	
	printf("Array invertido:\n");
	printf("%d %d %d %d %d\n", array[0], array[1], array[2], array[3], array[4]);
	return (0);
}
*/
