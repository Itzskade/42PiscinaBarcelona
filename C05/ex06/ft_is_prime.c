/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:52:05 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/21 13:52:06 by rmarin-n         ###   ########.fr       */
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
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{	
	int	numero;
	
	if (argc != 2)
	{
		printf("El programa solo admite 2 parametros\n");
		printf("Ejemplo: ./a.out numero\n");
		return (-1);
	}
	numero = atoi(argv[1]);
	if (ft_is_prime(numero))
		printf("El numero %d es primo.\n", numero);
	else
		printf("El numero %d no es primo.\n", numero);
	return (0);
}
*/
