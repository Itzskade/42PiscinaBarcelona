/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_triplet.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 16:56:27 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/27 16:56:28 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"

void	process_teens(t_dict *dict, int size, char *triplet)
{
	char	key[3];
	char	*value;
	int		add_space;

	add_space = 1;
	key[0] = triplet[1];
	key[1] = triplet[2];
	key[2] = '\0';
	value = find_value_from_key(dict, size, key);
	print_value(value, add_space);
}

void	process_tens(t_dict *dict, int size, char *triplet)
{
	char	key[3];
	char	*value;
	int		add_space;

	key[0] = triplet[1];
	key[1] = '0';
	key[2] = '\0';
	value = find_value_from_key(dict, size, key);
	if (triplet[2] == '0' || triplet[2] == '\0')
		add_space = 1;
	else
		add_space = 0;
	print_value(value, add_space);
}

void	process_units(t_dict *dict, int size, char *triplet)
{
	char	key[2];
	char	*value;
	int		add_space;

	key[0] = triplet[2];
	key[1] = '\0';
	value = find_value_from_key(dict, size, key);
	add_space = 1;
	print_value(value, add_space);
}

void	process_tens_units(t_dict *dict, int size, char *triplet)
{
	int	has_units;

	has_units = triplet[2] != '0' && triplet[2] != '\0';
	if (triplet[1] == '1')
	{
		if (has_units)
		{
			process_teens(dict, size, triplet);
			return ;
		}
		process_tens(dict, size, triplet);
		return ;
	}
	if (triplet[1] != '0')
	{
		process_tens(dict, size, triplet);
		if (has_units)
		{
			write(1, "-", 1);
			process_units(dict, size, triplet);
		}
	}
	else if (has_units)
		process_units(dict, size, triplet);
}

void	process_triplet(t_dict *dict, int size, char *triplet)
{
	char	hund_key[2];
	char	*value;
	int		add_space;

	if (triplet[0] && triplet[0] != '0')
	{
		hund_key[0] = triplet[0];
		hund_key[1] = '\0';
		value = find_value_from_key(dict, size, hund_key);
		print_value(value, 1);
		value = find_value_from_key(dict, size, "100");
		if (triplet[1] != '0' || triplet[2] != '0')
			add_space = 1;
		else
			add_space = 0;
		print_value(value, add_space);
	}
	process_tens_units(dict, size, triplet);
}
