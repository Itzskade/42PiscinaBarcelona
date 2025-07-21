/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:52:25 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/21 13:52:27 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
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
	resultado = ft_find_next_prime(numero);
	printf("El siguiente numero primo es %d.\n", resultado);
	return (0);
}
*/
