/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 11:43:56 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/11 10:26:24 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	div_pair(int n)
{
	ft_putchar((n / 10) + '0');
	ft_putchar((n % 10) + '0');
}

void	separator(int a, int b)
{
	div_pair(a);
	ft_putchar(' ');
	div_pair(b);
	if (!(a == 98 && b == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			separator(a, b);
			b++;
		}
		a++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
