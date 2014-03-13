# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjacquin <mjacquin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 12:16:18 by mjacquin          #+#    #+#              #
#    Updated: 2014/03/12 17:37:18 by mjacquin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
SRCDIR		= srcs
OBJDIR		= objs

INC			= -I./includes

SRC			= \
			ft_memset.o \
			ft_bzero.o \
			ft_memcpy.o \
			ft_memccpy.o \
			ft_memmove.o \
			ft_memchr.o \
			ft_memcmp.o \
			ft_strlen.o \
			ft_strdup.o \
			ft_strcpy.o \
			ft_strncpy.o \
			ft_strcat.o \
			ft_strncat.o \
			ft_strlcat.o \
			ft_strchr.o \
			ft_strrchr.o \
			ft_strstr.o \
			ft_strnstr.o \
			ft_strcmp.o \
			ft_strncmp.o \
			ft_atoi.o \
			ft_isalpha.o \
			ft_isdigit.o \
			ft_isalnum.o \
			ft_isascii.o \
			ft_isprint.o \
			ft_toupper.o \
			ft_tolower.o \
			\
			ft_memalloc.o \
			ft_memdel.o \
			ft_strnew.o \
			ft_strdel.o \
			ft_strclr.o \
			ft_striter.o \
			ft_striteri.o \
			ft_strmap.o \
			ft_strmapi.o \
			ft_strequ.o \
			ft_strnequ.o \
			ft_strsub.o \
			ft_strjoin.o \
			ft_strtrim.o \
			ft_strsplit.o \
			ft_itoa.o \
			ft_putchar.o \
			ft_putstr.o \
			ft_putendl.o \
			ft_putnbr.o \
			ft_putchar_fd.o \
			ft_putstr_fd.o \
			ft_putendl_fd.o \
			ft_putnbr_fd.o \
			\
			ft_lstnew.o \
			ft_lstdelone.o \
			ft_lstdel.o \
			ft_lstadd.o \
			ft_lstiter.o \
			ft_lstmap.o \
			\
			ft_lstaddback.o \
			ft_realloc.o \
			ft_tablen.o \
			ft_tabdel.o \
			ft_lst.o \
			ft_lst2.o \

SRCS	= $(addprefix $(OBJDIR)/, $(SRC))

CFILE	= total.mak
PFILE	= progress.mak

.PHONY: all re clean fclean debug

#########################
# ---- Rules start ---- #
#########################

all: $(NAME)

$(NAME): $(SRCS)
	@printf " -> \033[32m[Done]\033[0m\n"
	@printf "\033[33m[Building $(NAME)]\033[0m"
	@ar rc $(NAME) $(SRCS)
	@printf " -> \033[32m[Done]\033[0m\n"
	@printf "\033[33m[Indexing $(NAME)]\033[0m"
	@ranlib $(NAME)
	@printf " -> \033[32m[Done]\033[0m\n"
	@printf "\033[34m%80s\033[0m\n" "[$(NAME)]" | tr ' ' -
	@rm -f $(CFILE) $(PFILE)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@if ! test -f $(CFILE); then \
		COUNT=0; \
		for TMP in $(SRC); do \
			let "COUNT+=1"; \
		done; \
		echo $$COUNT > $(CFILE); \
	fi
	@test -f $(PFILE) || (echo 0 > $(PFILE); printf "\033[34m%-80s\033[0m\n" "[$(NAME)]" | tr ' ' -)
	@test -d $(@D) || mkdir $(@D)
	@echo $$(($$(cat $(PFILE)) + 1)) > $(PFILE)
	@printf "\r\033[33m[Compiling .o]\033[0m %3s%%" $$(($$(cat $(PFILE)) * 100 / $$(cat $(CFILE))))
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

debug: CC = cc -g
debug: re
