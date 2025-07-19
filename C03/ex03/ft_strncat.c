/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 11:18:26 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/18 12:56:09 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;
	int	i;

	ptr = dest;
	i = 0;
	while(*ptr)
		ptr++;
	while (i < nb && *src)
	{
		*ptr = *src;
		ptr++;
		src++;
		i++;
	}
	*ptr = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	buffer[100] = "Hola";
	char	mensaje[] = "Mundo";

	printf("%s\n",ft_strncat(buffer, mensaje, 5));
	return (0);	
}
*/
/*
int	main(int argc, char **argv)
{
	char	buffer[100];
	int	n;
	
	if (argc != 4)
	{
		printf("El programa solo admite 3 argumentos");
		printf("Ejemplo: ./a.out mensaje mensaje2");
		return (-1);
	}
	buffer[0] = '\0';
	n = atoi(argv[3]);
	ft_strncat(buffer, argv[1], strlen(argv[1]));
	ft_strncat(buffer, argv[2], n);
	printf("%s\n", buffer);
	return (0);	
}
*/
