process_number.c

#include "structs.h"

void	print_value(char *value)
{
	if (value)
	{
		write(1, value, ft_strlen(value));
		write(1, " ", 1);
	}
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
	free(scale_key);
	print_value(value);
}

void	process_triplet(t_dict *dict, int size, char *triplet)
{
	char	key[3];
	char	*value;

	if (triplet[0] && triplet[0] != '0')
	{
		key[0] = triplet[0];
		key[1] = '\0';
		value = find_value_from_key(dict, size, key);
		print_value(value);
		value = find_value_from_key(dict, size, "100");
		print_value(value);
	}
	if (triplet[1] == '1' && triplet[2] && triplet[2] != '0')
	{
		key[0] = triplet[1];
		key[1] = triplet[2];
		key[2] = '\0';
		value = find_value_from_key(dict, size, key);
		print_value(value);
	}
	else
	{
		if (triplet[1] != '0')
		{
			key[0] = triplet[1];
			key[1] = '0';
			key[2] = '\0';
			value = find_value_from_key(dict, size, key);
			print_value(value);
		}
		if (triplet[2] != '0' && triplet[1] != '1')
		{
			key[0] = triplet[2];
			key[1] = '\0';
			value = find_value_from_key(dict, size, key);
			print_value(value);
		}
	}
}