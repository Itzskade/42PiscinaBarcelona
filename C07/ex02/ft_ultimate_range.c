/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:13:08 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/22 19:13:54 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*array;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	array = malloc(sizeof(*array) * (size));
	if (!array)
	{
		*range = NULL;
		return (-1);
	}
	i = -1;
	while (++i < size)
		array[i] = min + i;
	*range = array;
	return (size);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	*array;
	int	min;
	int	max;
	int	size;

	if (argc != 3)
	{
		printf("El programa solo admite 3 argumentos\n");
		printf("Ejemplo: ./a.out nbr_min nbr_max\n");
		return (-1);
	}
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	size = ft_ultimate_range(&array, min, max);
	if (size <= 0)
    	{
        	printf("No se ha creado el array.\n");
        	return (0);
        }
	printf("Array completa de min a max:\n");
	printf("%d\n", size);
	return (0); 
}
*/
