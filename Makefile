# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nfaust <nfaust@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 17:02:57 by nfaust            #+#    #+#              #
#    Updated: 2022/11/18 04:15:10 by nfaust           ###   ########.fr        #
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
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c

BONUS_SOURCES = ft_lstnew_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstsize_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstiter_bonus.c \
	ft_lstmap_bonus.c

OBJ = $(SOURCES:.c=.o)

OBJ_BONUS = $(BONUS_SOURCES:.c=.o)

all:	${NAME}

${NAME}:    ${OBJ}
	
	${ARCHIVE} ${NAME} ${OBJ}

clean:
	${REMOVE} ${OBJ} ${OBJ_BONUS}

fclean:	clean
	${REMOVE} ${NAME}

%.o : %.c ${HEADER}
	${CC} ${FLAGS} -c $< -o $@ -I . 

re:    fclean all

bonus:		${OBJ} ${OBJ_BONUS}
	${ARCHIVE} ${NAME} ${OBJ} ${OBJ_BONUS}

.PHONY: re fclean all clean bonus