/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 19:28:04 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/18 10:03:27 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while ((*s1 < n) && (*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++; 	
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
int	main(int argc, char **argv)
{
	char	*mensaje1;
	char	*mensaje2;
	int	nbr;
	
	if (argc != 4)
	{
		printf("El programa solo admite 4 parametros");
		printf("Ejemplo: ./a.out Mensaje1 Mensaje2 nbr");
		return (-1);
	}
	mensaje1 = argv[1];
	mensaje2 = argv[2];
	nbr = atoi(argv[3]);
	printf("%d", ft_strncmp(mensaje1, mensaje2, 5));
	return (0);
}
*/
