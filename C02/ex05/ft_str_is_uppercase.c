/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:12:30 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/15 12:15:59 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (!*str)
		return (1);
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
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
		printf("Este programa solo admite dos parametros");
		return (-1);
	}
	mensaje = argv[1];
	if (ft_str_is_uppercase(mensaje))
		printf("El mensaje esta escrito en mayuscula");
	else
		printf("El mensaje no esta exclusivamente en mayuscula");
	return (0);
}
*/
