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

void	process_number(t_dict *dict, int size, char *number)
{
	int		len;
	int		triplet_count;
	int		i;
	int		start;
	char	*triplet;

	len = ft_strlen(number);
	triplet_count = (len + 2) / 3;
	i = -1;
	while (++i < triplet_count)
	{
		start = len - 3 * (i + 1);
		if (start < 0)
			start = 0;
		triplet = ft_substr(number, start, len - 3 * i - start);
		if (!is_zero_triplet(triplet))
		{
			process_triplet(dict, size, pad_triplet(triplet));
			print_scale_name(dict, size, triplet_count - i - 1);
		}
		free(triplet);
	}
}