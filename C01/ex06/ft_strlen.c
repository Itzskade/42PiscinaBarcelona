/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:33:32 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/14 12:42:55 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	char	*start;

	start = str;
	while (*str)
	{
		str++;
	}
	return (str - start);
}
/*
int	main(int argc, char **argv)
{	
	int	length;
	if (argc != 2)
	{
		printf("Solo se admiten 2 parametros");
		return (-1);
	}
	
	length = ft_strlen(argv[1]);
	printf("%s\n El tamanyo de la string es de \n%i\n", argv[1], length);
	return (0);
}
*/
