/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:51:47 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/21 13:51:50 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 1)
		return (0);
	i = 1;
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
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
	resultado = ft_sqrt(numero);
	if (resultado == 0)
		printf("El numero %d no tiene raiz cuadrada exacta.\n", numero);
	else
		printf("La raiz cuadrada de %d es %d.\n", numero, resultado);
	return (0);
}
*/
