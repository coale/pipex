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

CFLAG = -Wall -Wextra -Werror

NAME = libft.a

LIBFT :=  functions/ft_atoi.c\
        functions/ft_bzero.c\
        functions/ft_calloc.c\
        functions/ft_isalnum.c\
        functions/ft_isalpha.c \
        functions/ft_isascii.c\
        functions/ft_isdigit.c\
        functions/ft_isprint.c\
        functions/ft_itoa.c\
        functions/ft_memchr.c\
        functions/ft_memcmp.c\
        functions/ft_memcpy.c\
        functions/ft_memmove.c\
        functions/ft_memset.c\
        functions/ft_putchar_fd.c\
        functions/ft_putendl_fd.c\
        functions/ft_putnbr_fd.c\
        functions/ft_putstr_fd.c\
        functions/ft_split.c\
        functions/ft_strchr.c\
        functions/ft_strdup.c\
        functions/ft_strjoin.c\
        functions/ft_strlcat.c\
        functions/ft_strlcpy.c\
        functions/ft_strlen.c\
        functions/ft_strmapi.c\
        functions/ft_strncmp.c\
        functions/ft_strnstr.c\
        functions/ft_strrchr.c\
        functions/ft_substr.c\
        functions/ft_tolower.c\
        functions/ft_toupper.c\
        functions/ft_striteri.c\
        functions/ft_strtrim.c\
        functions/ft_lstadd_back.c\
        functions/ft_lstadd_front.c\
        functions/ft_lstdelone.c\
        functions/ft_lstiter.c\
        functions/ft_lstlast.c\
        functions/ft_lstnew.c\
        functions/ft_lstclear.c\
        functions/ft_lstmap.c\
        functions/ft_lstsize.c

PRINTF :=  	ft_printf/ft_form_c.c\
		ft_printf/ft_form_di.c\
        	ft_printf/ft_form_p.c\
        	ft_printf/ft_form_s.c\
        	ft_printf/ft_form_u.c\
        	ft_printf/ft_form_x.c\
        	ft_printf/ft_printf.c\
        	
GNL :=  get_next_line/get_next_line_bonus.c\
	get_next_line/get_next_line_utils_bonus.c\

OBJ_S = $(LIBFT:.c=.o) $(PRINTF:.c=.o) $(GNL:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_S)
	
	ar -rcs $@ $^

%.o:%.c
	@$(CC) -c $(CFLAG) -I. $< -o $@

clean:
	@rm -f ${OBJ_S}

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

