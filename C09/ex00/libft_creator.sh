# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmarin-n <rmarin-n@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/30 14:40:57 by rmarin-n          #+#    #+#              #
#    Updated: 2025/07/30 14:48:17 by rmarin-n         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c -g -Wall -Werror -Wextra  ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar -rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
