/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:03:29 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/16 12:42:51 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (!*str)
		return (1);
	while (*str)
	{
		if (*str < '0' || *str > '9')
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
		printf("Este programa solo admite 2 argumentos\n");
		printf("Ejemplo ./a.out Mensaje");
		return (-1);
	}
	mensaje = argv[1];
	if (ft_str_is_numeric(mensaje))
		printf("El mensaje contiene caracteres numericos");
	else
		printf("El mensaje no contiene solo carateres numericos");
	return (0);
}
*/
