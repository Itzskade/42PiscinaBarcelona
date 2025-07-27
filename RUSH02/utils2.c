#include "structs.h"

char	*ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

void	ft_bzero(void *s, int n)
{
	int		i;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

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
