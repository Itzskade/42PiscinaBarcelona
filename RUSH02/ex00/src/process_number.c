/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 16:56:17 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/27 16:56:18 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"

void	print_value(char *value, int add_space)
{
	if (value && value[0] != '\0')
		write(1, value, ft_strlen(value));
	if (add_space)
		write(1, " ", 1);
}

void	print_scale_name(t_dict *dict, int size, int index)
{
	char	*scale_key;
	char	*value;

	if (index == 0)
		return ;
	scale_key = get_scale_key(index);
	if (!scale_key)
		return ;
	value = find_value_from_key(dict, size, scale_key);
	print_value(value, 0);
	free(scale_key);
}

char	*get_padded_triplet(char *number, int i, int len)
{
	int			start;
	char		*triplet;
	char		*padded;

	start = len - 3 * (i + 1);
	if (start < 0)
		start = 0;
	triplet = ft_substr(number, start, len - 3 * i - start);
	padded = pad_triplet(triplet);
	free(triplet);
	return (padded);
}

void	process_triplet_with_scale(t_dict *dict,
	int size, char *padded, int index)
{
	process_triplet(dict, size, padded);
	if (index > 0)
		print_scale_name(dict, size, index);
}

void	process_number(t_dict *dict, int size, char *number)
{
	int		len;
	int		count;
	int		i;
	int		printed;
	char	*padded;

	len = ft_strlen(number);
	count = (len + 2) / 3;
	i = count - 1;
	printed = 0;
	while (i >= 0)
	{
		padded = get_padded_triplet(number, i, len);
		if (!is_zero_triplet(padded))
		{
			if (printed)
				write(1, " ", 1);
			process_triplet_with_scale(dict, size, padded, i);
			printed = 1;
		}
		free(padded);
		i--;
	}
	write(1, "\n", 1);
}
