/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:40:48 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/15 18:55:24 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, int size)
{
	int	src_len;
	int	i;

	src_len = 0;
	while (src[src_len])
		src_len++;
	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}
/*
int	main(void)
{	
	int	len;
	char	copia[30];
	char	*mensaje;
	
	mensaje = "Hola mundo";
	
	len = ft_strlcpy(copia, mensaje, 4);
	printf("Mensaje a copiar: %s\n", copia);
	printf("Longitud a copiar: %i\n", len);
	return (0);
}
*/
/*
int	main(int argc, char **argv)
{
	char	*mensaje;
	char	*copia;
	int	nbr;
	
	if (argc != 3)
	{
		printf("El programa solo admite 3 argumentos");
		return (-1);
	}
	nbr = atoi(argv[2]);
	if (nbr <= 0)
	{
		printf("El programa solo admite valores positivos mayores a 0");
		return (-2);
	}
	mensaje = argv[1];
	copia = malloc(strlen(mensaje) + 1);
	if (!copia)
	{
		printf("Error al asignar memoria");
		return (-3);
	}
	ft_strlcpy(copia, mensaje, nbr + 1);
	printf("El mensaje copiado es: %s", copia);
	return (0);
}
*/
