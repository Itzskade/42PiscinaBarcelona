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
