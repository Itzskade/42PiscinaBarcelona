#include "structs.h"

int	get_zeros_count(int index)
{
	return (index * 3);
}

char	*get_scale_key(int index)
{
	int		len;
	char	*str;
	int		i;

	if (index <= 0)
		return (0);
	len = get_zeros_count(index) + 1;
	str = malloc(len + 1);
	if (!str)
		return (0);
	str[0] = '1';
	i = 1;
	while (i < len)
	{
		str[i] = '0';
		i++;
	}
	str[i] = '\0';
	return (str);
}