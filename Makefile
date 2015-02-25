# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jealonso <jealonso@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/29 13:30:18 by jealonso          #+#    #+#              #
#    Updated: 2015/02/25 16:15:33 by jealonso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ASM = ~/.brew/bin/nasm

AR = ar
RANLIB = ranlib

AFLGS = -f macho64

NAME = libfts.a

SRCS = \
		ft_bzero.s \
		ft_isalnum.s \
		ft_isalpha.s \
		ft_isascii.s \
		ft_isdigit.s \
		ft_islower.s \
		ft_isprint.s \
		ft_isupper.s \
		ft_puts.s \
		ft_strcat.s \
		ft_strlen.s \
		ft_tolower.s \
		ft_toupper.s \
		ft_memset.s \
		ft_memcpy.s \
		ft_strdup.s \
		ft_cat.s \
		ft_strequ.s \
		ft_strcmp.s	\
		ft_memchr.s \
		ft_memalloc.s \
		ft_atoi.s

OBJS = $(SRCS:.s=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) rc $@ $^
	$(RANLIB) $@

%.o: %.s
	$(ASM) -ggdb $(AFLGS) $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f libfts.a

re: fclean all
