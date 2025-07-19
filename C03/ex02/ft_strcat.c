/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:17:13 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/18 10:50:34 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{	
	char	*ptr;
	
	ptr = dest;
	while(*ptr)
		ptr++;
	while(*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
/*
int main(void)
{
    char mensaje[100] = "Hola";
    char mensaje2[] = "Mundo";

    ft_strcat(mensaje, mensaje2);

    printf("%s\n", mensaje);

    return 0;
}
*/
/*
int	main(int argc, char **argv)
{
	char	buffer[100];

	if (argc != 3)
	{
		printf("El programa solo admite 3 argumentos");
		printf("Ejemplo: ./a.out mensaje mensaje2");
		return (-1);
	}
	buffer[0] = '\0';
	ft_strcat(buffer, argv[1]);
	ft_strcat(buffer, argv[2]);
	printf("%s\n", buffer);
	return (0);
}
*/
