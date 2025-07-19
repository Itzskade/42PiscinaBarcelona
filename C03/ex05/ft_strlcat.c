/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:42:50 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/18 14:11:36 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;
	
	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	src_len = 0;
	while (src[src_len])
		src_len++;
	i = 0;
	while (src[i] && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
int main(int argc, char **argv)
{
	char    *res;
	int     len;
	int	i;
	int	size;
	
	if (argc != 4)
	{
		printf("Este programa solo admite 3 argumentos\n");
		printf("Ejemplo: ./a.out mensaje mensaje2 numero\n");
		return (1);
	}
	size = atoi(argv[3]);
	if (size <= 0)
	{
		printf("El número debe ser mayor que 0\n");
		free(res);
		return (1);
	}
	len = ft_strlen(argv[1]) + ft_strlen(argv[2]);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (1);
	i = 0;
	while (argv[1][i])
	{
		res[i] = argv[1][i];
		i++;
	}
	res[i] = '\0';
	len = ft_strlcat(res, argv[2], size);
	printf("Tamaño que hubiera tenido: %d\n", len);
	printf("Cadena final: %s\n", res);
	free(res);
    	return (0);
}
*/
