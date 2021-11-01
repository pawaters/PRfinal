# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pwaters <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/29 17:25:44 by pwaters           #+#    #+#              #
#    Updated: 2021/11/01 16:45:14 by pwaters          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = ./srcs/main.c

INCLUDES = includes

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra $(SRCS) -I $(INCLUDES) -o $(NAME)

clean: 
	rm -f ft_display_file.o

fclean: clean
	rm -f $(NAME)

re: fclean all

