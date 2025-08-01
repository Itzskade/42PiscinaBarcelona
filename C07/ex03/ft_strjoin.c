/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:27:11 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/23 17:41:33 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	total_length(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	len = 0;
	i = -1;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j++])
			len++;
		if (i < size - 1)
		{
			j = 0;
			while (sep[j++])
				len++;
		}
	}
	return (len);
}

void cpy_all(int size, char **strs, char *sep, char *cpy)
{
	int		i;
	int		j;

	i = -1;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
			*cpy++ = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				*cpy++ = sep[j++];
		}
	}
	*cpy = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*cpy;

	if (size == 0)
	{
		cpy = malloc(1);
		if (!cpy)
			return (NULL);
		*cpy = '\0';
		return (cpy);
	}
	len = total_length(size, strs, sep);
	cpy = malloc(sizeof(*cpy) * len + 1);
	if (!cpy)
		return (NULL);
	cpy_all(size, strs, sep, cpy);
	return (cpy);
}
/*
int	main(int argc, char **argv)
{
	char	*res;
	int		size;

	if (argc < 3)
	{
		puts("Error: ./a.out size <str1>...<strN> sep");
		return (1);
	}
	size = atoi(argv[1]);
	if (size <= 0 || argc != size + 3)
	{
		puts("Error: size o argumentos invalidos");
		return (1);
	}
	res = ft_strjoin(size, &argv[2], argv[argc - 1]);
	if (!res)
	{
		puts("Error al concatenar.");
		return (1);
	}
	printf("%s\n", res);
	return (0);
}
*/
