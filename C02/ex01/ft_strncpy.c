/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 11:41:05 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/16 10:41:02 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(int argc, char **argv)
{
	char	*mensaje;
	char	copia[50];
	int	nbr;
	
	if (argc != 3)
	{
		printf("El programa solo admite 3 argumentos\n");
		printf("Ejemplo: ./a.out Mensaje Caracteres_a_copiar\n");
		return (-1);
	}
	mensaje = argv[1];
	nbr = atoi(argv[2]);
	if (nbr < 0 || nbr > 50)
	{
		printf("La cantidad minima de caracteres es 1\n
			La cantidad maxima de caracteres es 50");
			return (-2);
	}
	ft_strncpy(copia, mensaje, nbr);
	printf("El mensaje a copiar es %s\n", mensaje);
	printf("Se copiará una cantidad de %i caracteres\n", nbr);
	printf("El mensaje copiado es %s\n", copia);
	return (0);
}
*/
