process_triplet.c

#include "structs.h"

void	process_teens(t_dict *dict, int size, char *triplet)
{
	char	key[3];
	char	*value;

	key[0] = triplet[1];
	key[1] = triplet[2];
	key[2] = '\0';
	value = find_value_from_key(dict, size, key);
	print_value(value);
}

void	process_tens(t_dict *dict, int size, char *triplet)
{
	char	key[3];
	char	*value;

	key[0] = triplet[1];
	key[1] = '0';
	key[2] = '\0';
	value = find_value_from_key(dict, size, key);
	print_value(value);
}

void	process_units(t_dict *dict, int size, char *triplet)
{
	char	key[2];
	char	*value;

	key[0] = triplet[2];
	key[1] = '\0';
	value = find_value_from_key(dict, size, key);
	print_value(value);
}

void	process_tens_units(t_dict *dict, int size, char *triplet)
{
	if (triplet[1] == '1' && triplet[2] != '0' && triplet[2] != '\0')
	{
		process_teens(dict, size, triplet);
		return ;
	}
	if (triplet[1] != '0')
		process_tens(dict, size, triplet);
	if (triplet[1] != '1' && triplet[2] != '0' && triplet[2] != '\0')
		process_units(dict, size, triplet);
}

void	process_triplet(t_dict *dict, int size, char *triplet)
{
	char	hund_key[2];
	char	*value;

	if (triplet[0] && triplet[0] != '0')
	{
		hund_key[0] = triplet[0];
		hund_key[1] = '\0';
		value = find_value_from_key(dict, size, hund_key);
		print_value(value);
		value = find_value_from_key(dict, size, "100");
		print_value(value);
	}
	process_tens_units(dict, size, triplet);
}