# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nfaust <nfaust@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 22:01:43 by nfaust            #+#    #+#              #
#    Updated: 2022/11/07 22:03:00 by nfaust           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAGS = -Wall -Werror -Wextra
HEADER = libft.h
REMOVE = rm
ARCHIVE = ar rc
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
	ft_tolower.c

OBJ = $(SOURCES:.c=.o)

${NAME}:    ${OBJ}
	
	${CC} ${FLAGS} -c ${SOURCES}
	${ARCHIVE} ${NAME} ${OBJ}

all:       	${NAME}

clean:
	${REMOVE} ${OBJ}

fclean:
	${REMOVE} ${OBJ} ${NAME}

re:    fclean ${NAME}