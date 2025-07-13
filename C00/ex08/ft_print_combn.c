/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:00:09 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/11 12:15:54 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	init_comb(char *comb, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		comb[i] = '0' + i;
		i++;
	}
}

void	print_comb(char *comb, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		write(1, &comb[i], 1);
		i++;
	}
}

void	print_separator(char *comb, int n)
{
	if (comb[0] != ('9' - (n - 1)))
		write(1, ", ", 2);
}

void	gen_next_comb(char *comb, int n)
{
	int	i;

	i = n - 1;
	while (i > 0 && comb[i] == '9' - (n - 1 - i))
		i--;
	if (i < n)
	{
		comb[i]++;
		while (i < n - 1)
		{
			comb[i + 1] = comb[i] + 1;
			i++;
		}
	}
	else
		comb[0] = '\0';
}

void	ft_print_combn(int n)
{
	char	comb[10];

	if (n < 1 || n > 9)
		return ;
	init_comb(comb, n);
	while (comb[0] <= ('9' - (n - 1)))
	{
		print_comb(comb, n);
		print_separator(comb, n);
		gen_next_comb(comb, n);
	}
}

/*
int	main(void)
{
	ft_print_combn(3);
	write(1, "\n", 1);
	return (0);
}
*/
