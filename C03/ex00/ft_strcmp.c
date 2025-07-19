/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:43:18 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/17 15:34:23 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
int	main(int argc, char **argv)
{
	char	*mensaje;
	char	*mensaje2;

	if (argc != 3)
	{
		printf("Este programa solo admite 3 argumentos");
		printf("Ejemplo: ./a.out Mensaje Mensaje2");
		return (1);
	}
	mensaje = argv[1];
	mensaje2 = argv[2];
	printf("%d", ft_strcmp(mensaje, mensaje2));
	return (0);
}	
*/
