# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hait-bah <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/03 15:59:41 by hait-bah          #+#    #+#              #
#    Updated: 2025/08/05 13:27:48 by hait-bah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
cc -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rcs libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

