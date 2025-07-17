/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 11:48:59 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/16 10:56:51 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (!*str)
		return (1);
	while (*str)
	{
		if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(int argc, char **argv)
{
	char	*mensaje;
	
	if (argc != 2)
	{
		printf("La cantidad de argumentos debe de ser 2");
		return (-1);
	}
	mensaje = argv[1];
	printf("El mensaje recibido es %s\n", mensaje);
	if (ft_str_is_alpha(mensaje))
		printf("EL mensaje solo contiene letras");
	else
		printf("El mensaje contiene caracteres no alfabeticos");
	return (0);
}
*/
