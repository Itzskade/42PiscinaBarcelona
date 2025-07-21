/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:27:14 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/14 12:33:15 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

/*
int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf(" Solo se admiten 2 argumentos");
		return -1;
	}
	ft_putstr(argv[1]);
	return (0);
}
*/
