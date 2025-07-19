/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:08:50 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/18 13:29:51 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*t;

	if (!*to_find)
	{
		return (str);
	}
	while(*str)
	{
		s = str;
		t = to_find;
		while (*s && *t && *s == *t)
		{
			s++;
			t++;
		} 
		if (!*t)
			return (str);
		str++;
	}
	return (NULL);
}	
/*
int	main(int argc, char **argv)
{
	char	*haystack;
	char	*needle;
	
	if (argc != 3)
	{
		printf("Este programa solo admite 3 argumentos");
		printf("Ejemplo: ./a.out Haystack Needle");
		return (-1);
	}
	haystack = argv[1];
	needle = argv[2];
	printf("La frase es: %s\n", haystack);
	printf("El texto/palabra a buscar es: %s\n", needle);
	printf("Inicio de texto desde la palabra: %s\n", ft_strstr(haystack, needle));
	return (0);
}
*/
/*
int	main(void)
{
	char	*haystack;
	char	*needle;
	
	haystack = "Hola mundo que tal";
	needle = "mundo";
	printf("La frase a buscar es: %s\n", ft_strstr(haystack, needle));
	return (0);
}
*/
