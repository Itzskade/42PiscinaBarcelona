/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utimate_div_mod.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:16:24 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/14 12:26:41 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	if (*b != 0)
	{
		tmp = *a;
		*a = tmp / *b;
		*b = tmp % *b;
	}
}
/*
int	main(void)
{
	int	a;
	int	b;
	
	a = 10;
	b = 2;

	ft_ultimate_div_mod(&a, &b);

	printf("%i Division\n", a);
	printf("%i Modulo\n", b);

	return (0);
}
*/
