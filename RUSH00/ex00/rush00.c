/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 18:06:33 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/13 18:27:37 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	col;
	int	row;

	row = 0;
	while (++row <= y)
	{
		col = 0;
		while (++col <= x)
		{
			if ((col == 1 && row == 1) || (col == x && row == 1)
				|| (col == 1 && row == y) || (col == x && row == y))
				ft_putchar('o');
			else if ((row == 1 || row == y) && (col > 1 && col < x))
				ft_putchar('-');
			else if ((col == 1 || col == x) && (row > 1 && row < y))
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
