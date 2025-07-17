/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 11:38:32 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/16 10:23:06 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*origen;

	origen = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (origen);
}
/*
int	main(int argc, char **argv)
{
	char	*mensaje;
	char	copia[50];
	
	if (argc != 2)
	{
		printf("El programa solo admite 2 argumentos");
		return (0);
	}
	mensaje = argv[1];
	ft_strcpy(copia, mensaje);
	printf("El mensaje a copiar es %s\n", mensaje);
	printf("Mensaje copiado %s \n", copia);
	return (0);
}
*/
