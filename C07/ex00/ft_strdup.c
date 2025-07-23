/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:16:01 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/23 17:36:47 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	char	*dup;	
	int		len;

	len = 0;
	while (src[len])
		len++;
	dup = malloc(sizeof(*dup) * (len + 1));
	if (!dup)
		return (NULL);
	ptr = dup;
	while (*src)
		*dup++ = *src++;
	*dup = '\0';
	return (ptr);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("El programa solo admite 2 parametros");
		printf("Ejemplo: ./a.out string");
		return (1);
	}
	printf("El mensaje dupliacado es: %s", ft_strdup(argv[1]));
	return (0);
}
*/
