SHELL			:= /bin/sh
.SUFFIXES		:=
.SUFFIXES		:= .c .o
.DEFAULT_GOAL	:= all

CC				:= gcc
CFLAGS			:= -Wall -Wextra -Werror
CFLAGS			+= -Wpedantic -std=c11
CFLAGS			+= -Iinc -Iinc/ft_printf -fPIC
DEBUG			:= -g3 -fsanitize=address
#CFLAGS			+= $(DEBUG)
NAME			:= libft.a

VPATH			:= src

ctrldir	:= ctrl
ctrl	:= ft_exit.c ft_isoption.c ft_options.c ft_swap.c ft_swap_int.c
ctrl	:= $(addprefix $(ctrldir)/, $(ctrl))

ctypedir := ctype
ctype	:= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isblank.c ft_isdash.c 
ctype	+= ft_isdigit.c ft_isint.c ft_islower.c ft_isprint.c ft_isspace.c 
ctype	+= ft_isupper.c ft_tolower.c ft_toupper.c
ctype	:= $(addprefix $(ctypedir)/, $(ctype))

iodir	:= io
io		:= ft_gnl.c ft_print_bits.c ft_print_int_tab.c ft_putchar.c 
io		+= ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c
io		+= ft_putnbr_endl.c ft_putnbr_fd.c ft_putnstr.c ft_putstr.c 
io		+= ft_putstr_fd.c
io		:= $(addprefix $(iodir)/, $(io))

listdir	:= list
list	:= ft_lstadd.c ft_lstappend.c ft_lstdel.c ft_lstdelone.c 
list	+= ft_lstdepth.c ft_lstid.c ft_lstiter.c ft_lstlast.c ft_lstmap.c 
list	+= ft_lstnew.c ft_lstpluck.c ft_lstrev.c ft_lstrmif.c ft_lstsort.c 
list	+= ft_print_node.c ft_stdin_to_list.c
list	:= $(addprefix $(listdir)/, $(list))

mathdir	:= math
math	:= ft_abs.c ft_array_min.c ft_count_digits_base.c 
math	+= ft_count_digits_base_u.c ft_max.c ft_min.c ft_quicksort.c
math	+= ft_sort_tab.c  ft_sqrt.c ft_tab_avg.c
math	:= $(addprefix $(mathdir)/, $(math))

memdir	:= mem
mem		:= ft_bzero.c ft_free_node.c ft_memalloc.c ft_memccpy.c ft_memchr.c 
mem		+= ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c 
mem		+= ft_realloc.c
mem		:= $(addprefix $(memdir)/, $(mem))

strdir	:= str
str		:= ft_atoi_base.c ft_atoi.c ft_itoa_base.c ft_itoa.c ft_strcat.c 
str		+= ft_strchr.c ft_strclen.c ft_strclr.c ft_strcmp.c ft_strcountif.c 
str		+= ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c 
str		+= ft_striteri.c  ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c 
str		+= ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c
str		+= ft_strnstr.c  ft_strrchr.c ft_strrealloc.c ft_strrev.c ft_strsplen.c
str		+= ft_strsplit.c  ft_strstr.c ft_strsub.c ft_strtrim.c
str		:= $(addprefix $(strdir)/, $(str))

ftprntfdir := ft_printf
ftprntf	:= buf.c buf_unicode.c cc.c conversions.c ddioo.c 
ftprntf	+= ft_printf.c get_int_data.c get_op.c integer_conversions.c
ftprntf	+= print_int_conv.c ss.c uuxx.c
ftprntf	:= $(addprefix $(ftprntfdir)/, $(ftprntf))

hashdir	:= hash
hash	:= ft_djb.c ft_jenkins.c
hash	:= $(addprefix $(hashdir)/, $(hash))

objdir	:= obj
ddir	:= dep
src		:= $(ctrl) $(ctype) $(io) $(list) $(math) $(mem) $(str)
src		+= $(ftprntf) $(hash)
obj		:= $(addprefix $(objdir)/, $(src:%.c=%.o))
dep		:= $(addprefix $(ddir)/, $(src:%.c=%.d))

#testdir	:= test
#hashtest	:= 
#hashtest	:= $(addprefix $(testdir)/$(hashdir)/, $(hashtest))
#testsrc	:= $(hashtest)
#testobj	:= $(addprefix $(objdir)/, $(testsrc:%.c=%.o))
#testdep	:= $(addprefix $(ddir)/, $(testsrc:%.c=%.d))

-include $(dep)

%/.f:
	mkdir -p $(@D)
	touch $@

.PRECIOUS: %/.f
.SECONDEXPANSION:
.PRECIOUS: $(obj)

dname = $(subst $(1),$(2),$(basename $(3))).d
$(objdir)/%.o:	%.c $$(@D)/.f $$(subst $(objdir),$(ddir),$$(@D))/.f
	$(CC) $(CFLAGS) -c $< -o $@ -MMD -MP -MF $(call dname,$(objdir),$(ddir),$@)

.PHONY: all
all: $(NAME)

ARFLAGS	:=	Urcs
.NOTPARALLEL: $(NAME)
$(NAME): 	$$@($(obj))

.PHONY: clean
clean:
	$(RM) -r $(objdir) $(ddir)

.PHONY: fclean
fclean: clean
	$(RM) $(NAME)

.PHONY: re
.NOTPARALLEL: re
re: fclean all
