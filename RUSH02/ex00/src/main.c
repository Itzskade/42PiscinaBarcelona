/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 16:55:50 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/27 16:55:52 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"

int	validate_args(int argc, char **argv, char **dict_file, char **number)
{
	if (argc == 2)
	{
		*dict_file = "data/numbers.dict";
		*number = argv[1];
		return (1);
	}
	if (argc == 3)
	{
		*dict_file = argv[1];
		*number = argv[2];
		return (1);
	}
	write(1, "Error\n", 6);
	return (0);
}

int	load_dictionary(char *dict_file, t_dict **dict, int *size)
{
	*dict = load_dict(dict_file, size);
	if (!*dict)
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
	return (1);
}

int	validate_number_input(char *number)
{
	if (!is_valid_number(number))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_dict	*dict;
	int		size;
	char	*dict_file;
	char	*number;

	if (!validate_args(argc, argv, &dict_file, &number))
		return (1);
	if (!load_dictionary(dict_file, &dict, &size))
		return (1);
	if (!validate_number_input(number))
	{
		free_dict(dict, size);
		return (1);
	}
	process_number(dict, size, number);
	free_dict(dict, size);
	return (0);
}
