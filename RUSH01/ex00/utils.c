/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 13:31:36 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/20 13:31:38 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_error(void)
{
	write(1, "Error\n", 6);
}
