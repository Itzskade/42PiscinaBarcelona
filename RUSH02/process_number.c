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