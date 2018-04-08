# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/05 11:36:52 by cpireyre          #+#    #+#              #
#    Updated: 2018/04/08 11:12:33 by cpireyre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

CC			=	gcc	
CFLAGS		=	-Wall -Wextra -Werror -I.
BFLAGS		=	-c -o

AR			:=	libtool -static -o
RL			:= 	ranlib
RM			:=	rm -f

NAME		=	libft.a

IO			=	ft_putchar.c ft_putstr.c ft_putchar_fd.c ft_putstr_fd.c
STRING		=	ft_strlen.c
CTYPE		=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
			   	ft_isprint.c ft_islower.c ft_isupper.c
MATH		=	ft_iswithin.c ft_min.c ft_max.c
CONVERT		=	ft_tolower.c ft_toupper.c
MEM			=	ft_memcpy.c
LIST		=	ft_lstnew.c

SRC_PATH	= 	./
SRC_NAME	=	$(IO) $(STRING) $(CTYPE) $(MATH) $(CONVERT) $(MEM) $(LIST)
OBJ_PATH	= 	./obj/
OBJ_NAME	=	$(SRC_NAME:.c=.o)
SRC			=	$(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ			=	$(addprefix $(OBJ_PATH),$(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $^
	$(RL) $@

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	$(CC) $(CFLAGS) $(BFLAGS) $@ $<

clean: 
	$(RM) $(OBJ) 
	rmdir $(OBJ_PATH) 2> /dev/null || true

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
