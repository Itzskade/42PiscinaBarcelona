/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:43:55 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/15 18:39:13 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	new_word;
	char	*ptr;
	
	ptr = str;
	new_word = 1;
	while (*str)
	{
		if ((*str >= 'A' && *str <= 'Z')
			|| (*str >= 'a' && *str <= 'z')
			|| (*str >= '0' && *str <= '9'))
		{
			if (new_word && *str >= 'a' && *str <= 'z')
				*str -= 32;
			else if (!new_word && *str >= 'A' && *str <= 'Z')
				*str += 32;
			new_word = 0;
		}
		else
			new_word = 1;
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
		printf("Este programa solo admite 2 argumentos\n");
		printf("Ejemplo: ./a.out Mensaje\n");
		return (-1);
	}
	mensaje = argv[1];
	printf("Mensaje original: %s\n", mensaje);
	if (ft_strcapitalize(mensaje))
	{
		printf("Mensaje modificado: %s\n", mensaje);
		return (0);
	}
}
*/
