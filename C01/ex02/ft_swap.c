/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:43:52 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/14 11:56:09 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_putnbr(int nbr)
{
	unsigned int	n;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = -nbr;
	}
	else
	{
		n = nbr;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar((n % 10) + '0');
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 2;
	b = 4;
	ft_putnbr(a);
	ft_putnbr(b);
	write(1, "\n", 1);
	ft_swap(&a, &b);
	ft_putnbr(a);
	ft_putnbr(b);
	return (0);
}
*/
