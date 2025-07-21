/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_fatorial.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:39:03 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/21 13:49:17 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	numero;
	int	resultado;
	
	if (argc != 2)
	{
		printf("El programa solo admite 2 parametros\n");
		printf("Ejemplo: ./a.out numero\n");
		return (-1);
	}
	numero = atoi(argv[1]);
	resultado = ft_iterative_factorial(numero);
	printf("El factorial de %d es %d\n",numero, resultado);
	return (0);
}
*/
