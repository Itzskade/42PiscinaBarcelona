/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 14:12:21 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/20 14:16:38 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while ((*str == ' ') || (*str == '\f') || (*str == '\n')
		|| (*str == '\r') || (*str == '\t') || (*str == '\v'))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
/*
int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("El programa solo admite 2 argumentos\n");
		printf("Ejemplo: ./a.out mensaje\n");
		return (1);
	}
	printf("Resultado: %d\n", ft_atoi(argv[1]));
	return (0);
}
*/
