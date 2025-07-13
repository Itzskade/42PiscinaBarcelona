/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 19:08:56 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/13 19:18:57 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if ((col == 1 && row == 1) || (col == x && row == y))
				ft_putchar('/');
			else if ((col == x && row == 1) || (col == 1 && row == y))
				ft_putchar('\\');
			else if ((row == 1 || row == y) && (col > 1 && col < x))
				ft_putchar('*');
			else if ((col == 1 || col == x) && (row > 1 && row < y))
				ft_putchar('*');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
