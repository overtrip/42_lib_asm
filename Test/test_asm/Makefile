#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdelage <mdelage@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/05/18 21:43:21 by mdelage           #+#    #+#              #
#    Updated: 2015/02/04 11:21:35 by mdelage          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

APATH = asm
CPATH = srcs
HPATH = includes
OPATH = obj

CC = /usr/local/bin/gcc
ASM = $(HOME)/.brew/bin/nasm
MKDIR = /bin/mkdir
RM = /bin/rm
AFLAGS = -f macho64
CFLAGS = -Wall -Wextra -Werror -I $(HPATH)
LDFLAGS = -L . -lfts

NAME = libfts.a
TNAME = a.out
AR = /usr/bin/ar
RANLIB = /usr/bin/ranlib

HEADER = libft.h

AF = ft_bzero.s \
	ft_isalpha.s \
	ft_isdigit.s \
	ft_isalnum.s \
	ft_isascii.s \
	ft_isprint.s \
	ft_toupper.s \
	ft_tolower.s \
	ft_puts.s \
	ft_strlen.s \
	ft_strcat.s \
	ft_memset.s \
	ft_memcpy.s \
	ft_strdup.s \
	ft_cat.s

CF = main.c \
	test_ft_bzero.c \
	test_ft_isstuff.c \
	test_ft_tostuff.c \
	test_ft_puts.c \
	test_ft_strlen.c \
	test_ft_strcat.c \
	test_ft_memset.c \
	test_ft_memcpy.c \
	test_ft_strdup.c \
	test_ft_cat.c

HFILES = $(patsubst %,$(HPATH)/%, $(HEADER))
OFILES = $(patsubst %.c,$(OPATH)/%.o, $(CF))
AFILES = $(patsubst %.s,$(OPATH)/%.o, $(AF))

.SUFFIXES:

.SILENT: all $(NAME) clean fclean $(OPATH) $(TNAME) test.clean test.fclean var

all: $(OPATH) $(NAME)

$(NAME): $(AFILES)
	echo "Building $(NAME)"
	$(AR) rc $(NAME) $^
	$(RANLIB) $(NAME)

$(OPATH)/%.o: $(APATH)/%.s
	@echo "Creating file $@"
	@$(ASM) $(AFLAGS) $< -o $@

clean:
	echo "Deletion of building files"
	$(RM) -rf $(OPATH)

fclean: clean test.fclean
	echo "Deletion of $(NAME)"
	$(RM) -f $(NAME)

re: fclean all

$(OPATH):
	echo "Creation of building directory"
	$(MKDIR) $(OPATH)

test: $(OPATH) $(TNAME)

$(TNAME): $(NAME) $(OFILES)
	echo "Building $@"
	$(CC) $(LDFLAGS) $^ -o $@

$(OPATH)/%.o: $(CPATH)/%.c $(HPATH)/test.h
	@echo "Building test file $@"
	@$(CC) $(CFLAGS) -c $< -o $@

test.clean:
	echo "Deletion of test building files"
	$(RM) -f $(OFILES)

test.fclean: test.clean
	echo "Deletion of $(TNAME)"
	$(RM) -f $(TNAME)

test.re: test.fclean test

var:
	echo "== gcc =="
	$(CC) --version
	echo "== nasm =="
	$(ASM) -v
	echo "== CFLAGS =="
	echo $(CFLAGS)
	echo "== AFLAGS =="
	echo $(AFLAGS)
	echo "== headers =="
	echo $(HFILES)
	echo "== c files =="
	echo $(CF)
	echo $(OFILES)
	echo "== s files == "
	echo $(AF)
	echo $(AFILES)
