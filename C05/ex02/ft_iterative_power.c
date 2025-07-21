/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:51:06 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/21 13:51:07 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	numero;
	int	potencia;
	int	resultado;
	
	if (argc != 3)
	{
		printf("El programa solo admite 3 parametros\n");
		printf("Ejemplo: ./a.out numero potencia\n");
		return (-1);
	}
	numero = atoi(argv[1]);
	potencia = atoi(argv[2]);
	resultado = ft_iterative_power(numero, potencia);
	printf("%d elevado a %d es %d",numero, potencia, resultado);
	return (0);
}
*/
