/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 16:57:21 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/27 16:57:22 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"

char	*pad_triplet(char *triplet)
{
	int		len;
	char	*padded;

	len = ft_strlen(triplet);
	padded = malloc(4);
	if (!padded)
		return (NULL);
	padded[3] = '\0';
	if (len == 3)
		ft_strncpy(padded, triplet, 3);
	else if (len == 2)
	{
		padded[0] = '0';
		padded[1] = triplet[0];
		padded[2] = triplet[1];
	}
	else if (len == 1)
	{
		padded[0] = '0';
		padded[1] = '0';
		padded[2] = triplet[0];
	}
	return (padded);
}

int	is_zero_triplet(char *triplet)
{
	int	i;

	i = 0;
	while (triplet[i])
	{
		if (triplet[i] != '0')
			return (0);
		i++;
	}
	return (1);
}

int	is_valid_number(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	if (str[0] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
