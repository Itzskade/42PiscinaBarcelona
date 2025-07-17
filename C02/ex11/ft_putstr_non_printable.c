/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_non_printable.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:56:14 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/07/15 19:20:54 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	puthex(unsigned int n)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex[n / 16]);
	ft_putchar(hex[n % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	c;

	while (*str)
	{
		c = *str;
		if (c < 32 || c > 126)
			puthex(c);
		else
			ft_putchar(c);
		str++;
	}
}

/*
int main(void)
{
    char *mensaje = "Hola\nMundo";

    printf("Original:\n%s\n", mensaje);
    printf("No imprimibles:\n");
    ft_putstr_non_printable(mensaje);
    ft_putchar('\n');
    return 0;
}
*/

/*
./a.out $'Coucou\ntu vas bien ?'

int	main(int argc, char **argv)
{
	char	*mensaje;
	
	if (argc != 2)
	{
		printf("El programa solo admite 2 argumentos\n");
		printf("Ejemplo: ./a.out Mensaje\n");
		return (1);
	}
	mensaje = argv[1];
	printf("Mensaje original: \n%s", mensaje);
	printf("\nMensaje editado: \n");
	ft_putstr_non_printable(argv[1]);
	return (0);
}
*/
