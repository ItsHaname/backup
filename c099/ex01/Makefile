# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hait-bah <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/04 15:13:35 by hait-bah          #+#    #+#              #
#    Updated: 2025/08/05 15:33:43 by hait-bah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_file = srcs
SRCS = $(SRC_file)/ft_putchar.c $(SRC_file)/ft_swap.c $(SRC_file)/ft_putstr.c $(SRC_file)/ft_strlen.c $(SRC_file)/ft_strcmp.c
OBJS = $(SRCS:.c=.o)
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	echo "ojects:  $^"

$(SRC_file)/%.o:$(SRC_file)/%.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all
