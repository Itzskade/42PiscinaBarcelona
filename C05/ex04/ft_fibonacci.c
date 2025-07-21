/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:51:36 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/21 13:51:37 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
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
	resultado = ft_fibonacci(numero);
	if (resultado == -1)
		printf("No existe un número de fibonacci para valores negativos.\n");
	else
		printf("El fibonacci de %d es %d\n",numero, resultado);
	return (0);
}
*/
