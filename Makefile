# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nfaust <nfaust@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 17:02:57 by nfaust            #+#    #+#              #
#    Updated: 2022/11/16 00:55:18 by nfaust           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
FLAGS = -Wall -Werror -Wextra
ARCHIVE = ar rc
HEADER = libft.h
REMOVE = rm -f
SOURCES = ft_atoi.c \
	ft_calloc.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_memchr.c \
	ft_memcpy.c \
	ft_memset.c \
	ft_strdup.c \
	ft_strlcpy.c \
	ft_strncmp.c \
	ft_strrchr.c \
	ft_toupper.c \
	ft_bzero.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_memcmp.c \
	ft_memmove.c \
	ft_strchr.c \
	ft_strlcat.c \
	ft_strlen.c \
	ft_strnstr.c \
	ft_tolower.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c

OBJ = $(SOURCES:.c=.o)

all:	${NAME}

${NAME}:    ${OBJ}
	
	${ARCHIVE} ${NAME} ${OBJ}

clean:
	${REMOVE} ${OBJ}

fclean:	clean
	${REMOVE} ${NAME}

%.o : %.c ${HEADER}
	${CC} ${FLAGS} -c $< -o $@ -I . 

re:    fclean all

.PHONY: re fclean all clean