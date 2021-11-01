# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pwaters <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/29 17:25:44 by pwaters           #+#    #+#              #
#    Updated: 2021/10/31 13:40:07 by paw              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c \
	   	./srcs/ft_strlen.c ./srcs/ft_swap.c

OFILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

INCLUDES = ./includes/

all: $(NAME)

$(NAME): create_o_files
	ar -rc $(NAME) $(OFILES)
	ranlib $(NAME)

create_o_files:
	gcc -Wall -Wextra -Werror -c $(SRCS) -I $(INCLUDES)

clean: 
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

