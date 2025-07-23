/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:31:45 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/22 19:04:22 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*array;

	if (min >= max)
		return (NULL);
	size = max - min;
	array = malloc(sizeof(*array) * (size));
	if (!array)
		return (0);
	i = -1;
	while (++i < size)
		array[i] = min + i;
	return (array);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	*array;
	int	min;
	int	max;
	int	i;
	int	size;

	if (argc != 3)
	{
		printf("El programa solo admite 3 argumentos\n");
		printf("Ejemplo: ./a.out nbr_min nbr_max\n");
		return (-1);
	}
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	array = ft_range(min, max);
	size = max - min;
	if (size <= 0)
	{
		printf("No se ha creado el array.\n");
		return (0);
	}
	printf("Array completa de min a max:\n");
	i = -1;
	while (++i < max - min)
		printf("%d\n", array[i]);
	return (0); 
}
*/
