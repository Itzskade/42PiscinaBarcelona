/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:00:51 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/15 14:06:43 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (ptr);
}
/*
int	main(int argc, char **argv)
{
	char	*mensaje;
	
	if (argc != 2)
	{
		printf("El programa solo admite 2 argumentos");
		return (-1);
	}
	mensaje = argv[1];
	printf("El mensaje original es:\t%s\n", mensaje);
	if (ft_strlowcase(mensaje))
	{
		printf("Mensaje actualizado:\t%s\n", mensaje);
	}
	return (0);
}
*/
