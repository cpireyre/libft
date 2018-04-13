# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpireyre <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/05 11:36:52 by cpireyre          #+#    #+#              #
#    Updated: 2018/04/13 09:39:45 by cpireyre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

CC			=	gcc	
CFLAGS		=	-Wall -Wextra -Werror -I.
BFLAGS		=	-c -o

AR			:=	ar rc
RL			:= 	ranlib
RM			:=	rm -f

NAME		=	libft.a

IO			=	ft_putchar.c ft_putstr.c ft_putchar_fd.c ft_putstr_fd.c \
				ft_putendl_fd.c ft_putendl.c ft_putnbr_fd.c ft_putnbr.c
STRING		=	ft_strlen.c ft_strnew.c ft_strncpy.c ft_strcpy.c ft_strdup.c \
				ft_striter.c ft_strmap.c ft_strclr.c ft_strdel.c ft_strsub.c \
				ft_strchr.c ft_strncmp.c ft_strrev.c ft_strrchr.c ft_strcmp.c \
 				ft_strnequ.c
CTYPE		=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
			   	ft_isprint.c ft_islower.c ft_isupper.c ft_isspace.c
MATH		=	ft_iswithin.c ft_min.c ft_max.c ft_abs.c ft_magnitude.c
CONVERT		=	ft_tolower.c ft_toupper.c ft_itoa.c
MEM			=	ft_memcpy.c ft_memdel.c ft_memset.c ft_memalloc.c \
				ft_bzero.c ft_memcmp.c ft_memccpy.c ft_memmove.c ft_memchr.c \
 				ft_swap.c
LIST		=	ft_lstnew.c ft_lstdelone.c ft_lstadd.c ft_lstiter.c ft_lstlast.c \
				ft_lstdepth.c ft_lstappend.c ft_lstmap.c ft_lstdel.c

SRC_PATH	= 	./
SRC_NAME	=	$(IO) $(STRING) $(CTYPE) $(MATH) $(CONVERT) $(MEM) $(LIST)
OBJ_PATH	= 	./obj/
OBJ_NAME	=	$(SRC_NAME:.c=.o)
SRC			=	$(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ			=	$(addprefix $(OBJ_PATH),$(OBJ_NAME))
FUNC		=	$(basename $(notdir $@))
HEADER		:=	newlibft.h
DEFHEADER	:=	$(shell echo $(HEADER) | tr . _ | tr a-z A-Z)
STRUCT		=	./structs

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $@ $^
	@$(RL) $@

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) $(CFLAGS) $(BFLAGS) $@ $<
	@echo `cat $(FUNC).c | grep $(FUNC) | sed -n "2p"`\; >> $(HEADER)

clean: 
	@$(RM) $(OBJ) 
	@rmdir $(OBJ_PATH) 2> /dev/null || true

fclean: clean
	$(RM) $(NAME)

re: fclean all

header:
	@$(RM) $(HEADER)
	@vim -c ':execute "normal\OP" | normal 12GJ' -c wq $(HEADER)
	echo "#ifndef $(DEFHEADER)\n# define $(DEFHEADER)\n" >> $(HEADER)
	cat $(STRUCT) >> $(HEADER) && echo "\n\c" >> $(HEADER)
	@make clean
	@make $(OBJ)
	@vim -c ':let @i="0whxi					j"' -c ':let @t="/ft_.*(VGNj:normal @i:noh" | \
		normal @t' -c "g/^int/normal wi	" -c wq $(HEADER)
	echo "\n#endif" >> $(HEADER)
	@cat $(HEADER)
	norminette $(HEADER)
	@make clean

.PHONY: all, clean, fclean, re, header
