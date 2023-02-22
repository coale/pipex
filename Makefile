# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aconta <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/26 15:06:41 by aconta            #+#    #+#              #
#    Updated: 2023/02/04 15:31:12 by aconta           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAG = -Wall -Wextra -Werror -g

NAME = pipex

LIBFT = libft/libft.a

SRC :=  pipex.c utils.c

OBJ_S = $(SRC:.c=.o)

all: $(NAME)

libftcompile:
	@make -C libft

$(NAME): libftcompile
	@$(CC) $(CFLAG) -o $(NAME) $(SRC) $(LIBFT) 

%.o:%.c
	@$(CC) -c $(CFLAG) -I. $< -o $@

clean:
	@make clean -C libft
	@rm -f ${OBJ_S}

fclean: clean
	@make fclean -C libft
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

