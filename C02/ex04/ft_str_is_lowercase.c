/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:09:36 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/16 13:03:34 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (!*str)
		return (1);
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
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
	if (ft_str_is_lowercase(mensaje))
		printf("El mensaje esta escrito en minusculas");
	else
		printf("El mensaje no esta exclusivamente en minusculas");
	return (0);
}
*/
